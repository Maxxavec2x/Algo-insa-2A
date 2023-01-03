#include "pile.h"
#include <assert.h>


void initialisePile(Pile* unePile, int nb)
{
    unePile->laPile = malloc(nb*sizeof(element));
    unePile->nbElem = nb;
    unePile->sommetPile = 0;
}


void affichePile(Pile unePile)
{
    if (estVide(unePile) == 1)
    {
        printf("La pile est vide \n\n");
    }
        else
        {

            int i;
            int taille=unePile.sommetPile;

            for(i=0; i<taille; i++)
            {
                printf("L'element %i est %s \n",i,unePile.laPile[taille-(i+1)]);

            }


        }
    }


int estVide(Pile p)
{
    return (p.sommetPile==0);
}


int estPleine(Pile p)
{
    return (p.sommetPile == p.nbElem);
}



void empiler(Pile* p, element elt)
{
    if(!estPleine(*p))
    {
        p->laPile[p->sommetPile++] = elt;
    }

}


element depiler(Pile* p)
{
    assert(!estVide(*p));

    p->sommetPile --;
    return p->laPile[p->sommetPile];


}


void vider(Pile * p)
{
    p->sommetPile = 0;
}
