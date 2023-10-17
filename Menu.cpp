#include<iostream>
using namespace std;

#include"Menu.h"

void Menu::AfficherMenu(void) const
{
  cout<<"Menu: "<<endl;
  cout<<"- 0:\t Quitter"<<endl;
  cout<<"- 1:\t Aide"<<endl;
}


int Menu::DemanderChoix(void) const
{
  int choix;
  cout<<"Votre choix? ";
  cin>>choix;
  return choix;
}


int Menu::TraiterChoix(int choix)
{
  int fin=0;
  switch(choix)
    {
    case 0:
      fin=TraiterQuitter();
      break;
    case 1:
      fin=TraiterAide();
      break;
    }
  return fin;
}

  
int Menu::TraiterQuitter(void) const
{
  int fin=0;
  char reponse;
  cout<<"Voulez-vous vraiment sortir de l'application (o/n)? ";
  cin>>reponse;
  if((reponse=='o')||(reponse=='O'))
    {
      fin=1;
    }
  return fin;
}

  
int Menu::TraiterAide(void) const
{
  cout<<"Choisir un numéro dans la liste proposée"<<endl;
  return 0;
}

void Menu::Executer()
{
    fin = 0;
    cout<<"Application : "<<endl;
    while(!fin)
    {
        AfficherMenu();
        int choix=DemanderChoix();
        fin = TraiterChoix(choix);
    }
}

/*********************************MenuEssai************************************/

int MenuEssai::TraiterEssai(void) const
{
  cout<<"Vous avez selectionne l'option Essai"<<endl;
  return 0;
}

int MenuEssai::TraiterChoix(int choix)
{
  int fin=0;
  switch(choix)
    {
    case 0:
      fin=TraiterQuitter();
      break;
    case 1:
      fin=TraiterAide();
      break;
    case 2:
      fin=TraiterEssai();
      break;
    }
  return fin;
}

void MenuEssai::AfficherMenu(void) const
{
  Menu::AfficherMenu();
  cout<<"- 2:\t Essai"<<endl;
}

/*********************************MenuPoint************************************/

void MenuPoint::AfficherMenu(void) const
{
    Menu::AfficherMenu();
    cout << "- 2:\t Afficher" << endl;
    cout << "- 3:\t Modifier" << endl;
    cout << "- 4:\t Translater" << endl;
}

int MenuPoint::TraiterChoix(int choix)
{
    int fin=0;
    switch(choix)
    {
    case 0:
        fin=TraiterQuitter();
        break;
    case 1:
        fin=TraiterAide();
        break;
    case 2:
        fin=TraiterAfficher();
        break;
    case 3:
        fin=TraiterModifier();
        break;
    case 4:
        fin=TraiterTranslater();
        break;
    }
    return fin;
}

int MenuPoint::TraiterAfficher(void) const
{
    P->Affiche();
    return 0;
}

int MenuPoint::TraiterModifier(void)
{
    int x,y;
    cout << "Entrez le nouvel abscise du point" << endl;
    cin >> x;
    cout << "Entrez le nouvel ordonnee du point" << endl;
    cin >> y;
    P->Modifier(x,y);
    return 0;
}

int MenuPoint::TraiterTranslater(void)
{
    int x,y;
    cout << "Entrez le deplacement horizontal" << endl;
    cin >> x;
    cout << "Entrez le deplacement vertical" << endl;
    cin >> y;
    P->Translater(x,y);
    return 0;
}

int MenuPoint::TraiterChoixPoint(int choix)
{
    int fin=0;
    switch(choix)
    {
    case 0:
        fin=TraiterQuitter();
        break;
    case 1:
        fin=TraiterAide();
        break;
    case 2:
        fin=TraiterAfficher();
        break;
    case 3:
        fin=TraiterModifier();
        break;
    case 4:
        fin=TraiterTranslater();
        break;
    }
    return fin;
}
