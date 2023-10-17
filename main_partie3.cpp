#include <iostream>
using namespace std;

#include "Menu.h"

int main(void)
{
    //Test de la classe Menu

    Menu m;
    m.Executer();

    //Test de la classe MenuEssai

    MenuEssai me;
    me.Executer();
    // Executer fonctionne car MenuEssai hérite de Menu et que les méthodes sont en virtual

    return 0;
}