#include <iostream>
#include <cstdlib>

using namespace std;

bool plusPetit(int gauche, int droite) {
   return gauche < droite;
}

int saisie(const string& msg, int min, int max) {
   int valeur;
   do {
      cout << msg << " [" << min << " - " << max << "] : ";
      cin >> valeur;
   }while (valeur < min or valeur > max);
   min = 0; max = 0;
   return valeur ;
}

void plus2(int in, int& out) {
   out = in + 2;
}

int main() {

   int nbre = 21;
   cout << "nbre : " << nbre << endl;
   plus2(12, nbre);
   cout << "nbre : " << nbre << endl;

   do
      // bonjour
      // saisie
      int valeur = saisie("entrer une valeur", 10, 300);
      // calculer
      // afficher
      // quitter / recommencer
   while(false);


   return EXIT_SUCCESS;
}