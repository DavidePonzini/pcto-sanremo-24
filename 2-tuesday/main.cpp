#include <iostream>

using namespace std;



// Compiti "a casa": stampare usando il ciclo for/while i valori come mostrato in figura:



//      7 7 7 7 7 7
//      7 7 7 7 7 7
//      7 7 7 7 7 7
void es1() {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
            cout << 7 << " ";
        cout << endl;        
    }
}

//      0 0 0 0 0 0
//      0 0 0 0 0 0
//      0 0 0 0 0 0
void es2() {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
            cout << i << " ";
        cout << endl;        
    }
}

//      0 1 2 3 4 5
//      0 1 2 3 4 5
//      0 1 2 3 4 5
void es3() {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
            cout << 7 << j;
        cout << endl;        
    }
}

//      0   1   2   3   4   5
//      6   7   8   9   10  11
//      12  13  14  15  16  17
//  Suggerimento: usate "\t" invece di " " per mantenere le stampe allineate
void es4() {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
            cout << i * 6 + j << "\t";   // nota: si può anche usare variabile contatore
        cout << endl;        
    }
}

int main() {
    es1();
    cout << endl;
    
    es2();
    cout << endl;
    
    es3();
    cout << endl;
    
    es4();
    cout << endl;
}