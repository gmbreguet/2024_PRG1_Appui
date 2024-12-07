#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Personne {
   string nom;
   uint   age;
};

//--------------------------------------------------
void afficher(const Personne& p) {
   cout << "nom : " << p.nom << endl;
   cout << "age : " << p.age << endl;
}

//--------------------------------------------------
void afficher(const Personne* p) {
   cout << "nom : " << p->nom << endl;
   cout << "age : " << p->age << endl;
}

//--------------------------------------------------
int main() {

   Personne p1 = {"Anne", 18};
//   cout << p1.nom << " " << p1.age << endl;
   afficher(p1); cout << endl;

   Personne* ptr = &p1;
//   cout << (*ptr).nom << " " << ptr->age << endl;
   afficher(ptr); cout << endl;

         int variable  = 2;
   const int constante = 2;

   int* ptr1 = &variable;
   ptr1 = nullptr;
//   ptr1 = &constante;

   const int* ptr2 = &variable;
   ptr2 = &constante;

   int* const ptr3 = &variable;
   int variable2;
//   ptr3 = &variable2;


   string s = "bonjour"s;
   s      = "salut"s;
   s.assign("salut"s);

   return EXIT_SUCCESS;
}
