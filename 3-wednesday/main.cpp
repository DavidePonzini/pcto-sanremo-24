#include <iostream>
#include <string>

#include "pictures.h"

using namespace std;

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
