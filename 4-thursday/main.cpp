#include <iostream>
#include <string>
#include "students.h"

using namespace std;

int main() {
    string filename = "students200x7.csv";
    int rows = 200;
    int cols = 7;

    string students[rows];
    string subjects[cols];
    Array2D marks(rows, cols);

    // Read data from file    
    getStudentNames(students, rows, filename);
    getSubjectNames(subjects, cols, filename);
    getStudentMarks(marks, rows, cols, filename);

    // Print header row
    printValue();                   // Empty cell
    for (int i = 0; i < cols; i++)
        printValue(subjects[i]);    // Subject names
    printValue("Media");            // Average
    printValue("Esito");            // Final result
    cout << endl;
    
    // Body (name + marks + avg + result)
    for (int i = 0; i < rows; i++) {
        printValue(students[i]);    // Student name
        float sum = 0.f;

        for (int j = 0; j < cols; j++) {
            float mark = marks[i][j];
            sum += mark; 
            printValue(mark);       // Subject mark
        }

        float avg = sum/cols;
        printValue(avg);            // Marks average
        printValue(avg < 6 ? "Non Ammesso/a" : "Ammesso/a"); // Final result
        cout << endl;
    }
}
