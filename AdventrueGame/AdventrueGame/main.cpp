#include <iostream>
#include <string>

using namespace std;


int main()
{

	int playerY = 0;
	bool playing = true;
	bool inForest = false;
	char playerInput;

	cout << "You are on the plains, to the North you see a forest, to the East, West, and South you see Plains.  What do you do?" << endl;
	cout << "Use N, S, E, W to move";

	while (playing)
	{

		cin >> playerInput;

		switch (playerInput) {
		case 'N':
			playerY++;
			if (playerY > 0)
			{
				inForest == true;
				cout << "You walk through a dark and gloomy forest." << endl;
			}
			else
			{
				inForest == false;
				cout << "You walk through the sunny plains, it is a beautiful day." << endl;
			}
			break;

		}

	}


}

