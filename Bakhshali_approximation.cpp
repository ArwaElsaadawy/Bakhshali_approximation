// FCAI – Programming 1 – 2022 - Assignment 2
// Program Name: Bakhshali_approximation.cpp
// Program Description:Bakhshali approximation is a method of computing the square root of a number which is not a perfect square.
// Last Modification Date: 28/3/2022
// Author:  Arwa Elsaadawy
// Purpose:computing the square root of a number which is not a perfect square.
#include <iostream>
using namespace std;
void Bakhshali_approximation(double num){ double d , m, a, x , approximation;
    for (int i = 0; i*i < num; ++i) {
        x = i;
    }
    d = num - (x * x) ;
    m = d / (2 * x);
    a = x + m;
    approximation = a - (m * m) / (2 * a);
    cout << approximation;
}

int main(){ double num ;
    cout << "Enter a number to find its square root using Bakhshali approximation: ";
    cin >> num;
    Bakhshali_approximation(num);
    return 0;
}
