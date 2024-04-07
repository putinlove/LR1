#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include <sstream>
#include <cmath>
#include <stdio.h>
#include "functions.h"

#define INPUT_FILE  "input.txt"
#define OUTPUT_FILE "output.txt"
using namespace std;

int main() {
    ifstream file_in(INPUT_FILE);
    ofstream file_out(OUTPUT_FILE);
    cin.rdbuf(file_in.rdbuf());
    cout.rdbuf(file_out.rdbuf());
    int testCount = 0;
    cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        cout << "[TEST SET] ¹" << i + 1 << "\n";
        proccess();
    }
    file_in.close();
    file_out.close();
    return 0;
}