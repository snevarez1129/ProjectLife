#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventory.h"

int main() {

    printf("Welcome!\nInitializing . . . \n");

    //open error log file <Req-3>
    //FILE *eptr;
    //eptr = fopen("error.txt", "w");

    //open the inventory file <Req-2>
    //FILE *fptr;
    //fptr = fopen("inventory.txt", "a");
    //fptr = fopen("inventory.txt", "r");

    //create local data structure to store user input before writing it to file
    struct ITEM *ptr_item;
    ptr_item = (struct ITEM *) malloc(sizeof(struct ITEM));
    //error check malloc => returns NULL if failed
    if(ptr_item == NULL) {
        printf("ERROR: Could not malloc space for ITEM struct\n");
        //write to error log file => Could not allocate space for struct <Req-7>
        //before quitting need to close error log file
        //fclose(fptr); //before quitting need to close the inventory file
        return -1;
    }

    printf("Success!\n"); //print statements after each step
    printf("Gathering user input . . . \n");

    do {

        //accept user input <Req-6>
        ERROR_CHECK = userInput(ptr_item);
        //error check everything
        if(ERROR_CHECK != 0) {
            printf("ERROR: Could not get user input\n");
            //write to error log file => Could not get user input <Req-7>
            //before quitting need to close error log file
            //fclose(fptr); //before quitting need to close the inventory file
            //free(ptr_item); //before quitting need to free malloc
            return -2;
        }

        printf("Input saved successfully!\n"); //print statements after each step

        //print out written data
        //printf("category = %s\n", ptr_item->category);
        //printf("item = %s\n", ptr_item->item);
        //printf("brand = %s\n", ptr_item->brand);
        //printf("color = %s\n", ptr_item->color);

        //write the stored local data to the file <Req-8>
        //ERROR_CHECK = write(ptr_item, fptr);
        //if(ERROR_CHECK != 0) {
            //printf("ERROR -3");
            //write to error log file => Could not get user input <Req-7>
            //before quitting need to close error log file
            //fclose(fptr); //before quitting need to close the inventory file
            //free(ptr_item); //before quitting need to free malloc
            //return -3;
        //}

        // ERROR_CHECK = read(ptr_item, fptr);
        // if (ERROR_CHECK != 0) {
        //     printf("ERROR -4");
        //     //write to error log file => Could not get user input
        //     //before quitting need to close error log file
        //     fclose(fptr); //before quitting need to close the inventory file
        //     free(ptr_item); //before quitting need to free malloc
        //     return -4;
        // }

        //print out read data
        // printf("category = %s\n", ptr_item->category);
        // printf("item = %s\n", ptr_item->item);
        // printf("brand = %s\n", ptr_item->brand);
        // printf("color = %s\n", ptr_item->color);

        //printf("Data written successfully!\n"); //print statements after each step
        //printf("Would you like to enter another item? [Y/N]: ");
        //ERROR_CHECK = scanf("%c", &CONTINUE);
        //did we fail? return -1
        //if(ERROR_CHECK < 0) {
            //printf("Error saving input");
            //return -1;
        //}

    } while(CONTINUE == 'Y'); //repeat

    //printf("Shutting down . . .\n");

    //before quitting need to close the error log file
    //fclose(fptr); //before quitting need to close the inventory file
    //free(ptr_item); //before quitting need to free malloc
    
    //printf("Goodbye!\n");
    return 0;
}
