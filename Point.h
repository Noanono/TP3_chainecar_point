#include "ChaineCar.h"

class Point
{
    float m_x;
    float m_y;
public:
    Point(float x=0, float y=0) {m_x=x; m_y=y;}
    virtual void Modifier(float x=0, float y=0) {m_x=x; m_y=y;}
    virtual void Modifier(const ChaineCar &nom) {};
    virtual float AvoirX(void) const {return m_x;}
    virtual float AvoirY(void) const {return m_y;}
    virtual void Translater(float x=0, float y=0) {m_x=m_x+x; m_y=m_y+y;}
    virtual void Affiche(void) const;
};

class PointNomme : public Point
{
    ChaineCar m_nom;
public:
    PointNomme(float x=0, float y=0, const char * nom="O") : Point(x,y), m_nom(nom) {};
    virtual void ChangerNom(const ChaineCar &nom) {m_nom=nom;};
    virtual void Affiche(void) const;
    virtual void Modifier(float x=0, float y=0) {Point::Modifier(x,y);};
    virtual void Modifier(const ChaineCar &nom) {m_nom = nom;};
    virtual void Translater(float x=0, float y=0) {Point::Translater(x,y); m_nom = m_nom + "_t";};
};
