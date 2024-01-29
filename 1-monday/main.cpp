#include <iostream>
#include <string>

#include "values.h"
#include "temperatures.h"

using namespace std;


void es1() {
    float temperaturesC[items];

    for (int i = 0; i < items; i++)
        temperaturesC[i] = (temperatures[i] - 32) * 5/9;

    printTemperatures(items, cities, temperatures, temperaturesC);
}

void es2() {
    int t1=0, t2=0;
    float sum = 0.f;

    for(int i = 1; i < items; i++) {
        if (temperatures[i] < temperatures[t1])
            t1 = i;
        if (temperatures[i] > temperatures[t2])
            t2 = i;
        sum += temperatures[i];
    }

    printTemperatureStatistics(temperatures[t1], temperatures[t2], sum/items, cities[t1], cities[t2]);
}

int main() {
    es1();

    cout << endl;
    es2();
}
