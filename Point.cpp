#include<iostream>
using namespace std;

#include"Point.h"

void Point::Affiche(void) const
{
    cout << "("<<m_x<<","<<m_y<<") " << endl;
}

void PointNomme::Affiche(void) const
{
    cout << m_nom;
    Point::Affiche();
}
