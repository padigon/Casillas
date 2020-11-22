//
//  main.c
//  Casillas
//
//  Created by Pablo Diaz  on 22/11/2020.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Definir variables
        int posicion1, posicion2;
        int tiro1, tiro2;
        int casillas;
        int resto1, resto2;
        int i;

    // Escanear numero de casillas
        printf("Cuantas casillas tiene el juego: ");
        scanf("%i", &casillas);

    for(posicion1=0, posicion2=0; posicion1 < casillas && posicion2 < casillas; i++)
    {
        // Jugador 1
            printf("Tirada del jugador 1: ");
            scanf("%i", &tiro1);
            posicion1 += tiro1;
            if (posicion1 > casillas)       {
                resto1 = posicion1 - casillas;
                posicion1 = casillas - resto1;      }
            printf("Jugador 1 va por la casilla : %i\n", posicion1);

        //Jugador 2
            printf("Tirada del jugador 2: ");
            scanf("%i", &tiro2);
            posicion2 += tiro2;
            if (posicion2 > casillas)       {
                resto2 = posicion2 - casillas;
                posicion2 = casillas - resto2;      }
            printf("Jugador 2 va por la casilla : %i\n", posicion2);

        // Condicionales
        // Multiplo de 10 --> Otro turno
            if (posicion1 % 10 == 0)    {
                printf("Tirada del jugador 1: ");
                scanf("%i", &tiro1);
                posicion1 += tiro1;
                printf("Jugador 1 va por la casilla : %i\n", posicion1);      }

            if (posicion2 % 10 == 0)    {
                printf("Tirada del jugador 2: ");
                scanf("%i", &tiro2);
                posicion2 += tiro2;
                printf("Jugador 2 va por la casilla : %i\n", posicion2);      }

        // Multiplo de 5 --> Pierde el turno
            if (posicion1 % 5 == 0)     {
                printf("Tirada del jugador 2: ");
                scanf("%i", &tiro2);
                posicion2 += tiro2;
                printf("Jugador 2 va por la casilla : %i\n", posicion2);      }

            if (posicion2 % 5 == 0)     {
                printf("Tirada del jugador 1: ");
                scanf("%i", &tiro1);
                posicion1 += tiro1;
                printf("Jugador 1 va por la casilla : %i\n", posicion1);  }

        // Ganador si las casillas son exactas
            if (posicion1 == casillas)      {
                printf("El ganador es el Jugador 1");
                exit(-1);       }

            if (posicion2 == casillas)      {
                printf("El ganador es el Jugador 1");
                exit(-1);       }
    }
}