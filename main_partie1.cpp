#include <iostream>
using namespace std;

#include "Point.h"

int main() {
    Point p;
    Point q(1, 2);

    p.Affiche();
    q.Affiche();

    p.Modifier(4, 5);
    p.Affiche();

    q.Translater(4, -2);
    q.Affiche();

    return 0;
}
