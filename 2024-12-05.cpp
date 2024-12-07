#include <iostream>
#include <cstdlib>
#include <array>
#include <span>

using namespace std;

//--------------------------------------------------
template <typename T, size_t n>
struct Struct {
   string nom;
   array<T, n> valeur;
};

//--------------------------------------------------
template <typename T, size_t n>
void put (span<T, n> tab) {
   for (const T& e : tab)
      cout << e << " " << endl;
}

//--------------------------------------------------
template <typename T, size_t n>
ostream& operator<< (ostream& os, span<T, n> tab) {
   for (const T& e : tab)
      cout << e << " " << endl;
}

//--------------------------------------------------
int main() {

   Struct<int, 3> chose = {"toto", {1, 2, 3}};
//   put(chose.valeur);
   put<int, 3>(chose.valeur);
   put(span<int, 3>(chose.valeur));

//   cout << chose.valeur << endl;
//   cout << <int, 3>(chose.valeur);
   operator<< <int, 3>(cout, chose.valeur);
   cout << (span<int, 3>(chose.valeur));

   return EXIT_SUCCESS;
}
