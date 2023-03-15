#include include/developer.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void developer_print(developer const *const s)
{
printf("=====================\n");
        
        printf("\033[4;35m%s\033[0m\n", s->name);
        printf("ID: %u\n", s->id);
        printf("=====================\n");
        printf(" Grades: \n");

}
























 /*#include <stdio.h>
#include <string.h>


typedef struct
{
   char name[25];
   char aliase[12];
   
} Developers;

int main() 
{

   Developers D1 = {"Mathis Stützle", "Student"};
   Developers D2 = {"Linus Hahne", "Student"};

   printf("%s\n", D1.name);
   printf("%s\n", D1.aliase);
   printf("\n");
   printf("%s\n", D2.name);
   printf("%s\n", D2.aliase);

   return 0; 
}