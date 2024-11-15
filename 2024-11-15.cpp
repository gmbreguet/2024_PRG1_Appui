#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <sstream>

using namespace std;

//--------------------------------------------------
int somme_chiffres (int nombre) {

   int somme = 0; // int();

   while(nombre) { // nombre > 0
      somme += nombre % 10;
      nombre /= 10;
   }
   return somme;
}


//--------------------------------------------------
int somme_chiffres_str (int nombre) {

   // mettre dans un string
   string nombre_str = to_string(nombre);
// cout << "nombre_str : " << nombre_str << endl;

   // parcourir tous les chiffres et sommer les chiffres
   int somme = 0;
// cout << "boucle for : ";
   for (size_t i=0; i<nombre_str.size(); ++i) {
//    cout << nombre_str[i];
      somme += nombre_str[i] - '0';
   }

   return somme;
}

//--------------------------------------------------
int main() {

   // calculer la somme des chiffres d'un nombre
   int nombre = 123456; // somme des chiffres 21


   // afficher la somme des chiffres
   cout << "somme      : " << somme_chiffres(nombre) << endl;

   return EXIT_SUCCESS;

   //                0123456789 123456789 1234
   string adresse = "route de Cheseaux no 123b";
   size_t debut = adresse.find_first_of    ("0123456789");
   size_t fin   = adresse.find_first_not_of("0123456789", debut+1);
   cout << debut << endl;
   cout << fin   << endl;

   stringstream ss_str(adresse.substr(debut, fin - debut));
   cout << "stringstream : " << ss_str.str()       << endl;
   cout << "stoi         : " << stoi(ss_str.str()) << endl;
   int no_rue;
   ss_str >> no_rue;
   cout << "no_rue       : " << no_rue             << endl;

   size_t pas_trouve = adresse.find_first_of    ("-.,;:");
   cout << "pas_trouve   : " <<  pas_trouve        << endl;
   cout << "string::npos : " << string::npos       << endl;

   return EXIT_SUCCESS;
}
