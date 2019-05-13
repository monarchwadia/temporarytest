#include <iostream>
#include <string>

using namespace std;


int main()
{

	int playerY = 0;
	bool playing = true;
	bool inForest = false;
	char playerInput;

	string forestText = "You walk through a dark and gloomy forest.";
	string plainsText = "You walk through the sunny plains, it is a beautiful day.";

	cout << "You are on the plains, to the North you see a forest, to the East, West, and South you see Plains.  What do you do?" << endl;
	cout << "Use N, S, E, W to move" << endl;

	while (playing)
	{

		cin >> playerInput;

		switch (playerInput) {
		case 'N':
			playerY++;
			break;
		case 'S':
			playerY--;
			break;
		case 'E':
			break;
		case 'W':
			break;
		}
		if (playerY > 0)
		{
			cout << forestText << endl;
		}
		else
		{
			cout << plainsText << endl;
		}
	}


}

