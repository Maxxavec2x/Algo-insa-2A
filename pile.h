#ifndef PILE_H
#define PILE_H


#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>



/********************************************//**
 * \brief Initialisation d'une pile
 *
 * \param unePile Pile* : pile à initialiser
 * \param nb int : la taille de la pile après initialisation
 * \return void
 * \complexity n
 ***********************************************/
void initialisePile(Pile* unePile, int nb);


/********************************************//**
 * \brief Affiche les éléments d'une pile, du plus récent au plus ancien
 *
 * \param unePile Pile : pile à afficher
 * \return void
 *
 *
 *
 ***********************************************/
void affichePile(Pile unePile);



/********************************************//**
 * \brief Teste si une pile est vide
 *
 * \param p Pile : la pile à tester
 * \return int :  1 (TRUE) si et seulement si la pile est vide
 * \complexity n
 ***********************************************/
int estVide(Pile p);

/********************************************//**
 * \brief Empile un élément dans une pile. Si la pile est pleine, il ne se passe rien.
 *
 * \param unePile Pile* : la pile dans laquelle empiler
 * \param elt element : l'élement à empiler
 * \return void
 * \complexity n
 ***********************************************/
void empiler(Pile* unePile,element elt);




/********************************************//**
 * \brief Dépile un élément d'une pile
 *
 * \pre la pile ne doit pas être vide (sinon le programme plante)
 *
 * \param unePile Pile* : la pile à partir de laquelle dépiler
 * \return element : l'élément au sommet de la pile
 * \complexity n
 ***********************************************/
element depiler(Pile* unePile);

/********************************************//**
 * \brief Teste si une pile est pleine
 *
 * \param p Pile : la pile à tester
 * \return int : 1(TRUE)  si et seulement si la pile est pleine
 * \complexity n
 ***********************************************/
int estPleine(Pile p);


/********************************************//**
 * \brief Vide une pile, mais ne libère pas la mémoire associée, la pile gardera la même capacité
 *
 * \param p Pile* : la pile à vider
 * \return void
 * \complexity n
 ***********************************************/
void vider(Pile * p);



#endif // PILE_H
