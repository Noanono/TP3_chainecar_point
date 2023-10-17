#include <iostream>
using namespace std;

#include "Point.h"

int main(void)
{
  PointNomme p;
  p.Affiche();
  // Les attributs affiche sont uniquement les coordonnées du point

  PointNomme q(1, 2);
  // Ce constructeur fonctionne et fait appel au constructeur de Point

  q.Affiche();
  q.Modifier("Q");
  q.Affiche();
  p.Translater(1, 1);
  p.Affiche();

  return 0;
}