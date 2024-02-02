#pragma once
#include <string>


void printTemperatures(int length, std::string cities[], float temperaturesF[], float temperaturesC[]);
void printTemperatureStatistics(float minTemp, float maxTemp, float avgTemp, std::string minTempCity, std::string maxTempCity);

// Utility functions
std::string format(std::string input, int len);
std::string format(float input, int len);
void printLine(int length);
