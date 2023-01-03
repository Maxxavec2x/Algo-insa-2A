#include "pile.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
#include "navigateur.h"

int main()
{
    char * adresse_actuelle;
    int var=-1;
    navigateur explorer;
    Pile historique;
    initialisePile(&historique,10);


    adresse_actuelle = malloc(50*sizeof(char));

    strcpy(adresse_actuelle,"insa-cvl.fr");
    int taillepilesuiv = 5;
    int taillepileprec = 5;

    init_navigateur(&explorer,taillepileprec, taillepilesuiv,adresse_actuelle);

    char * newadd;
    newadd = malloc(50*sizeof(char));


    /* Affichage du premier menu � l'utilisateur*/

    printf("\nAdresse actuelle : %s \n\n",adresse_actuelle);
    printf("Quel est votre choix?\n");
    printf("0 - Entrer une nouvelle adresse\n");
    printf("1 - Page precedente\n");
    printf("2 - Page suivante\n");
    printf("3 - Afficher la pile des pages precedentes\n");
    printf("4 - Afficher la pile des pages suivantes\n");
    printf("5 - Afficher l'historique de navigation\n");
    printf("6 - Fermer\n");
    scanf("%d",&var);

    /* Lancement de la boucle d'affichage du menu*/
    while(var!=6)
    {

        switch(var)
        {

        case 0 :
            /* Gestion du cas o� l'utilisateur d�sire entrer une nouvelle adresse*/
            newadd = malloc(50*sizeof(char));
            scanf("%s",newadd);
            NouvelleAdresse(&explorer,newadd,&historique);


            break;

        case 1 :
            /* Gestion du cas o� l'utilisateur d�sire revenir � la page pr�c�dente en m�moire*/
            PagePrecedente(&explorer,&historique);

            break;

        case 2 :
            /* Gestion du cas o� l'utilisateur d�sire se rendre sur la page suivente en m�moire*/
            PageSuivante(&explorer,&historique);
            break;

        case 3 :
            /* Gestion du cas o� l'utilisateur d�sire afficher la pile des pages precedentes*/
           affichepileprec(&explorer);
            break;

        case 4 :
            /* Gestion du cas o� l'utilisateur d�sire afficher la pile des pages suivantes*/
            affichepilesuiv(&explorer);
            break;

        case 5 :
            /* Gestion du cas o� l'utilisateur d�sire afficher l'hisorique*/
            ctrl_H(historique);

            break;

        case 6 :
            /* Gestion du cas o� l'utilisateur d�sire quitter le programme*/
            return 0;
            break;

        default :
            /* Choix non-g�r�s par le programme */
            printf("\nCe choix est impossible!\n");
            fflush(stdin); // Vide le tampon pour �viter un bug quand on entre un caract�re et non un chiffre
            break;

        }
         adresse_actuelle = AdresseCourante(&explorer);

        printf("\nAdresse actuelle : %s \n\n",adresse_actuelle);
        printf("Quel est votre choix?\n");
        printf("0 - Entrer une nouvelle adresse\n");
        printf("1 - Page precedente\n");
        printf("2 - Page suivante\n");
        printf("3 - Afficher la pile des pages precedentes\n");
        printf("4 - Afficher la pile des pages suivantes\n");
        printf("5 - Afficher l'historique de navigation\n");
        printf("6 - Fermer\n");
        scanf("%d",&var);

    }
    return 0;
}
