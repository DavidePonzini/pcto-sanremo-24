#include "pictures.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>


using namespace std;


Array2D::Array2D(int rows, int cols) : rows(rows), cols(cols) {
    data = new int*[rows];
    
    for (int i = 0; i < rows; i++) {
        data[i] = new int[cols];
    
        for (int j = 0; j < cols; j++)
            data[i][j] = 0;
    }
}

Array2D::~Array2D() {
    for (int i = 0; i < rows; ++i)
        delete[] data[i];
    delete[] data;
}

int* Array2D::operator[](int pos) {
    return data[pos];
}

void Array2D::print() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << setfill(' ') << setw(4) << data[i][j];
        cout << endl;
    }
}

File::File(std::string filename) {
    file.open(filename);
    
    if (!file)
        throw runtime_error("Error opening file: " + filename);
}

File::~File() {
    if (file.is_open())
        file.close();
}

int File::readInt() {
    if (file.eof())
        throw runtime_error("End of file reached or file not readable.");

    int result;
    file >> result;


    if (file.fail())
        throw runtime_error("Failed to read integer from file.");

    return result;
}
