#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventory.h"

int main() {

    printf("Welcome!\nInitializing . . . \n");

    //open error log file
    //FILE *eptr;
    //eptr = fopen("error.txt", "w");

    //open the inventory file
    FILE *fptr;
    fptr = fopen("inventory.txt", "a");

    //store data in local data structure
    struct ITEM *ptr_item;
    ptr_item = (struct ITEM *) malloc(sizeof(struct ITEM));
    //error check malloc => returns NULL if failed
    if(ptr_item == NULL) {
        printf("ERROR -1");
        //write to error log file => Could not allocate space for struct
        //before quitting need to close error log file
        fclose(fptr); //before quitting need to close the inventory file
        return -1;
    }

    printf("Success!\n"); //print statements after each step
    printf("Gathering user input . . . \n");

    //accept user input
    ERROR_CHECK = userInput(ptr_item);
    //error check everything
    if(ERROR_CHECK != 0) {
        printf("ERROR -2");
        //write to error log file => Could not get user input
        //before quitting need to close error log file
        fclose(fptr); //before quitting need to close the inventory file
        free(ptr_item); //before quitting need to free malloc
        return -2;
    }

    printf("Input saved successfully!\n"); //print statements after each step

    //print out written data
    //printf("category = %s\n", ptr_item->category);
    //printf("item = %s\n", ptr_item->item);
    //printf("brand = %s\n", ptr_item->brand);
    //printf("color = %s\n", ptr_item->color);

    //write the stored local data to the file
    ERROR_CHECK = write(ptr_item, fptr);
    if(ERROR_CHECK != 0) {
        printf("ERROR -3");
        //write to error log file => Could not get user input
        //before quitting need to close error log file
        fclose(fptr); //before quitting need to close the inventory file
        free(ptr_item); //before quitting need to free malloc
        return -3;
    }

    //repeat

    printf("Shutting down . . .\n");

    //before quitting need to close the error log file
    fclose(fptr); //before quitting need to close the inventory file
    free(ptr_item); //before quitting need to free malloc
    
    printf("Goodbye!\n");
    return 0;
}

int userInput(struct ITEM *ptr) {

    //get user input
    //store input in data structure
        //this should be declared in the main
        //address of structure passed to this function

    printf("Please enter your items in the following format: category item brand color \n");
    ERROR_CHECK = scanf("%s %s %s %s", ptr->category, ptr->item, ptr->brand, ptr->color);
    //did we fail? return -1
    if(ERROR_CHECK < 0) {
        printf("Error saving input");
        return -1;
    }

    //return success=0 or failure<0
    return 0; //success
}

int write(struct ITEM *ptr, FILE *stream) {

    //write data to stream
    ERROR_CHECK = fwrite(ptr, sizeof(char), sizeof(struct ITEM), stream);
    if(ERROR_CHECK != sizeof(struct ITEM)) {
        printf("Error writing to file");
        return -3;
    }

    /*
    Following testing, this function is writing all 20 bytes of each string in the struct
    Updates to be made
        * should only write until end of the string
        * insert a space between each string - follow on would be to distinguish what the words mean i.e. category: user-input
        * build in support for space - user will enter spaces in words as '-' but should be written to the file as a space
    */

    return 0;
}

int read(struct ITEM *ptr, FILE *stream) {

    //read from the file
}