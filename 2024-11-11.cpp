#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {

   ofstream file_out ("../test_out.txt");
   ifstream file_in ("../test_in.txt");

   char car    = 'a';
   int  entier = 2;
   double reel = 3.14;
   file_out << car << " " << entier << " " << reel << endl;

   stringstream ss_test("marcel:4.3, 5.1,\n6.0,4.1");
   cout << ss_test.str() << endl;
   string nom;
   getline(ss_test, nom, ':');
   cout << "nom : " << nom << endl;

   string str_note;
   while(getline(ss_test, str_note, ','))
      cout << str_note << endl;


   stringstream ss_nouveau;
   ss_nouveau << "toto";
   cout << ss_nouveau.str();


   return EXIT_SUCCESS;
}
