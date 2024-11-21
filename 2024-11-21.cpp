#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

//--------------------------------------------------
bool remplacer(vector<int>& v, int ancien, int nouveau) {

   // pour toutes les valeurs
   for (size_t i=0; i<v.size(); ++i) {
      // comparer cette valeur avec ancien
      if (v[i] == ancien) {
         // remplacer par nouveau
         v[i] = nouveau;
         return true;
      }
   }

   return false;
}

//--------------------------------------------------
bool remplacer1(vector<int>& v, int ancien, int nouveau) {

   size_t i=0;

   // tant que pas trouvé dans le tableau
   while(i < v.size()) {

      // si trouvé .. remplacer
      if (v[i] == ancien) {
         v[i] = nouveau;
         return true;
      }
      ++i;
   }

   // avancer au prochain élément
   return false;
}

//--------------------------------------------------
void afficher(const vector<int>& v) {
   cout << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i) cout << ", ";
      cout << v[i];
   }
   cout << "]";
}

//--------------------------------------------------
vector<int> produit_scalaire(const vector<int>& v, int facteur) {

   // resultat
   vector<int> resultat(v.size());

   // pour toutes les valeurs
   for (size_t i=0; i<v.size(); ++i) {

      // multiplier par facteur
      resultat[i] = v[i] * facteur;
   }

   return resultat;
}

//--------------------------------------------------
// v volontairement reçu en copie pour éviter de faire une copie en interne
vector<int> produit_scalaire1(vector<int> v, int facteur) {

   // pour toutes les valeurs
   for (size_t i=0; i<v.size(); ++i) {

      // multiplier par facteur
      v[i] = v[i] * facteur;
   }

   return v;
}

//--------------------------------------------------
// v volontairement reçu en copie pour éviter de faire une copie en interne
vector<int> produit_scalaire2(vector<int> v, int facteur) {

   // pour toutes les valeurs
   for (int& valeur : v) {

      // multiplier par facteur
      valeur *= 2;
   }

   return v;
}

//--------------------------------------------------
int main() {

   // avant [7, 9,  4, 2, 6,   4, 8]
   // apres [7, 9, (3), 2, 6, (3), 8]

   // avant [ 7,  9, 4, 2,  6, 4,  8]
   // x 2
   // apres [14, 18, 8, 4, 12, 8, 16]

   vector v = {7, 9, 4, 2, 6};

   afficher(v);
   cout << endl;

   if (remplacer(v, 14, 3))
      afficher(v);

   cout << endl;

   cout << "produit scalaire .. " << endl;
   afficher(v); cout << endl << endl;
   afficher (produit_scalaire (v, 2)); cout << endl;
   afficher (produit_scalaire1(v, 2)); cout << endl;
   afficher (produit_scalaire2(v, 2)); cout << endl;

   return EXIT_SUCCESS;
}
