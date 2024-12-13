#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//--------------------------------------------------
class Point {
   friend ostream& operator<< (ostream& os, const Point& point);

public:
   enum class   Couleur {ROUGE, VERT, BLEU};
   static const Couleur def_couleur;

   Point()                                           : Point(0, 0, def_couleur)                    {  }
   Point(int x, int y, Couleur couleur=def_couleur)  : x(x), y(y), couleur(couleur)                {  }
   Point(const Point& autre)                         : x(autre.x), y(autre.y), couleur(def_couleur){  }

   Point& operator= (const Point& point);

   bool operator== (const Point& autre) { return x == autre.x and y == autre.y; }

   // getter
   int get_x() const { return x; }
   int get_y() const { return y; }

   // setter
   void set_x(int x) { this->x = x; }
   void set_y(int y) { this->y = y; }

private:
   Couleur couleur;
   int x;
   int y;
};

//--------------------------------------------------
const Point::Couleur Point::def_couleur = Point::Couleur::ROUGE;      // valeur static
Point& Point::operator= (const Point& autre) {
   if (this == &autre) return *this;
   this->x = autre.x;
   this->y = autre.y;
   return *this;
}

//--------------------------------------------------
ostream& operator<< (ostream& os, const Point& point) {
   return os << "(" << point.x << ", " << point.y << ")" << "couleur : " << (int)point.couleur;

}

//--------------------------------------------------
int main() {
   Point p1;               cout << p1 << endl;
   Point p2(2, 3);         cout << p2 << endl;

   p2.set_x(12);
   cout << p2.get_x()      << endl;


   Point p3(1, 2, Point::Couleur::VERT);


   Point p4(p3);           // construction par copie
   cout << p4 << endl;
   p3 = p2;                // affectation
   cout << p3 << endl;

   if (p1 == p2)
      cout << "oui";

   return EXIT_SUCCESS;
}
