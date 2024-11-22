#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <span>

using namespace std;

//--------------------------------------------------
//void afficher(const vector<int>& v) {
//   cout << "afficher vector : ";
//   cout << "[";
//   for (size_t i=0; i<v.size(); i++) {
//      if (i) cout << ", ";
//      cout << v[i];
//   }
//   cout << "]";
//}

//--------------------------------------------------
//void afficher(const array<int, 5>& a) {
//   cout << "afficher array  : ";
//   cout << "[";
//   for (size_t i=0; i<a.size(); i++) {
//      if (i) cout << ", ";
//      cout << a[i];
//   }
//   cout << "]";
//}

//--------------------------------------------------
void afficher(span<const int> s) {
   cout << "afficher span   : ";
   cout << "[";
   for (size_t i=0; i<s.size(); i++) {
      if (i) cout << ", ";
      cout << s[i];
   }
   cout << "]";
}


//--------------------------------------------------
using Data        = int;
using Ligne_a     = array<Data, 10>;
using Ligne_v     = vector<Data>;
using Matrice_a   = array<Ligne_v, 5>;
using Matrice_v   = vector<Ligne_a>;

array<int, 3> a3;                // collection de 3 entiers
array<array<int, 3>, 5> a5x3;    // collection de collections de 5 entiers

//--------------------------------------------------
int main() {

   const vector v  = {7, 9, 4, 2, 6};
         array  a  = {7, 9, 4, 2, 6};
         int tab[] = {7, 9, 4, 2, 6};

   array<int, 3> a3;                // collection de 3 entiers
   array<array<int, 3>, 5> a5x3;    // collection de collections de 5 entiers

   Matrice_v mv = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                   {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                   {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};

   for (const Ligne_a& ligne : mv) {
      afficher(ligne);
      cout << endl;
   }

   afficher(v);         cout << endl;
   afficher(a);         cout << endl;
   afficher(tab);       cout << endl;
   afficher(span(a));   cout << endl;

   return EXIT_SUCCESS;
}
