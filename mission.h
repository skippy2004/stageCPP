/*****************************************************************//**
 * \file   mission.h
 * \brief  Declaration de la classe entreprise
 *
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>
#include "Entreprise.h"

using namespace std;


 /*! \class Entreprise
    * \brief classe representant une entreprise. 2 attributs prives
    *
    * Cette classe a une finalite pedagogique :
    * \li : Rappel du C++
    * \li : commentaire avec Doxygen
    * \li : git, github
    */
class Mission
{

private:
    /**
     * Membre prive nb Personne : contient le nombre de personne
     */
    int nbPersonne;
    /**
     * Membre prive descriptifMission : contient les descriptif des mission
     */
    string descriptifMission;
    /**
     * Membre prive nbHeure : contient le nombre d'heure
     */
    int nbHeure;

    Entreprise *entrepriseMission;

protected:
    
    

public:
    /*Classe sous forme canonique*/
    Mission();
    ~Mission();

    Mission(string descriptifMission, Entreprise *entrepriseMission, int nbPersonne, int nbHeure);

    int getNbPersonne();
    void setNbPersonne(int nbPersonnev);

    string getDescriptifMission();
    void setDescriptifMission(string descriptifMissionv);

    int getNbHeure();
    void setNbHeure(int nbHeurev);

    Entreprise* getEntrepriseMission();
    void setEntrepriseMission(Entreprise *entrepriseMission);

};

#endif