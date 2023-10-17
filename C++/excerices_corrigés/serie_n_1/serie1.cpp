//exo1
#include <iostream>
#include <string>

int main() {
    std::string nom;
    int age;

    std::cout << "Entrez votre nom : ";
    std::cin >> nom;
    
    std::cout << "Entrez votre âge : ";
    std::cin >> age;

    if (age < 18) {
        std::cout << "Bonjour, " << nom << "! Vous avez " << age << " ans. Vous êtes jeune !" << std::endl;
    } else {
        std::cout << "Bonjour, " << nom << "! Vous avez " << age << " ans. Vous êtes plus âgé !" << std::endl;
    }

    return 0;
}

//exo2
#include <iostream>
#include <cmath>

int main() {
    double longueur, largeur;

    std::cout << "Entrez la longueur du rectangle : ";
    std::cin >> longueur;
    
    std::cout << "Entrez la largeur du rectangle : ";
    std::cin >> largeur;

    double superficie = longueur * largeur;
    double perimetre = 2 * (longueur + largeur);
    double diagonale = sqrt(pow(longueur, 2) + pow(largeur, 2));

    std::cout << "Superficie : " << superficie << std::endl;
    std::cout << "Périmètre : " << perimetre << std::endl;
    std::cout << "Longueur de la diagonale : " << diagonale << std::endl;

    return 0;
}

//exo3
#include <iostream>
#include <cmath>

int main() {
    double rayon;

    std::cout << "Entrez le rayon du cercle : ";
    std::cin >> rayon;

    double superficie = M_PI * pow(rayon, 2);
    double circonference = 2 * M_PI * rayon;
    double diametre = 2 * rayon;

    std::cout << "Superficie : " << superficie << std::endl;
    std::cout << "Circonférence : " << circonference << std::endl;
    std::cout << "Diamètre : " << diametre << std::endl;

    return 0;
}

//exo4
#include <iostream>
using namespace std;

int main() {
    double temperature, resultat;
    int choix;
    int precision;

    cout << "Choisissez la conversion : (1) Celsius en Fahrenheit ou (2) Fahrenheit en Celsius : ";
    cin >> choix;

    cout << "Entrez la température : ";
    cin >> temperature;

    cout << "Choisissez la précision des résultats (nombre de décimales) : ";
    cin >> precision;

    if (choix == 1) {
        resultat = (temperature * 9.0/5.0) + 32.0;
    } else if (choix == 2) {
        resultat = (temperature - 32.0) * 5.0/9.0;
    } else {
        cout << "Choix invalide." << endl;
        return 1;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    cout << "Résultat : " << resultat << endl;

    return 0;
}


///Exo5
#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4, num5;

    cout << "Entrez cinq nombres : ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    double plusGrand = num1;
    double plusPetit = num1;

    if (num2 > plusGrand) {
        plusGrand = num2;
    }
    if (num3 > plusGrand) {
        plusGrand = num3;
    }
    if (num4 > plusGrand) {
        plusGrand = num4;
    }
    if (num5 > plusGrand) {
        plusGrand = num5;
    }

    if (num2 < plusPetit) {
        plusPetit = num2;
    }
    if (num3 < plusPetit) {
        plusPetit = num3;
    }
    if (num4 < plusPetit) {
        plusPetit = num4;
    }
    if (num5 < plusPetit) {
        plusPetit = num5;
    }

    double moyenne = (num1 + num2 + num3 + num4 + num5) / 5.0;

    cout << "Le plus grand : " << plusGrand << endl;
    cout << "Le plus petit : " << plusPetit << endl;
    cout << "Moyenne : " << moyenne << endl;

    return 0;
}