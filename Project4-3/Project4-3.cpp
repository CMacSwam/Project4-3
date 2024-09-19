/*
* Author: Chase McCluskey
* Date: 9/19/24
* 
* Description: Count digits in integer
*/#include <iostream>
#include <string>
using namespace std;

int main()
{
    int input;
    cout << "Please enter an integer: ";
    cin >> input;

    int count = 0;

    if (input < 0) {
        input *= -1;
    }
    if (input == 0) {
        count++;
    }
    while (input != 0) {
        count++;
        input /= 10;
    }
    cout << "The number has " << count << " digits";

}