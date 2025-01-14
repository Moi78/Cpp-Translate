#pragma once
// c++ en fran�ais
// juste pour le fun

#include <string>
#include <list>
#include <cstring>
#include <vector>
#define cpp_fran�ais
#pragma region autre
#define utilisant using
#define point_d_entr�e main

#define __LIGNE__ __LINE__
#define __FICHIER__ __FILE__
#pragma endregion

#pragma region operateur

#define nom_de_type typename
#define mod�le template
#define taille_de sizeof
#define op�rateur operator

#define classe class
#define structure struct
#define �num�ration enum

#define constant const
#define virtuel virtual
#define statique static
#define sur_la_ligne inline

#define publique public
#define priv� private
#define s�curis� protected

#define identificateur_de_type typeid

#define envoyer throw
#define retourne return

#define nouveau new
#define nouvelle new
#define supprimer delete
#define supprimer_tableaux delete[]

#define ou or
#define et and
#define non not

#define vrai true
#define faux false

#define additionner +
#define �gal =
#define �gal ==
#define multiplier *
#define soustraire -
#define diviser /

#define r�f�rence_de(A) (&A)
#define pointeur(A) A*
#define enfant_de :
#define index(A) [A]

#define plus_grand_que >
#define plus_petit_que <
#define plus_grand_ou_�gal >=
#define plus_petit_ou_�gal <=

#define est_vrai == vrai
#define est_faux == faux

#pragma endregion

#pragma region type

utilisant vide = void;

utilisant bool�en = bool;
utilisant charact�re = char;
utilisant int�gral = int;
utilisant flottant = float;
utilisant double_flottant = double;
utilisant phrase = std::string;

utilisant chaine_de_caract�re_c_terminant_par_un_zero = char*;

mod�le<classe T>
utilisant vecteur = std::vector < T>;

mod�le<classe T>
utilisant liste = std::list<T>;

#pragma endregion
#pragma region boucle_ou_autre

#define si if
#define sinon else
#define sinon_si else if
#define r�p�ter_tant_que while
#define pour for
#define pour_chacun for each
#pragma endregion

#pragma region fonctions
#define �crire printf

#pragma endregion

#define copier_m�moire memcpy
#define mettre_m�moire memset
#define taille_dune_chaine_de_caract�re_c strlen
#define copier_chaine_de_caract�re strcpy