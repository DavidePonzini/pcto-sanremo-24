#include <iostream>
#include <string>
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
    string filename = "students200x7.csv";
    int rows = 200;
    int cols = 7;

    string students[rows];
    string subjects[cols];
    Array2D marks(rows, cols);

    // Read data from file    
    getStudentNames(students, rows, filename);
    getSubjectNames(subjects, cols, filename);
    getStudentMarks(marks, rows, cols, filename);

    // Print header row
    printValue();                   // Empty cell
    for (int i = 0; i < cols; i++)
        printValue(subjects[i]);    // Subject names
    printValue("Media");            // Average
    printValue("Esito");            // Final result
    cout << endl;
    
    // Body (name + marks + avg + result)
    for (int i = 0; i < rows; i++) {
        printValue(students[i]);    // Student name
        float sum = 0.f;

        for (int j = 0; j < cols; j++) {
            float mark = marks[i][j];
            sum += mark; 
            printValue(mark);       // Subject mark
        }

        float avg = sum/cols;
        printValue(avg);            // Marks average
        printValue(avg < 6 ? "Non Ammesso/a" : "Ammesso/a"); // Final result
        cout << endl;
    }
}
