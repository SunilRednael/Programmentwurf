#include <string.h>
#include <stdio.h>
#include </workspaces/Programmentwurf/include/developer_group.h>

int input;

int main()
{
    
//Initialize and declare the dev_group variable    
developer_group dev_group;
developer_group_init(&dev_group,"Mathis", "Schwabe", "Linus", "Mr.Charming");

//query takes place until the while loop is manually canceled
while(1) 
    {

    //Output of the choices
    printf("\033[4;92m========================\n"); 
    printf("Choose your action: \n");
    printf("List Developers \t[1]\n");
    printf("Print Group Logo \t[2]\n");
    printf("Print Group \t\t[3]\n");
    printf("Exit \t\t\t[4]\n");
    printf("========================\033[0m\n");
    
    //Input request
    printf("Enter your selection: "); 
    
    //Input is read in
    scanf("%d",&input); 
    
    //Various inputs and their executions
    if (input==1)
        {
        print_developer(dev_group.developer);
        }
    else if(input==2)
        {
        print_logo(&dev_group);
        }
    else if (input==3)
         {
         printf("^^^^^^^^^^^^^^^^^^^^\n");
         print_logo(&dev_group); 
         print_developer(dev_group.developer); 
         printf("^^^^^^^^^^^^^^^^^^^^\n"); 
         } 
    else if (input==4)
         {
        return 0;
         }
    else
        {
         
         //If an incorrect input is made, show error and return
         printf("ERROR: Wrong Input\n");
        return 0;
        }
    }
}

