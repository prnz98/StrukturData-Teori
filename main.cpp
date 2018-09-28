/*
 * Copyright (c) 2018
 * All rights reserved.
 * Written by nopri <lepengdados@gmail.com>, 28/09/2018
 */

/* 
 * File:   main.cpp
 * Author: nopri
 *
 * Created on September 28, 2018, 7:51 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

// function declaration
void sizeOfType();
void aritmatic();
void relationalOperators();
void logicalOperators();
void bitwiseOperators();
void assignmentOperators();
void conditionalOperators();
void operatorsPrecedence();

int main() {
    sizeOfType();
    return 0;
}

void sizeOfType() {
    //tipe data
    cout << "Size of char : " << sizeof (char)
            << " byte" << endl;
    cout << "Size of int : " << sizeof (int)
            << " bytes" << endl;
    cout << "Size of short int : " << sizeof (short int)
            << " bytes" << endl;
    cout << "Size of long int : " << sizeof (long int)
            << " bytes" << endl;
    cout << "Size of signed long int : " << sizeof (signed long int)
            << " bytes" << endl;
    cout << "Size of unsigned long int : " << sizeof (unsigned long int)
            << " bytes" << endl;
    cout << "Size of float : " << sizeof (float)
            << " bytes" << endl;
    cout << "Size of double : " << sizeof (double)
            << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof (wchar_t)
            << " bytes" << endl;
}

void aritmatic() {
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line 1 - Value of c is :" << c << endl;

    c = a - b;
    cout << "Line 2 - Value of c is  :" << c << endl;
    c = a * b;
    cout << "Line 3 - Value of c is :" << c << endl;

    c = a / b;
    cout << "Line 4 - Value of c is  :" << c << endl;

    c = a % b;
    cout << "Line 5 - Value of c is  :" << c << endl;

    c = a++;
    cout << "Line 6 - Value of c is :" << c << endl;

    c = a--;
    cout << "Line 7 - Value of c is  :" << c << endl;
}

void relationalOperators() {
    int a = 21;
    int b = 10;
    int c;

    if (a == b) {
        cout << "Line 1 - a is equal to b" << endl;
    } else {
        cout << "Line 1 - a is not equal to b" << endl;
    }

    if (a < b) {
        cout << "Line 2 - a is less than b" << endl;
    } else {
        cout << "Line 2 - a is not less than b" << endl;
    }

    if (a > b) {
        cout << "Line 3 - a is greater than b" << endl;
    } else {
        cout << "Line 3 - a is not greater than b" << endl;
    }

    /* Let's change the values of a and b */
    a = 5;
    b = 20;
    if (a <= b) {
        cout << "Line 4 - a is either less than \ or equal to  b" << endl;
    }

    if (b >= a) {
        cout << "Line 5 - b is either greater than \ or equal to b" << endl;
    }
}

void logicalOperators() {
    int a = 5;
    int b = 20;
    int c;

    if (a && b) {
        cout << "Line 1 - Condition is true" << endl;
    }

    if (a || b) {
        cout << "Line 2 - Condition is true" << endl;
    }

    /* Let's change the values of  a and b */
    a = 0;
    b = 10;

    if (a && b) {
        cout << "Line 3 - Condition is true" << endl;
    } else {
        cout << "Line 4 - Condition is not true" << endl;
    }

    if (!(a && b)) {
        cout << "Line 5 - Condition is true" << endl;
    }
}

void bitwiseOperators() {
    unsigned int a = 60; // 60 = 0011 1100  
    unsigned int b = 13; // 13 = 0000 1101
    int c = 0;

    c = a & b; // 12 = 0000 1100
    cout << "Line 1 - Value of c is : " << c << endl;

    c = a | b; // 61 = 0011 1101
    cout << "Line 2 - Value of c is: " << c << endl;

    c = a ^ b; // 49 = 0011 0001
    cout << "Line 3 - Value of c is: " << c << endl;

    c = ~a; // -61 = 1100 0011
    cout << "Line 4 - Value of c is: " << c << endl;

    c = a << 2; // 240 = 1111 0000
    cout << "Line 5 - Value of c is: " << c << endl;

    c = a >> 2; // 15 = 0000 1111
    cout << "Line 6 - Value of c is: " << c << endl;
}

void assignmentOperators() {
    int a = 21;
    int c;

    c = a;
    cout << "Line 1 - =  Operator, Value of c = : " << c << endl;

    c += a;
    cout << "Line 2 - += Operator, Value of c = : " << c << endl;

    c -= a;
    cout << "Line 3 - -= Operator, Value of c = : " << c << endl;

    c *= a;
    cout << "Line 4 - *= Operator, Value of c = : " << c << endl;

    c /= a;
    cout << "Line 5 - /= Operator, Value of c = : " << c << endl;

    c = 200;
    c %= a;
    cout << "Line 6 - %= Operator, Value of c = : " << c << endl;

    c <<= 2;
    cout << "Line 7 - <<= Operator, Value of c = : " << c << endl;

    c >>= 2;
    cout << "Line 8 - >>= Operator, Value of c = : " << c << endl;

    c &= 2;
    cout << "Line 9 - &= Operator, Value of c = : " << c << endl;

    c ^= 2;
    cout << "Line 10 - ^= Operator, Value of c = : " << c << endl;

    c |= 2;
    cout << "Line 11 - |= Operator, Value of c = : " << c << endl;

}

void conditionalOperators() {
    int x, y = 10;

    x = (y < 10) ? 30 : 40;
    cout << "value of x: " << x << endl;
}

void operatorsPrecedence() {
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c / d; // ( 30 * 15 ) / 5
    cout << "Value of (a + b) * c / d is :" << e << endl;

    e = ((a + b) * c) / d; // (30 * 15 ) / 5
    cout << "Value of ((a + b) * c) / d is  :" << e << endl;

    e = (a + b) * (c / d); // (30) * (15/5)
    cout << "Value of (a + b) * (c / d) is  :" << e << endl;

    e = a + (b * c) / d; //  20 + (150/5)
    cout << "Value of a + (b * c) / d is  :" << e << endl;
}