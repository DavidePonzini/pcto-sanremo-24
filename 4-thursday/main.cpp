#include <iostream>
#include <string>
#include <iomanip>
#include "students.h"

using namespace std;


/*
* Premessa: si spiega cosa si deve fare,
            si forniscono suggerimenti e rappresentazione grafica delle dimensioni delle varie matrici necessarie

        |---------------|
        |   MATERIE     |
|-------|---------------|
|   S   |               |
|   T   |      V        |
|   U   |      O        |
|   D   |      T        |
|   E   |      I        |
|   N   |               |
|   T   |               |
|   I   |               |
|-------|---------------|

* NOTA: le funzioni usate per leggere ed inizializzare sono gia` fornite completete

* Esercizi di riscaldamento:
    - creare array vuoto 3x3 e stamparlo
    - creare array vuoto 3x5 e stamparlo
    - inizializzare i valori come mostrato in figura (1,1,1,1,1 / 1,1,1,1,1 / 1,1,1,1,1) e stampare
    - inizializzare i valori come mostrato in figura (15,14,13,12,11 / 10,9,8,7,6 / 5,4,3,2,1) e stampare
    - stampare i nomi di tutti gli studenti
* Esercizi core:
    - stampare i voti come mostrato in figura
    - Aggiungere la colonna media, come mostrato in figura
    - Aggiungere la colonna esito, come mostrato in figura. Gli studenti con una media < 6 hanno esito Non Ammesso/a.
* Esclusi:
    - stampare la classifica di "Italiano" come mostrato in figura
    - stampare la classifica per ciascuna materia
    - classifica basata sulla media (serve creare un nuovo array e calcolare le medie)

* NOTA: fornire le figure solo su proiettore, cosi` sono obbligati a ragionare su come formulare le loro query
*/


int main() {
    string filename = "students.csv";
    int rows = 4;
    int cols = 4;

    string students[rows];
    string subjects[cols];
    Array2D marks(rows, cols);
    
    getStudentNames(students, rows, filename);
    getSubjectNames(subjects, cols, filename);
    getStudentMarks(marks, rows, cols, filename);

    // marks.print();

    // header row
    printValue();
    for (int i = 0; i < cols; i++)
        printValue(subjects[i]);
    printValue("Media");
    printValue("Esito");
    cout << endl;
    
    // body (name + marks + avg)
    for (int i = 0; i < rows; i++) {
        printValue(students[i]);
        float sum = 0.f;

        for (int j = 0; j < cols; j++) {
            float mark = marks[i][j];
            sum += mark; 
            printValue(mark);
        }
        float avg = sum/cols;
        printValue(avg);

        if (avg < 6)
            printValue("Non Ammesso/a");
        else
            printValue("Ammesso/a");

        cout << endl;
    }


    // Part 2
    // cout << endl;

    // int sorted[rows];
    // int sortCol = 3;
    // sort(sorted, marks, rows, cols, sortCol);

    // printValue("");
    // printValue(subjects[sortCol]);
    // cout << endl;

    // for (int i = 0; i < rows; i++) {
    //     int idx = sorted[i];
    //     printValue(students[idx]);
    //     printValue(marks[idx][sortCol]);
    //     cout << endl;
    // }
}
