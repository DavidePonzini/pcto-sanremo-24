import pandas as pd

def celsius_to_fahrenheit(celsius_temperature):
    """Converts Celsius temperature to Fahrenheit."""
    return (celsius_temperature * 9/5) + 32

def fahrenheit_to_celsius(fahrenheit_temperature):
    """Converts Fahrenheit temperature to Celsius."""
    return (fahrenheit_temperature - 32) * 5/9


def process_dataset(input, output):
    data = pd.read_csv(input)

    result = pd.DataFrame()

    result['City'] = data['City'] + ' (' + data['Country'] + ')'
    result['Temperature'] = data['Year'].apply(lambda x: x.split()[1][1:-1])

    print(result)

    max_length = result['City'].apply(lambda x: len(str(x))).max()
    print(max_length)

    result.to_csv(output)


def to_cpp(input, output):
    data = pd.read_csv(input)

    with open(output, 'w') as f:
        print('''#pragma once
#include <string>


const int items = {};  // length of both cities[] and temperatures[]

std::string cities[] = {{ {} }};

float temperatures[] = {{ {} }};'''.format(
    len(data),
    [x for x in data['City']],
    [x for x in data['Temperature']]), file=f)

if __name__ == '__main__':
    to_cpp('data2.csv', 'out.cpp')