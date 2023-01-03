#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#define PILE_STR


#ifdef PILE_INT
typedef int element;
#endif //PILE_INT

#ifdef PILE_STR
typedef char * element;
#endif //PILE_STR


typedef struct
{
		element* laPile;
		int nbElem;
		int sommetPile;
} Pile;
#endif // ELEMENT_H_INCLUDED
