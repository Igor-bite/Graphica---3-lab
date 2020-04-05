//
//  main.cpp
//  Graphica 3 lab
//
//  Created by Игорь Клюжев on 05.04.2020.
//  Copyright © 2020 Игорь Клюжев. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

typedef unsigned char uchar;

int main(int argc, const char * argv[]) {
    if (argc < 9 || argc > 10) {
        cerr << "Incorrect count of arguments" << endl;
        return 0;
    }

    string inputFileName = argv[1];
    string outputFileName = argv[2];
    uchar color = stoi(argv[3]);
    float thickness = stof(argv[4]);
    float x0 = stof(argv[5]);
    float y0 = stof(argv[6]);
    float x1 = stof(argv[7]);
    float y1 = stof(argv[8]);
    
    float gamma = 2.2;
    bool gammaDefined = false;
    if (argc == 10) {
        gamma = stof(argv[9]);
        gammaDefined = true;
    }
    return 0;
}
