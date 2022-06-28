#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<conio.h>


#define N 312
int main()
{
    int baraja [N];
    char comenzar;


    srand (time(NULL));

    printf("\n    Welcome to the BlackJack Card Counter Trainer. In BlackJack there are 6 decks of 56 card each one. So thats what we have for train: \n\n");
    rellenaBaraja(baraja);

    escribirBaraja(baraja);

    printf("\n    \n    \n    During training, cards will appear one by one and the goal is to keep track of the count. You will be ask for the count value during the training, if the value is incorrect, the training will finish.\n\n\n");
    printf("    Now you will see some instructions of how to count:  \n\n");





    printf("\n\n     __________________________________________________________________________________________________________________________________________________________\n    |                                                                                                                                                          |");
    printf("\n    | HOW TO COUNT                                                                                                                                             |\n    |                                                                                                                                                          |\n");
    printf("    |  - If the card is 2, 3, 4, 5 o 6, you have to add 1.                                                                                                     |\n");
    printf("    |  - If the card is 10, J, Q, K o A,  you have to subtract 1.                                                                                              |\n");
    printf("    |  - Example:                                                                                                                                              | \n    |              If the secuence is: A, 4, Q, J, 2. We should do: -1(because the A) +1(because the 4) -1(because the Q) -1(because the K) +1(because the 2). |\n    |                                                                                                                                                          |\n    |              That means:        -1 +1 -1 -1 +1 = -1.     The count would be -1                                                                           |\n    |                                                                                                                                                          |\n");
    printf("    |__________________________________________________________________________________________________________________________________________________________|\n");
    printf("\n\n\n    Do you want to start counting? ('y' or 'n'): ");
    scanf("%c", &comenzar);
     printf("\n\n");


    while(comenzar=='y'){


        rellenaBaraja(baraja);
        empezarCuenta(baraja);
        printf("\n\n    Do u want to try again? ('y' or 'n'): ");
        fflush(stdin);
        scanf("%c", &comenzar);
        printf("\n\n");

    }

   //escribirBaraja(baraja);








    return 0;
}


void rellenaBaraja (int baraja[])
{
    int i, j, suma=0;

    for(i=0; i<24; i++)
    {
        for(j=0; j<13; j++)
        {

            baraja[suma+j]= j+1;

        }
        suma+=j;

    }
}

void escribirBaraja (int baraja[])
{
    int i, j=0;

    for(i=0; i<N; i++)
    {



        if(!(i%52)){
            printf("\n");
            printf("      Deck %d: ", j+1);
            j++;
        }
        if(baraja[i]==11)
            printf("J ");
        else if(baraja[i]==12)
            printf("Q ");
        else if(baraja[i]==13)
            printf("K   ");
        else if(baraja[i]==1)
            printf("A ");
        else
            printf("%d ", baraja[i]);
    }

}
void empezarCuenta (int baraja[]){

    int carta, cartasTotales=0, cuenta=0, respuesta, continuar=1;
do{

    do{

    carta = rand () % 312 + 0;
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
     usleep(100000);
    usleep(100000);
    usleep(100000);

    }while(baraja[carta]==-1&&cartasTotales<312);

    if(baraja[carta]==11){
        printf("      Card: J \r");
        usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    /*
    usleep(100000);
    usleep(100000);
    usleep(100000);
    */
        printf("              \r");

    }
    else if(baraja[carta]==12){
         printf("      Card: Q \r");
         usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    /*
    usleep(100000);
    usleep(100000);
    usleep(100000);
    */
         printf("              \r");

    }
    else if(baraja[carta]==13){
         printf("      Card: K \r");
         usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    /*
    usleep(100000);
    usleep(100000);
    usleep(100000);
    */
         printf("              \r");

    }
     else if(baraja[carta]==1){
         printf("      Card: A \r");
         usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    /*
    usleep(100000);
    usleep(100000);
    usleep(100000);
    */
         printf("              \r");

    }
    else
         printf("      Card: %d \r", baraja[carta]);
         usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    /*
    usleep(100000);
    usleep(100000);
    usleep(100000);
    */
         printf("              \r");




    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);
    usleep(100000);



    cartasTotales++;

    if(baraja[carta]<=6&&baraja[carta]>1){
        cuenta++;
    }
    else if((baraja[carta]<=13&&baraja[carta]>=10)||baraja[carta]==1){
        cuenta--;
    }
    baraja[carta]=-1;



    if(!(cartasTotales%15))
    {
        //printf("\n\nLa cuenta vale: %d", cuenta);

            printf("\n\n    Which is the count?: ");
            scanf("%d", &respuesta);
            if(respuesta!=cuenta)
            {
                printf("    Sorry, the count is %d", cuenta);

                continuar=0;
            }
            else{
                printf("\n    Correct, the count is %d", cuenta);
                printf("\n    Let´s continue...");
                printf("\n\n");

                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);
                usleep(100000);

            }



    }

        //printf("\n\nLa cuenta vale: %d", cuenta);


    }while( cartasTotales!=312 &&continuar);

    if(continuar)
        printf("\n\n    Congratulations!! you passed the training.\n");


}



