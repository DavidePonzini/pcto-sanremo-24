#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));

    int arr[] = {4, 2, 9, 5, 1};
    int size = 5;
    
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    while (true) {
        bool sorted = true;
        for (int i = 1; i < size; i++) {
            if (arr[i] < arr[i - 1]) {
                sorted = false;
                break;
            }
        }
        
        if (sorted) {
            break;
        }
        
        random_shuffle(arr, arr + size);
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
