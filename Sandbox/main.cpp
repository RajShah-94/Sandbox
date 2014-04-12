
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
	int c;
	while ( a != 0) {
		cin >> a;
		b = a%2;

		if (a==0) {
			cout << a << " is neither even nor odd" << endl;
		}
		else if (b == 0 ) {
			cout << a << " is even" << endl;
		}
		else {
			cout << a << " is odd" << endl;
		}
	}
	cout << "Project complete! You have failed to make the next round." << endl;
}
