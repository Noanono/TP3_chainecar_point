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


int Menu::TraiterChoix(int choix) const
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



int MenuEssai::TraiterEssai(void) const
{
  cout<<"Vous avez selectionne l'option Essai"<<endl;
  return 0;
}

int MenuEssai::TraiterChoix(int choix) const
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
