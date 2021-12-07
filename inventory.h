#ifndef __INVENTORY_H__
#define __INVENTORY_H__

//Defines
#define BUFFER_SIZE 1024
#define CATEGORIES 7

//Variables
int ERROR_CHECK;
char CONTINUE;

//Data Structure
struct ITEM { //ITEM
    char category[BUFFER_SIZE]; //category
    char item[BUFFER_SIZE]; //clothing item
    char brand[BUFFER_SIZE]; //brand
    char color[BUFFER_SIZE]; //color
};

//Function Prototypes
int userInput(struct ITEM *); //get user input
int write(struct ITEM *, FILE *); //write to file
int read(struct ITEM *, FILE *); //read from file

#endif
