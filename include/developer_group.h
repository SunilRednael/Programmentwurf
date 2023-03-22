#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_

// include the library developer.h to embed th content of it
#include "developer.h"

#define MAX_LOGO_LENGTH 40000
#define DEVELOPER_AMOUNT 2

extern char logo_template[];

//declare a structure to define and store thw group logo, the name and aliases of the developers
typedef struct developer_group
{
    char logo[MAX_LOGO_LENGTH];
    developer developer[DEVELOPER_AMOUNT];
}   developer_group;

// create a function to define the developers
void developer_group_init(developer_group *developer_group, char dev1_name[], char dev1_alias[], char dev2_name[], char dev2_alias[]);

//function to print the developers an d the group logo
void print_developer(developer developer[]);
void print_logo(developer_group *developer_group);


#endif