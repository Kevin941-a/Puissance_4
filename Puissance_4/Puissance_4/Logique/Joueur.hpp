//
//  Joueur.hpp
//  Puissance_4
//
//  Created by Kevin Racapé on 11/11/2020.
//

#pragma once

#include <stdio.h>
#include <string>
#include "Jeton.hpp"
#include "Jeu.hpp"
#include "Grille.hpp"

class Joueur
{
private:
    int nombreDeJoueur;
    int score;
    int id;
    std::string nom;
    bool bot;
    
public:
    Joueur(); //Contructeur par défaut
    Joueur(std::string name); //Surcharge constructeur
    void setScore(int score);
    void setName(std::string name);
    std::string getNom();
    int getScore();
    int getId();
    bool estOrdinateur();
    ~Joueur();
};

