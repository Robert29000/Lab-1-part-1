//
//  main.cpp
//  LR1part1
//
//  Created by Роберт Артур Меликян on 26/09/2019.
//  Copyright © 2019 Роберт Артур Меликян. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int x1,x2,x3;
    cout << "x1=";cin >> x1;
    cout << "x2=";cin >> x2;
    cout << "x3=";cin >> x3;
    cout << "a=1" << endl;
    cout << "b=" << -(x1 + x2 + x3) << endl;
    cout << "c=" << (x1*x2 + x2*x3 + x1*x3) << endl;
    cout << "d=" << -(x1 * x2 * x3) << endl;
    return 0;
}
