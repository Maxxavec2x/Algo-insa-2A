#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
#include "struct.h"

int oldmain()
{
    /*Pile p1;
    Pile p2;
    int i;
    int taille =4;
    int taille2 = 4;

    initialisePile(&p2,taille2);
    initialisePile(&p1,taille);
    for (i=0; i<taille; i++) //On remplit la pile et on regarde son statut
    {

        if (estVide(p1) == 1)
        {
            printf("La pile est vide\n\n");
        }

        int alea = rand()%101;
        empiler(&p1, alea);
        if (estPleine(p1) == 1)
        {
            printf("La pile est pleine\n\n");
        }
    }

  for (i=0;i<taille;i++) //on vide la pile et on affiche les éléments
    {
        printf ("L'element %i est %i \n\n",i,depiler(&p1));
    }

    for(i=0;i<taille;i++) //on transvase les éléments de p1 vers p2
    {
        element elt = depiler(&p1);
        empiler(&p2,elt);
    }

    for(i=0;i<taille2;i++) //on vide p2
    {
        vider(&p2);
    }

*/

/*
    Pile p1;

    initialisePile(&p1, 4);
    printf("Avant de remplir la pile :\n");
    affichePile(p1);
    int i;
    for(i = 0; i< 6; i++)
    {
        if(!estPleine(p1))
        {
            empiler(&p1, i);
        }
    }
    printf("Apres avoir rempli la pile :\n");
    affichePile(p1);

*/

Pile pilestr;
initialisePile(&pilestr,4);
empiler(&pilestr,"Bonjour");
empiler(&pilestr,"Hello");
empiler(&pilestr,"Hi");

printf ("le premier element est %s \n\n" ,pilestr.laPile [0]);

affichePile(pilestr);

return 0;


}
