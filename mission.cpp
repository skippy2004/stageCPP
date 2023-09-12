/*****************************************************************//**
 * \file   Entreprise.cpp
 * \brief  Definition de la classe Entreprise
 *
 * \author PierreV
 * \version 0.1
 * \date   June 2023
 *
 * Programme Cpp permettant de creer des objets pour décrire les stages
 *********************************************************************/

#include "mission.h"



using namespace std;


/**
 * \brief Constructeur par default
 * \li Nom = anonyme
 * \li Ville = inconnu
 *
 */
Mission::Mission() {

    this->descriptifMission = "";
    this->entrepriseMission = new Entreprise();
    this->nbPersonne = 0;
    this->nbHeure = 0;

}


Mission::Mission(string descriptifMission, Entreprise* entrepriseMission, int nbPersonne, int nbHeure) {
    this->descriptifMission = descriptifMission;
    this->entrepriseMission = entrepriseMission;
    this->nbPersonne = nbPersonne;
    this->nbHeure = nbHeure;
}
/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param nom nom de l'entreprise
 * \param ville ville de l'entreprise
 */
//Entreprise::Entreprise(std::string nom, std::string ville) {
//    this->nomEntreprise = nom;
//
//    this->villeEntreprise = ville;
//}


/**
 * \brief Destructeur
 *
 */
Mission::~Mission(){

    cout << "Destrcution de la mission " << endl;

}

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type entreprise
 */
//Entreprise::Entreprise(const Entreprise& entre)
//{
//    cout << "Copie de Capitaine" << endl;
//    this->nomEntreprise = entre.nomEntreprise;
//    this->villeEntreprise = entre.villeEntreprise;
//
//}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type entreprise
 * \return Nouvelle objet de type entreprise
 */
//Entreprise& Entreprise::operator = (const Entreprise& entre)
//{
//    cout << "Affectation de l'entreprise" << std::endl;
//    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
//    {
//        this->nomEntreprise = entre.nomEntreprise;
//        this->villeEntreprise = entre.villeEntreprise;
//   }
//   return *this;
//}

int Mission::getNbPersonne() {
    return this->nbHeure;
}

void  Mission::setNbPersonne(int nbPersonnev) {
    this->nbPersonne = nbPersonnev;
}








std::string Mission::getDescriptifMission()
{
    return this->descriptifMission;
}

void Mission::setDescriptifMission(string descriptifMissionv) {
    this->descriptifMission = descriptifMissionv;
}








int Mission::getNbHeure() {
    return this->nbHeure;
}

void  Mission::setNbHeure(int nbHeurev) {
    this->nbHeure = nbHeurev;
}







Entreprise* Mission::getEntrepriseMission() {
    return this->entrepriseMission;
}

void  Mission::setEntrepriseMission(Entreprise *entrepriseMission) {
    this->entrepriseMission = entrepriseMission;
}
