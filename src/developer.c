#include "/workspaces/Programmentwurf/include/developer.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void developer_init(developer *developer, char name[], char alias[])
{
  if (developer == NULL || name == NULL || alias == NULL)
  {
    printf("ERROR");
    return;
  }
 strncpy(developer->name, name, sizeof(developer->name));
 strncpy(developer->alias, alias, sizeof(developer->alias));
}
























//#include <stdio.h>
//#include <string.h>


//typedef struct
//{
 //  char name[25];
  // char aliase[12];
   
//} Developers;

//int main() 
//{

 //  Developers D1 = {"Mathis Stützle", "Student"};
 //  Developers D2 = {"Linus Hahne", "Student"};

  // printf("%s\n", D1.name);
  // printf("%s\n", D1.aliase);
  // printf("\n");
  // printf("%s\n", D2.name);
  // printf("%s\n", D2.aliase);

  // return 0; 
//}