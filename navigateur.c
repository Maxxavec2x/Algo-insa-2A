#include "pile.h"
#include <assert.h>
#include "navigateur.h"

void init_navigateur (navigateur * nav, int taille_pile_prec, int taille_pile_suiv, char * sitedepart)
{
    nav->courant = sitedepart;
    initialisePile (&(nav->prec), taille_pile_prec);
    initialisePile (&(nav->suiv), taille_pile_suiv);
}

char * AdresseCourante (navigateur * nav)
{
    return nav->courant;
}

void NouvelleAdresse (navigateur * nav, char * adresse,Pile * historique)
{
empiler(historique,nav->courant);
empiler(&(nav->prec), nav->courant);
nav->courant = adresse;
vider(&(nav->suiv));
}

void PagePrecedente(navigateur * nav, Pile * historique)
{
empiler(&(nav->suiv),nav->courant);
nav->courant=depiler(&(nav->prec));
empiler(historique,nav->courant);
}

void PageSuivante(navigateur * nav, Pile*  historique)
{

empiler(&(nav->prec),nav->courant);
nav->courant=depiler(&(nav->suiv));
empiler(historique,nav->courant);
}

void affichepileprec(navigateur * nav)
{
affichePile(nav->prec);

}
void affichepilesuiv(navigateur * nav)
{
affichePile(nav->suiv);

}

void ctrl_H(Pile historique){

affichePile(historique);
}



