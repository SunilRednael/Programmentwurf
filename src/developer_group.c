#include <stdio.h>
#include <string.h>
#include "/workspaces/Programmentwurf/include/developer_group.h"


char logo_template[MAX_LOGO_LENGTH] =   " -------------   -------------   -------------   -------------   -------------- |             |  --------------\n|             | |             | |             | |               |               |             | |              \n|             | |             |	|             | |               |               |             | |              \n|             | |             |  -------------   -------------  |                -------------   --------------\n -------------  |             | |           | 		      | |               |             | |              \n|               |             | |            |	 	      | |               |             | |             \n|                -------------  |             |  -------------   -------------- |             |  -------------- \n";


void developer_group_init(developer_group *developer_group, char dev1_name[], char dev1_alias[], char dev2_name[], char dev2_alias[])
{
   if(developer_group == NULL || dev1_name == NULL || dev2_name == NULL)
   {
      printf("ERROR");
     return;
   }

   developer_init(&developer_group->developer[0], dev1_name, dev1_alias);
   developer_init(&developer_group->developer[1], dev2_name, dev2_alias);
   strncpy(developer_group->logo, logo_template, MAX_LOGO_LENGTH);

}

void print_developer(developer developer[])
{
   for(int i = 0; i < DEVELOPER_AMOUNT; i++)
   {
      printf("Developer %d ist : %s alias %s\n", i + 1, developer[i].name, developer[i].alias);
   }
}
   void print_logo(developer_group *developer_group)
   {
      if(developer_group == NULL) 
      {
         printf("ERROR");
         return;
      }
         printf("%s", developer_group->logo);
}


























/*int main(void)
{
    struct developer_group
    {
        char logo;
    }dg;

    struct developer_group d1 = {"
    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣶⠆⢀⣴⣾⣿⠇⢀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⣴⣿⣿⠁⢠⣿⣿⣿⡏⠀⣼⡄⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣼⡇⠀⣆⠀⠀⣼⣿⣿⡇⠀⣼⣿⣿⣿⠇⢸⣿⣧⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣶⣾⣿⣿⣿⡇⢠⣿⠀⢰⣿⣿⣿⡇⠀⣿⣿⣿⣿⠀⣼⣿⣿⣆⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⡿⢠⣿⣿⠀⣾⣿⣿⣿⡇⢰⣿⣿⣿⡟⠀⡟⠀⠈⣿⡄
⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢟⣴⣿⣿⡟⢸⣿⣿⣿⣿⠃⣸⣿⣿⣿⡇⠀⠀⠀⠀⣿⣧
⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⡿⢁⣿⣿⣿⣿⡿⢀⣿⣿⣿⣿⠀⠀⠀⠀⠀⣿⣿
⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢁⣾⣿⣿⣿⣿⠃⣼⣿⣿⣿⡟⠀⠀⠀⠀⣸⣿⡿
⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣾⣿⣿⣿⣿⣿⠏⣠⣿⣿⣿⣿⠃⠀⠀⠀⢰⣿⣿⡇
⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢋⣴⣿⣿⣿⣿⠏⠀⠀⠀⣰⣿⣿⡿⠀
⠀⠀⠀⢸⣿⣿⣿⣿⠿⠛⠉⠉⠉⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⠏⠀⠀⢀⣾⣿⣿⡿⠁⠀
⠀⠀⠀⠈⣿⣿⠟⠁⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⢀⣤⣾⣿⣿⣿⠟⠁⠀⠀
⠀⠀⠀⠀⠛⠁⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣾⣿⣿⣿⣿⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣾⣿⣿⣿⡿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣴⠀⠀⠀⠀⠀⣠⣴⣿⣿⣿⣿⡿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢠⣾⣿⠀⠀⣠⣴⣾⣿⣿⡿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣰⣿⣿⣿⣶⣿⣿⣿⡿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⣰⣿⣿⣿⣿⡿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⣰⣿⣿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⡰⠟⠉
"};

printf("%s", dg1.logo)                                                                                    

}
*/
