#pragma once
#include <string>


float** createEmpty2DArray(int rows, int cols);
void print2DArray(float** array, int rows, int cols);

void getStudentNames(std::string array[], int length, std::string filename);
void getSubjectNames(std::string array[], int length, std::string filename);
void getStudentMarks(float** array, int rows, int cols, std::string filename);

void sort(int result[], float** array, int rows, int cols, int sortColumn);