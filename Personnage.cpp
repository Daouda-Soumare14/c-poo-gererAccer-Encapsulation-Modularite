#include "Personnage.hpp"
using namespace std;

Personnage::Personnage()
{
    // c'est le constructeur qui permet d'initialiser les attrubuts
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "Epee rouillee";
    m_degatsArme = 10;
}

Personnage::Personnage(string nomArme, int degatsArme):m_vie(100),m_mana(100),m_nomArme(nomArme),m_degatsArme(degatsArme)
{
    // Rien a mettre dans le corps du constructeur, tout a deja ete fait !
}

Personnage::~Personnage()
{
    /* Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Personnage. Le destructeur est donc inutile mais
    je le mets pour montrer à quoi cela ressemble.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet. */
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    // on enleve le nombre de degats recu a la vie du personnage

    if(m_vie < 0) // pour eviter d'avoir une vie negative
    {
        m_vie = 0; // on met la vie a 0 (cela veut dire mort)
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
    // on inflige a la cible les degats que cause notre arme
}

void Personnage::boirePotionDeVie(int quantitePossion)
{
    m_vie += quantitePossion;

    if(m_vie > 100) // interdiction de depasser 100 de vie
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant()
{
    return m_vie > 0;
}