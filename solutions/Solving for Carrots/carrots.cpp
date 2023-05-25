#include <iostream>
using namespace std;

int main()
{
	int contestantsCount;
	int problemsSolved;

	cin >> contestantsCount >> problemsSolved;
	string description;

	for (int i = 0; i < contestantsCount; i++) {
		cin >> description;
	}
	
	cout << problemsSolved;
}
