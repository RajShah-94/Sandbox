/*
 * main.cpp
 *
 *  Created on: 12 Apr 2014
 *      Author: rajru_000
 */
#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	while (b == 0) {
		cin >> a;
		b = a%2;
		if (b == 0 ) {
			cout << a << " is even" << endl;
		}
		else {
			cout << a << " is odd" << endl;
		}
	}
}
