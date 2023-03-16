#include <stdio.h>
#include </workspaces/Programmentwurf/include/developer.h>
#include </workspaces/Programmentwurf/include/developer_group.h>
int main(void)


{
    developer linus, mathis;
    {
int input;
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
    developer_init(&linus, "Linus Hahne", "Student");
    developer_init(&mathis, "Mathis Stützle", "Student");
    }

    developer_group dev_group;
developer_group_init(&dev_group, &linus, &mathis, ".");

print_developer(dev_group.developer);

    
return 0;
    }
    }
}

