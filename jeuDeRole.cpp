#include <iostream>
#include <string>
#include "Personnage.hpp"
using namespace std;

int main()
{
    // utilisation de l'objet
    Personnage david, goliath("Epee aiguisee", 20); // creation de deux objets de type personnage: david et goliath
  
    goliath.attaquer(david); // goliath attaque david
    david.boirePotionDeVie(20); // david recupere 20 de vie en buvant une possion
    goliath.attaquer(david); // goliath attaque david
    david.attaquer(goliath); // david contre attaque goliath

    goliath.changerArme("Double hache tranchante veneuse de la mort", 40);
    goliath.attaquer(david); // goliath attaque david

    return 0;
}
