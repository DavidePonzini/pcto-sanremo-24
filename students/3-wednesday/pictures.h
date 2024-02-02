#pragma once
#include <string>
#include <fstream>


class Array2D {
private:
    int** data;
    int rows;
    int cols;
public:
    Array2D(int rows, int cols);
    ~Array2D();
    int* operator[](int pos);
    void print();
};

class File {
private:
    std::ifstream file;
public:
    File(std::string filename);
    ~File();
    
    int readInt();
};
