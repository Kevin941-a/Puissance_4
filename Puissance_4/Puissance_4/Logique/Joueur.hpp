//
//  Joueur.hpp
//  Puissance_4
//
//  Created by Kevin Racapé on 11/11/2020.
//

#ifndef Joueur_hpp
#define Joueur_hpp

#include <stdio.h>
#include <string>

class Joueur
{
private:
    int nombreDeJoueur;
    int score;
    int id;
    std::string nom;
    
public:
    Joueur();
    Joueur(std::string nom);
    void setScore(int score);
    void setNom(std::string nom);
    std::string getNom();
    int getScore();
    int getId();
    void swap(Joueur &);
};

#endif /* Joueur_hpp */
