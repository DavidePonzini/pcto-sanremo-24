#include <iostream>
#include <string>
#include <cmath>


using namespace std;


// Wednesday
#include "pictures.h"

int main() {
    /*
    
    * Premessa: si spiega cosa si deve fare,
                si forniscono suggerimenti e rappresentazione grafica del formato dei file di testo

    |-----|-----|
    |  R  |  C  |
    |----------------------|
    |  CARATTERI IMMAGINE  |
    |  IN DECIMALE         |
    |----------------------|
    
    * NOTA: sono fornite la classe per creare la matrice e stamparla e per leggere int da file
            sono inoltre forniti esempi di utilizzo delle classi e dei metodi (sul proiettore)

    * Esercizi di riscaldamento:
        - creare array vuoto 3x3 e stamparlo
        - impostare il valore [0][0] a 1, stampare
        - impostare anche il valore [1][1] a 1, stampare
        - impostare anche il valore della diagonare a 1, stampare (fornire immagine risultato)
        - creare array vuoto 3x6 e stamparlo
        - inizializzare i valori come mostrato in figura (1,1,1,1,1,1 / 1,1,1,1,1,1 / 1,1,1,1,1,1) e stampare
        - inizializzare i valori come mostrato in figura (1,2,3,4,5,6 / 1,2,3,4,5,6 / 1,2,3,4,5,6) e stampare
        - inizializzare i valori come mostrato in figura (1,2,3,4,5,6 / 7,8,9,10,11,12 / 13,14,15,16,17,18) e stampare
        - fare la stessa cosa con un array 10x50
        - stampare su schermo le dimensioni della seguente immagine: <nome immagine facile>
    * Esercizi core:
        - leggere correttamente l'immagine <nome immagine facile> e stampare su schermo tutti i numeri, usando array2d
        - ripetere per <immagine 2>
        - stampare l'immagine convertendo ciascun numero in char (fornire istruzioni per cast --> (char) valore )
        - ripetere per le altre immagini
        - 
    * Opzionale?:
        - immagini con piu` iterazioni di encoding (2)
        - immagini con piu` iterazioni di encoding (10)
    
    * NOTA: fornire le figure solo su proiettore, cosi` sono obbligati a ragionare su come formulare le loro query
    */

    File file("images/cat2.txt");
    int rows = file.readInt();
    int cols = file.readInt();

    Array2D array(rows, cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            array[i][j] = file.readInt();

    array.print();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << (char) array[i][j];
        cout << endl;
    }
}


// // Thursday
// #include "students.h"

// int main() {
//     /*
    
//     * Premessa: si spiega cosa si deve fare,
//                 si forniscono suggerimenti e rappresentazione grafica delle dimensioni delle varie matrici necessarie

//             |---------------|
//             |   MATERIE     |
//     |-------|---------------|
//     |   S   |               |
//     |   T   |      V        |
//     |   U   |      O        |
//     |   D   |      T        |
//     |   E   |      I        |
//     |   N   |               |
//     |   T   |               |
//     |   I   |               |
//     |-------|---------------|
    
//     * NOTA: le funzioni usate per leggere ed inizializzare sono gia` fornite completete

//     * Esercizi di riscaldamento:
//         - creare array vuoto 3x3 e stamparlo
//         - creare array vuoto 3x5 e stamparlo
//         - inizializzare i valori come mostrato in figura (1,1,1,1,1 / 1,1,1,1,1 / 1,1,1,1,1) e stampare
//         - inizializzare i valori come mostrato in figura (15,14,13,12,11 / 10,9,8,7,6 / 5,4,3,2,1) e stampare
//         - fare la stessa cosa con un array 10x50
//         - stampare i nomi di tutti gli studenti
//     * Esercizi core:
//         - stampare i voti come mostrato in figura
//         - stampare la classifica di "Italiano" come mostrato in figura
//         - stampare la classifica per ciascuna materia
//     * Opzionale?:
//         - classifica basata sulla media (serve creare un nuovo array e calcolare le medie)
    
//     * NOTA: fornire le figure solo su proiettore, cosi` sono obbligati a ragionare su come formulare le loro query
    
//     */

    
//     string filename = "students.csv";
//     int rows = 4;
//     int cols = 4;

//     string students[rows];
//     string subjects[cols];
//     float** marks = createEmpty2DArray(rows, cols);

//     getStudentNames(students, rows, filename);
//     getSubjectNames(subjects, cols, filename);
//     getStudentMarks(marks, rows, cols, filename);    

//     int sorted[rows];
//     int sortCol = 3;
//     sort(sorted, marks, rows, cols, sortCol);

//     cout << subjects[sortCol] << ":" << endl;
//     for (int i = 0; i < rows; i++) {
//         int idx = sorted[i];
//         cout << students[idx] << " " << marks[idx][sortCol] << endl;
//     }
// }

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