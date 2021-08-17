#ifndef INVENTORY_H
#define INVENTORY_H

//Variables
int ERROR_CHECK;

//Data Structure
struct ITEM { //ITEM
    char category[20]; //category
    char item[20]; //clothing item
    char brand[20]; //brand
    char color[20]; //color
};

//Function Prototypes
int userInput(struct ITEM *); //get user input
int write(struct ITEM *, FILE *); //write to file
int read(struct ITEM *, FILE *); //read from file

#endif
