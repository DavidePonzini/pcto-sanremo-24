#include <iostream>
#include <string>
#include <cmath>

#include "temperatures.h"
#include "data.h"

using namespace std;


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