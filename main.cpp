#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Wednesday
#include "students.h"

int main() {
    // inizializzazione -- si forniscono suggerimenti e rappresentazione delle dimensioni delle varie matrici
    // le funzioni usate sono gia` fornite

    /*
    Esercizi di riscaldamento:
        - creare array vuoto 3x3 e stamparlo
        - creare array vuoto 6x3 e stamparlo
        - inizializzare i valori come mostrato in figura (1,1,1,1,1,1 / 1,1,1,1,1,1 / ...) e stampare
        - inizializzare i valori come mostrato in figura (1,2,3,4,5,6 / 1,2,3,4,5,6 / ...) e stampare
        - inizializzare i valori come mostrato in figura (1,2,3,4,5,6 / 7,8,9,... / ...) e stampare
        - fare la stessa cosa con un array 10x50
        - stampare i nomi di tutti gli studenti
    Esercizi:
        - stampare i voti come mostrato in figura
        - stampare la classifica di "Italiano" come mostrato in figura
        - stampare la classifica per ciascuna materia
    Opzionale:
        - classifica basata sulla media (serve creare un nuovo array e calcolare i valori)
    
    NOTA: fornire le figure solo su proiettore, cosi` sono obbligati a formulare le loro query
    */

    
    string filename = "students.csv";
    int rows = 4;
    int cols = 4;

    string students[rows];
    string subjects[cols];
    float** marks = createEmpty2DArray(rows, cols);

    getStudentNames(students, rows, filename);
    getSubjectNames(subjects, cols, filename);
    getStudentMarks(marks, rows, cols, filename);    

    int sorted[rows];
    int sortCol = 3;
    sort(sorted, marks, rows, cols, sortCol);

    cout << subjects[sortCol] << ":" << endl;
    for (int i = 0; i < rows; i++) {
        int idx = sorted[i];
        cout << students[idx] << " " << marks[idx][sortCol] << endl;
    }
}

/*
// Monday //

#include "temperatures.h"
#include "data.h"


float FtoC(float F) {
    return (F-32)*5/9;
}

int main() {
    // Es 1
    float temperaturesC[items];

    for (int i = 0; i < items; i++)
        temperaturesC[i] = FtoC(temperatures[i]);

    printTemperatures(items, cities, temperatures, temperaturesC);

    // Es 2
    int t1=0, t2=0;
    float sum = 0.f;

    for(int i = 1; i < items; i++) {
        if (temperatures[i] < temperatures[t1])
            t1 = i;
        if (temperatures[i] > temperatures[t2])
            t2 = i;
        sum += temperatures[i];
    }

    cout << endl;
    printTemperatureStatistics(temperatures[t1], temperatures[t2], sum/items, cities[t1], cities[t2]);
}
*/