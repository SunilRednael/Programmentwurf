//include header-file developer.h
#include "/workspaces/Programmentwurf/include/developer.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void developer_init(developer *developer, char name[], char alias[])
{

  /*check if one of the pointers is NULL
  if yes, show error and return*/

  if (developer == NULL || name == NULL || alias == NULL)
  {
    printf("ERROR");
    return;
  }

    //copy string of the name and aliase
    strncpy(developer->name, name, sizeof(developer->name));
    strncpy(developer->alias, alias, sizeof(developer->alias));
}

