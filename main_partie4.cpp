#include<iostream>
using namespace std;

#include"Menu.h"

int main()
{
    Point *p;

    //Déclaration du point à gérer (à faire)
    char c;
    cout<<"Programme de gestion de point:"<<endl;
    cout<<"souhaitez-vous nommer votre point (o/n)?: ";
    cin>>c;
    if(c=='o')
    {
        char nom[20];
        p = new PointNomme;
        cout << "Quel nom voulez-vous donner à votre point?: ";
        cin >> nom;
        p->Modifier(nom);
    }
    else
    {
        p = new Point;
    }

    //Déclaration du Menu m (à faire)
    MenuPoint m(p);

    m.Executer();
    //Une instruction attendue ici (à faire)
    return 0;
}
