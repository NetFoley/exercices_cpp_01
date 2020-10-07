// exercices_cpp_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Rendu de Valentin Fonderflick

#include <iostream>
#include "cPoint.h"

using namespace std;

int main()
{
    //Test du programme de l'exercice 62
    cPoint62 point62;
    point62.affiche();
    point62.deplace(6, 2);
    point62.affiche();

    //Test du programme de l'exercice 63
    cPoint63 point63(1,1);
    cout << "Coordonne du point 63 : x: " << point63.abscisse() << " y : " << point63.ordonnee() << endl;
    point63.deplace(5, 2);
    cout << "Coordonne du point : x: " << point63.abscisse() << " y : " << point63.ordonnee() << endl;

    //Test du programme de l'exercice 64
    cPoint63 point_1(3, 1), point_2(4, 2);
    cout << "Coordonne du point 64 : x: " << point_2.abscisse() << " y : " << point_2.ordonnee() << endl;
    point_2.homothethie(2, point_1.abscisse(), point_1.ordonnee());
    cout << "Coordonne du point homothethie +2+2 : x: " << point_2.abscisse() << " y : " << point_2.ordonnee() << endl;

    //Test du programme de l'exercice 65
    point_2.rotation(90, point_1.abscisse(), point_1.ordonnee());
    cout << "Coordonne du point : x: " << point_2.abscisse() << " y : " << point_2.ordonnee() << endl;
    cout << "Coordonne du point : r: " << point_2.rho() << " t : " << point_2.theta() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
