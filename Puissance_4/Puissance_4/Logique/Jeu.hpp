//
//  Jeu.hpp
//  Puissance_4
//
//  Created by Kevin Racapé on 11/11/2020.
//

#ifndef Jeu_hpp
#define Jeu_hpp

#include <stdio.h>
#include "Jeton.hpp"
#include "Joueur.hpp"
#include "Grille.hpp"

enum class Jeton
{
    vide,
    rouge,
    jaune
};

class Jeu
{
public:
    void askAndPlay(Grille& , Jeton);
    void alterne(Joueur&);
    void setGagner(bool);
    void setNulle(bool);
    
    bool getGagner(bool);
    bool getNulle(bool);
    
};

#endif /* Jeu_hpp */
