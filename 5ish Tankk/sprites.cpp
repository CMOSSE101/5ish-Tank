//#include "sprites.h"
#include "mainLibrary.h"

void sprites::flip()
{

}





// Ryan Brown - www.cmoss-electronics.com



void sprites::move(int up, int down, int left, int right)
{
	// updating co-ordinates
	x = x - left + right;
	y = y + up - down;
	//cout << x << endl;
	//cout << y << endl;
	//cout << counter << endl;


	// Collition detection
	if (x >= 81)
	{
		x = x - 2;
		counter = 10;
	}
	if (x == 3)
	{
		x = x + 2;
		counter = 10;
	}
	if (y >= 23)
	{
		y = y - 2;
		counter = 10;
	}
	if (y == 3)
	{
		y = y + 2;
		counter = 10;
	}

	// updating layer movement.
	for (int a = 0; a < height; a++)
	{
		for (int b = 0; b < width; b++)
		{
			switch (layer)
			{
			case 1: 
				canvas[y - a][x + b] = asciiMap[(height - 1) - a][b];
				break;
			case 2:
				layerB[y - a][x + b] = asciiMap[(height - 1) - a][b];
				break;
			case 3:
				layerC[y - a][x + b] = asciiMap[(height - 1) - a][b];
				break;
			case 4:
				layerD[y - a][x + b] = asciiMap[(height - 1) - a][b];
				break;
			}
		}
	}
}
