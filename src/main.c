#include <string.h>
#include <stdio.h>
#include </workspaces/Programmentwurf/include/developer_group.h>

int input;

int main()
{
developer_group dev_group;
developer_group_init(&dev_group,"Mathis", "Schwabe", "Linus", "Mr.Charming");

while(1) //Abfrage findet statt, bis while Schleife manuell abgebrochen wird

    {
        printf("\033[4;92m========================\n"); //Ausgabe der Auswahlmöglichkeiten
    printf("Choose your action: \n");
    printf("List Developers \t[1]\n");
    printf("Print Group Logo \t[2]\n");
    printf("Print Group \t\t[3]\n");
    printf("Exit \t\t\t[4]\n");
    printf("========================\033[0m\n");

    printf("Enter your selection: "); //Anforderung einer Eingabe

    scanf("%d",&input); //Eingabe wird eingelesen

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
    print_developer(dev_group.developer);
    print_logo(&dev_group);   
    } 
else if (input==4)
    {
    return 0;
    }
else
    {
    printf("ERROR: Wrong Input\n");
    return 0;
    }

    


    }
}

