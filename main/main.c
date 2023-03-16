#include <stdio.h>

int main(void)
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

    if(input==1) //Wenn 1 eingegeben wird, wird die Liste der Entwickler ausgegeben
        {
            printf("\nThe List of the Developers:\n");
            printf("\nMathis Stützle,\nStudent\n\nLinus Hahne,\nStudent\n\n");
        }
    else if(input==2) ////Wenn 2 eingegeben wird, wird das Logo der Entwickler ausgegeben
        {
            printf("\nThe Group Logo:\n\n"); //Gruppenlogo wird ausgegeben
            printf(" -------------   -------------   -------------   -------------   -------------- |             |  --------------\n");
            printf("|             | |             | |             | |               |               |             | |              \n");
            printf("|             | |             |	|             | |               |               |             | |              \n");
            printf("|             | |             |  -------------   -------------  |                -------------   --------------\n");
            printf(" ------------- 	|             | |           | 		      | |               |             |	|              \n");
            printf("|               |             | |            |	 	      | |               |             | |              \n");
            printf("|                -------------  |             |  -------------   --------------	|             |  --------------\n\n");
        }
    else if(input==3) //Wenn 3 eingegeben wird, wird die Liste der Entwickler, sowie das Logo ausgegebeb
        {
            printf("\nThe List of the Developers and their Group Logo:\n");
            printf("\nMathis Stützle,\nStudent\n\nLinus Hahne,\nStudent\n\n");
            printf(" -------------   -------------   -------------   -------------   -------------- |             |  --------------\n");
            printf("|             | |             | |             | |               |               |             | |              \n");
            printf("|             | |             |	|             | |               |               |             | |              \n");
            printf("|             | |             |  -------------   -------------  |                -------------   --------------\n");
            printf(" ------------- 	|             | |           | 		      | |               |             |	|              \n");
            printf("|               |             | |            |	 	      | |               |             | |              \n");
            printf("|                -------------  |             |  -------------   --------------	|             |  --------------\n\n");
        }  
    else if(input==4)
        {
            return 0;
        }
    }
}

