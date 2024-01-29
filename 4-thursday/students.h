#pragma once
#include <string>
#include <fstream>


class Array2D {
private:
    float** data;
    int rows;
    int cols;
public:
    Array2D(int rows, int cols);
    ~Array2D();
    float* operator[](int pos);
    void print();
};

void getStudentNames(std::string array[], int length, std::string filename);
void getSubjectNames(std::string array[], int length, std::string filename);
void getStudentMarks(Array2D& array, int rows, int cols, std::string filename);

void printValue();
void printValue(float value);
void printValue(std::string value);

// void sort(int result[], Array2D& array, int rows, int cols, int sortColumn);
