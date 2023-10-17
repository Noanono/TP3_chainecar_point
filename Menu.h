#include "Point.h"

class Menu
{
    int fin;
public:
    virtual void AfficherMenu(void) const;
    virtual int DemanderChoix(void) const ;
    virtual int TraiterChoix(int choix);
    virtual int TraiterQuitter(void) const;
    virtual int TraiterAide(void) const;
    virtual void Executer(void);
};

class MenuEssai : public Menu
{
public:
    virtual void AfficherMenu(void) const;
    virtual int TraiterChoix(int choix);
    virtual int TraiterEssai(void) const;

};

class MenuPoint : public Menu
{
    Point *P;
public:
    MenuPoint(Point *p = nullptr) : P(p) {};
    virtual void AfficherMenu(void) const;
    virtual int TraiterChoix(int choix);
    virtual int TraiterChoixPoint(int choix);
    virtual int TraiterAfficher(void) const;
    virtual int TraiterModifier(void);
    virtual int TraiterTranslater(void);

};