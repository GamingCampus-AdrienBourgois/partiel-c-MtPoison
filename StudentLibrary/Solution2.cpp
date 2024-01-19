#include "Solution2.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    std::string nomFichier = "x64\\Debug\\BankAccount"+ accountName +".txt";

    std::ifstream fichier(nomFichier);

    if (!fichier.is_open()) 
    {
        std::cout << "Impossible d'ouvrir le fichier : " << nomFichier << std::endl;
        return 1; 
    }

    std::string ligne;
    double solde = 0.0;

    while (std::getline(fichier, ligne))
    {
        std::istringstream iss(ligne);
        std::string operation;
        double montant;

        if (iss >> operation >> montant)
        {
            if (operation == "deposit")
            {
                solde += montant;
            }
            else if (operation == "withdraw")
            {
                solde -= montant;
            }
            else {
                std::cout << "Opération non reconnue : " << operation << std::endl;
            }
        }
        else {
            std::cout << "Erreur de lecture de la ligne : " << ligne << std::endl;
        }
    }
	return solde;
}

#endif
