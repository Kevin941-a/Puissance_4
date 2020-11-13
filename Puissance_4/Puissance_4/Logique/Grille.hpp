//
//  Grille.hpp
//  Puissance_4
//
//  Created by Kevin Racapé on 13/11/2020.
//

#pragma once

#include <stdio.h>
#include "Joueur.hpp"
#include "Jeu.hpp"
#include "Jeton.hpp"

class Grille
{
public:
    Grille(uint8_t colonne, uint8_t ligne);
    ~Grille();
    void initialise(Grille& grille); // Initialise chacune des cellules de la grille à la valeur vide
    void affiche (const Grille& grille); // Affiche la grille sans en modifier le contenu
    bool grillePleine(); // Verifie si la grille est pleine
    
private:
    uint8_t colonne{7}, ligne{6};
};


