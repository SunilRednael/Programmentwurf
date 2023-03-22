#include <stdio.h>
#include <string.h>

//include header-file developer_group.h
#include "/workspaces/Programmentwurf/include/developer_group.h"


char logo_template[MAX_LOGO_LENGTH] =   " -------------   -------------   -------------   -------------   -------------- |             |  --------------\n|             | |             | |             | |               |               |             | |              \n|             | |             |	|             | |               |               |             | |              \n|             | |             |  -------------   -------------  |                -------------   --------------\n -------------  |             | |           | 		      | |               |             | |              \n|               |             | |            |	 	      | |               |             | |             \n|                -------------  |             |  -------------   -------------- |             |  -------------- \n";


void developer_group_init(developer_group *developer_group, char dev1_name[], char dev1_alias[], char dev2_name[], char dev2_alias[])
{

   /*check if one of the pointer is NULL
   if yes, show error and return*/

   if(developer_group == NULL || dev1_name == NULL || dev2_name == NULL)
   {
      printf("ERROR");
      return;
   }

   developer_init(&developer_group->developer[0], dev1_name, dev1_alias);
   developer_init(&developer_group->developer[1], dev2_name, dev2_alias);
   strncpy(developer_group->logo, logo_template, MAX_LOGO_LENGTH);

}

//Access to the function to print the names and aliase 
void print_developer(developer developer[])
{
   for(int i = 0; i < DEVELOPER_AMOUNT; i++)
   {
      printf("Developer %d is : %s alias %s\n", i + 1, developer[i].name, developer[i].alias);
   }
}

//Access to the function to print th egroup logo
void print_logo(developer_group *developer_group)
   {

   /*check if one of the pointer is NULL
   if yes, show error and return*/

   if(developer_group == NULL) 
   {
      printf("ERROR");
      return;
   }
      //on the other hand print the logo
      printf("%s", developer_group->logo);
}


