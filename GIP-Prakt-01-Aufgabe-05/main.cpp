
#include <iostream>
using namespace std;

int main() {
    int zahlen[5];
    char saeulen[5] = {
        '.', '.', '.', '.', '.'
    };

    for(int i = 0; i < 5; i++){
        int zahl = 0;

        while(zahl < 1 || zahl > 9){
            cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
            cin >> zahl;
        }

        zahlen[i] = zahl;
    }

    for(int i = 9; i > 0; i--){

        for(int j = 0; j < 5; j++){

            if(zahlen[j] == i){
                saeulen[j] = '*';
            }
            else if(zahlen[j] > i){
                saeulen[j] = '+';
            }
            else{
                saeulen[j] = '.';
            }
        }

        cout << i << saeulen[0] << saeulen[1]
             << saeulen[2] << saeulen[3]
             << saeulen[4] << endl;
    }

    cout << " 12345" << endl;

    return 0;
}

/*

#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned int sudoku[9][9] = {0};
    string eingabe[11];

    cout << "Bitte geben Sie das Sudoku ein:" << endl;

    // 11 Zeilen einlesen
    for (int i = 0; i < 11; i++) {
        cin >> eingabe[i];
    }

    // Zahlen in das Sudoku-Array übertragen
    int zeile = 0;

    for (int i = 0; i < 11; i++) {

        // Horizontale Trennlinien überspringen
        if (i == 3 || i == 7) {
            continue;
        }

        int spalte = 0;

        for (int j = 0; j < eingabe[i].length(); j++) {

            if (eingabe[i][j] >= '1' && eingabe[i][j] <= '9') {
                sudoku[zeile][spalte] = eingabe[i][j] - '0';
                spalte++;
            }
        }

        zeile++;
    }

    // Sudoku ausgeben
    cout << endl;
    cout << "Das Sudoku lautet:" << endl;

    for (int i = 0; i < 9; i++) {

        // Horizontale Trennlinien
        if (i == 3 || i == 6) {
            cout << "=======MM=======MM=======" << endl;
        }

        for (int j = 0; j < 9; j++) {

            cout << ";" << sudoku[i][j];

            // Vertikale Trennlinien
            if (j == 2 || j == 5) {
                cout << ";MM";
            }
        }

        cout << endl;
    }

    return 0;
}


*/

/*
#define CIMGGIP_MAIN
#include "CImgGIP08.h"

int main()
{
    // Für das "blaue Spielfeld" ...
    const int left_border = 100;
    const int right_border = 500;

    // Für Ausdehnung und Position des weißen Quadrats ...
    int x = 200, y = 300;
    const int rectangle_size = 50;
    int delta = 10;

    gip_white_background();

    while (gip_window_not_closed())
    {
        // Blaues Spielfeld zeichnen
        gip_draw_rectangle(left_border, 100,
            right_border, 500,
            blue);

        // Weißes Quadrat zeichnen
        gip_draw_rectangle(x, y,
            x + rectangle_size,
            y + rectangle_size,
            white);

        // Bewegungsrichtung an den Rändern umkehren
        if (x + rectangle_size >= right_border)
        {
            delta = -10;
        }
        else if (x <= left_border)
        {
            delta = 10;
        }

        // Neue Position berechnen
        x = x + delta;

        gip_wait(100);
    }

    return 0;
}


*/