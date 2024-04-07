#include "functions.h"

void proccess() {
    const int arraySize = 16;
    int  i = 0;
    float arrNumbers[arraySize];

    while (i < arraySize) {
        cin >> arrNumbers[i];
        while (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Incorrect number\n";
            cin >> arrNumbers[i];
        }
        i++;
    }

    double max = -FLT_MAX * 2;
    i = 0;

    while (i < arraySize / 2) {
        if ((arrNumbers[i] + arrNumbers[arraySize - (i + 1)]) > max)
            max = (double)arrNumbers[i] + (double)arrNumbers[arraySize - (i + 1)];
        i++;
    }

    cout << max << "\n";
    string res;
    cin >> res;
    cout << "Should be: " << res << "\n";
    int second = cin.get();
    cout << "-----------------------------------------\n";
    cin.get();
}