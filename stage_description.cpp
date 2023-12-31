// stage_description.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Entreprise.h"
#include "mission.h"



int main()
{
	Entreprise* ADP = new Entreprise("ADP", "Auray");
	cout << ADP->getVilleEntreprise() << endl;
	ADP->setVilleEntreprise("paris");
	cout << ADP->getVilleEntreprise() << endl;
	cout << endl;

	Entreprise* volt = new Entreprise("volt", "brie");
	cout << volt->getVilleEntreprise() << endl;
	volt->setVilleEntreprise("orlean");
	cout << volt->getVilleEntreprise() << endl;

	Mission transport, energie;
	transport.setNbPersonne(32);
	transport.setDescriptifMission("regler les plan de vole");
	transport.setNbHeure(180);
	transport.setEntrepriseMission(ADP);
	cout << endl;

	energie.setNbPersonne(13);
	energie.setDescriptifMission("quantiter d'energie deservie");
	energie.setNbHeure(64);
	energie.setEntrepriseMission(volt);
	cout << endl;
	cout << endl;

	cout << transport.getNbPersonne() << endl;
	cout << transport.getDescriptifMission() << endl;
	cout << transport.getNbHeure() << endl;

	cout << (transport.getEntrepriseMission())->getNomEntreprise()<< endl;
	cout << endl;

	cout << energie.getNbPersonne() << endl;
	cout << energie.getDescriptifMission() << endl;
	cout << energie.getNbHeure() << endl;
	cout << (energie.getEntrepriseMission())->getNomEntreprise() << endl;
	cout << endl;


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
