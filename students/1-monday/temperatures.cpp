#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#include "temperatures.h"

using namespace std;


void printTemperatures(int length, string cities[], float temperaturesF[], float temperaturesC[]) {
    string table_header = "| City                                               | Temperature (F) | Temperature (C) |";
    
    printLine(table_header.length());
    cout << table_header << endl;
    printLine(table_header.length());
    
    for(auto i = 0; i < length; i++) {
        cout << "| " << format(cities[i], 50) << " | " << format(temperaturesF[i], 15) << " | " << format(temperaturesC[i], 15) << " | " << endl; 
    }

    printLine(table_header.length());
}

void printTemperatureStatistics(float minTemp, float maxTemp, float avgTemp, string minTempCity, string maxTempCity) {
    string headerMin = "| Min temperature | ";
    string headerMax = "| Max temperature | ";
    string headerAvg = "| Avg temperature | ";

    int numLen = 8;
    int cityLen = max(minTempCity.length(), maxTempCity.length());
    int len = headerMin.length() + numLen + cityLen + 7;
    
    printLine(len);
    cout << headerMin << format(minTempCity, cityLen) << " | " << format(minTemp, numLen) << "°F |" << endl;
    cout << headerMax << format(maxTempCity, cityLen) << " | " << format(maxTemp, numLen) << "°F |" << endl;
    printLine(len);
    cout << headerAvg << format(avgTemp, numLen + cityLen + 3) << "°F |"  << endl;
    printLine(len);
}

string format(string input, int len) {
    if (input.length() > len)
        return input.substr(0, len - 3) + "...";

    string result;
    
    for (auto i = 0; i < len - input.length(); i++)
        result += ' ';
    result += input;

    return result;
}

string format(float input, int len) {
    stringstream s; 
    s << fixed << setprecision(1) << input; 
    return format(s.str(), len);
}

void printLine(int length) {
    for(auto i = 0; i < length; i++)
        cout << '-';
    cout << endl;

}

