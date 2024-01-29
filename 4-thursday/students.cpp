#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stdexcept>

#include "students.h"

using namespace std;


Array2D::Array2D(int rows, int cols) : rows(rows), cols(cols) {
    data = new float*[rows];
    
    for (int i = 0; i < rows; i++) {
        data[i] = new float[cols];
    
        for (int j = 0; j < cols; j++)
            data[i][j] = 0.f;
    }
}

Array2D::~Array2D() {
    for (int i = 0; i < rows; ++i)
        delete[] data[i];
    delete[] data;
}

float* Array2D::operator[](int pos) {
    return data[pos];
}

void Array2D::print() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << fixed << setprecision(1) << setfill(' ') << setw(8) << data[i][j];
        cout << endl;
    }
}

void getStudentNames(string array[], int length, string filename) {
    ifstream file(filename);
    string buf;

    getline(file, buf); // discard first line (header)

    for (int i = 0; i < length; i++) {
        getline(file, buf, ',');
        array[i] = buf;

        getline(file, buf); // discard the rest of the row
    }

    file.close();
}

void getSubjectNames(string array[], int length, string filename) {
    ifstream file(filename);
    string buf;

    // skip "Nomi"
    getline(file, buf, ',');

    for (int i = 0; i < length - 1; i++) {
        getline(file, buf, ',');
        array[i] = buf;
    }

    // last line has no ',' at the end
    getline(file, buf);
    array[length - 1] = buf;

    file.close();
}

void getStudentMarks(Array2D& array, int rows, int cols, string filename) {
    ifstream file(filename);
    string buf;

    // skip header
    getline(file, buf);
    
    for (int i = 0; i < rows; i++) {
        // skip name
        getline(file, buf, ',');

        for (int j = 0; j < cols - 1; j++) {
            getline(file, buf, ',');
            array[i][j] = stof(buf);
        }
        // last value
        getline(file, buf);
        array[i][cols - 1] = stof(buf);
    }
}

void printValue() {
    printValue("");
}

void printValue(float value) {
    cout << fixed << setprecision(1) << setfill(' ') << setw(16) << value;
}

void printValue(std::string value) {
    cout << setfill(' ') << setw(16) << value; 
}

// void sort(int result[], Array2D& array, int rows, int cols, int sortColumn) {
//     pair<float, int> indexedArray[rows];
//     for (int i = 0; i < rows; i++) {
//         indexedArray[i] = make_pair(array[i][sortColumn], i);
//     }

//     std::sort(indexedArray, indexedArray + rows);

//     for (int i = 0; i < rows; i++) {
//         result[i] = indexedArray[i].second;
//     }
// }
