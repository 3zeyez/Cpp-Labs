// somme des elements d'un tableau.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // declaration des variables utilisees dans notre programme
    int i, n, s; 
    int arr[100];
    cout << "***Somme des elements d'un tableau***\n";
    cout << "Saisir n = ";
    cin >> n;
    // controle de saisie du n (2<=n<=100)
    while (n < 2 || n > 100) {
        cout << "Saisir n = ";
        cin >> n;
    }
    // initialisation du varaible somme
    s = 0;
    for (i = 0; i < n; ++i) {
        cout << "t[" << (i + 1) << "]=";
        cin >> arr[i];
        s += arr[i];
    }

    // tri du tableau en utilisant tri a bulle
    bool ok = true;
    int n1 = n;
    while (ok) {
        for (i = 0; i < n1 - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                int aux = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = aux;
                ok = false;
            }
        }
        n1--;
    }

    int max = arr[0]; // initialisation du maximum
    int min = arr[0]; // initialisation du minimum
    // affichage au cour du recherche du max et min
    cout << "Tableau = {";
    for (i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        
        if (arr[i] < min) {
            min = arr[i];
        }

        if (i == n - 1) {
            cout << arr[i] << "}" << endl;
        }
        else {
            cout << arr[i] << ", ";
        }
    }
    cout << "La somme des elements du tableau est : " << s << "\n";
    cout << "La moyenne du tableau est : " << double(s) / n << "\n";
    cout << "le maximum du tableau est : " << max << "\n";
    cout << "le minimum du tableau est : " << min << "\n";
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
