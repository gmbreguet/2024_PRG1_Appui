#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
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
