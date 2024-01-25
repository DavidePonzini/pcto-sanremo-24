#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

#include "students.h"

using namespace std;


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

void getStudentMarks(float** array, int rows, int cols, string filename) {
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

void sort(int result[], float** array, int rows, int cols, int sortColumn) {
    pair<float, int> indexedArray[rows];
    for (int i = 0; i < rows; i++) {
        indexedArray[i] = make_pair(array[i][sortColumn], i);
    }

    std::sort(indexedArray, indexedArray + rows);

    for (int i = 0; i < rows; i++) {
        result[i] = indexedArray[i].second;
    }
}

float **createEmpty2DArray(int rows, int cols)
{
    float** array = new float*[rows];

    for (int i = 0; i < rows; i++) {
        array[i] = new float[cols];

        for (int j = 0; j < cols; j++) {
            array[i][j] = 0.f;
            // array[i][j] = i*cols + j; --> si puo` fare esercizio su questo con questionario finale per vedere apprendimento?
        }
    }

    return array;
}

void print2DArray(float** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << array[i][j] << "\t";
        cout << endl;
    }
}
