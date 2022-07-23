#include "mainLibrary.h"


//				 Background Sprites
//				--------------------

void clearCanvas()
{
	system("CLS");

	for (int a = 0; a < 26; a++)
	{
		for (int b = 0; b < 84; b++)
		{
			canvas[a][b] = backStage[a][b];
		}
	}
}










// Ryan Brown - www.cmoss-electronics.com

