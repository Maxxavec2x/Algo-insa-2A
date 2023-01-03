#ifndef NAVIGATEUR_H_INCLUDED
#define NAVIGATEUR_H_INCLUDED

typedef struct
{
    char * courant;
    Pile  prec;
    Pile suiv;

} navigateur;




/********************************************//**
 * \brief Initialise un navigateur
 *
 * \param  nav : le navigateur en question
 * \param int taille_pile_prec : la taille de la pile des adresses précédentes
 * \param int taille_pile_suiv : la taille de la pile des adresses suivantes
 * \param char * sitedepart : le site de départ du navigateur
 * \return void
 *
 ***********************************************/

void init_navigateur (navigateur * nav, int taille_pile_prec, int taille_pile_suiv, char * sitedepart);


/********************************************//**
 * \brief Cette fonction sert a renvoyer l'adresse courante du navigateur
 *
 * \param   nav : le navigateur dont vous souhaitez avoir l'adresse courante
 * \return	char * : l'adresse courante.
 *
 *
 ***********************************************/

char * AdresseCourante (navigateur * nav);



/********************************************//**
 * \brief Cette fonction sert a rentrer une nouvelle adresse.
 *
 * \param   nav : le navigateur
 * \param   char * adresse : la nouvelle adresse
 * \param   historique : votre historique
 * \return	void
 *
 *
 ***********************************************/

void NouvelleAdresse (navigateur * nav, char * adresse,Pile * historique);



/********************************************//**
 * \brief Cette fonction sert a retourner a la page precedente
 *
 * \param   nav : le navigateur
 * \param   historique : votre historique
 *
 * \return	void
 *
 *
 ***********************************************/

void PagePrecedente(navigateur * nav, Pile * historique);


/********************************************//**
 * \brief Cette fonction sert a aller a la page suivante
 *
 * \param   nav : le navigateur
 * \param   historique : votre historique
 *
 * \return	void
 *
 *
 ***********************************************/

void PageSuivante(navigateur * nav, Pile*  historique);


/********************************************//**
 * \brief Cette fonction sert a afficher la pile des pages precedentes
 * \param   nav : le navigateur
 *
 *
 * \return	void
 *
 *
 ***********************************************/

void affichepileprec(navigateur * nav);

/********************************************//**
 * \brief Cette fonction sert a afficher la pile des pages suivantes
 * \param   nav : le navigateur
 *
 *
 * \return	void
 *
 *
 ***********************************************/

void affichepilesuiv(navigateur * nav);


/********************************************//**
 * \brief Cette fonction sert a afficher l'historique
 *
 * \param   historique : votre historique
 *
 * \return	void
 *
 *
 ***********************************************/
void ctrl_H(Pile historique);

#endif // NAVIGATEUR_H_INCLUDED
