#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Wednesday
#include "students.h"

int main() {
    string filename = "students.csv";
    int rows = 4;
    int cols = 4;

    string students[rows];
    string subjects[cols];
    float** marks = createEmpty2DArray(rows, cols);

    getStudentNames(students, rows, filename);
    getSubjectNames(subjects, cols, filename);
    getStudentMarks(marks, rows, cols, filename);    

    int sorted[rows];
    int sortCol = 1;
    sort(sorted, marks, rows, cols, sortCol);

    cout << subjects[sortCol] << ":" << endl;
    for (int i = 0; i < rows; i++) {
        int idx = sorted[i];
        cout << students[idx] << " " << marks[idx][sortCol] << endl;
    }
}

/*
// Monday //

#include "temperatures.h"
#include "data.h"


float FtoC(float F) {
    return (F-32)*5/9;
}

int main() {
    // Es 1
    float temperaturesC[items];

    for (int i = 0; i < items; i++)
        temperaturesC[i] = FtoC(temperatures[i]);

    printTemperatures(items, cities, temperatures, temperaturesC);

    // Es 2
    int t1=0, t2=0;
    float sum = 0.f;

    for(int i = 1; i < items; i++) {
        if (temperatures[i] < temperatures[t1])
            t1 = i;
        if (temperatures[i] > temperatures[t2])
            t2 = i;
        sum += temperatures[i];
    }

    cout << endl;
    printTemperatureStatistics(temperatures[t1], temperatures[t2], sum/items, cities[t1], cities[t2]);
}
*/