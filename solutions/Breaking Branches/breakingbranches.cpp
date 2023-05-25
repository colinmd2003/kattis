#include <iostream>

using namespace std;

int main() {
	int stick_length;

	cin >> stick_length;

	if (stick_length % 2 == 0) {
		cout << "Alice\n1" << endl;
	}
	else {
		cout << "Bob" << endl;
	}
}