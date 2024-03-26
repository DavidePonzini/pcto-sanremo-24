#include <iostream>
#include <string>

#include "pictures.h"

using namespace std;


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
    - creare array vuoto 2x5 e stamparlo
    - creare array vuoto 3x3 e stamparlo
    - impostare il valore [0][0] a 1, stampare
    - impostare anche il valore [1][1] a 1, stampare
    - impostare anche il valore della diagonare a 1, stampare (fornire immagine risultato)
    - creare un nuovo array 6x10. impostare tutta la prima riga a 1
    - creare array vuoto 3x6 e stamparlo
    
    IDENTICI AL GIORNO PRIMA:
    - inizializzare i valori come mostrato in figura (7,7,7,7,7,7 / 7,7,7,7,7,7 / 7,7,7,7,7,7) e stampare
        arr[i][j] = 7
    - inizializzare i valori come mostrato in figura (0,0,0,0,0,0 / 1,1,1,1,1,1 / 2,2,2,2,2,2) e stampare
        arr[i][j] = i
    - inizializzare i valori come mostrato in figura (0,1,2,3,4,5 / 0,1,2,3,4,5 / 0,1,2,3,4,5) e stampare
        arr[i][j] = j
    - inizializzare i valori come mostrato in figura (0,1,2,3,4,5 / 6,7,8,9,10,11 / 12,13,14,15,16,17) e stampare
        arr[i][j] = i*col + j oppure con variabile contatore
    
    - fare la stessa cosa con un array la cui dimensione e` scelta in input dall'utente


----------------------------------------------------------------------------------------------------------
    
    - stampare su schermo le dimensioni della seguente immagine: <nome immagine facile>

* Esercizi core:
    - leggere correttamente l'immagine <nome immagine facile> e stampare su schermo tutti i numeri, usando array2d
    - ripetere per <immagine 2>
    - stampare l'immagine convertendo ciascun numero in char (fornire istruzioni per cast --> (char) valore )
    - ripetere per le altre immagini
    - utilizzare lo stesso procedimento per l'immagine <nome immagine>, in cui pero` bisogna sostituire a tutti i numeri 0 (NULL) il valore 32 (' ')
* Opzionale?:
    - immagini con piu` iterazioni di encoding (2)

* NOTA: fornire le figure solo su proiettore, cosi` sono obbligati a ragionare su come formulare le loro query
*/


int main() {
    File file("images/cat2.txt");
    int rows = file.readInt();
    int cols = file.readInt();

    Array2D array(rows, cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            array[i][j] = file.readInt();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << (char) array[i][j];
        cout << endl;
    }
}
