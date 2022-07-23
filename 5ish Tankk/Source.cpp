
// Game - 5ish Tankk v1.0
// Ryan Brown - AKA. Sha0lin BunnE

/*
    Date Created :
    ------------
    Last Edited :
    Last Compiled :
    Last Shared :

    Coppy Owner :
    -----------

*/

// Libraries
#include "mainLibrary.h"





// Main function
int main()
{
    cout << "A CMOSS_Electronics Demo Program\t-\tDeveloper Eyes Only" << endl << endl;
    Sleep(2000);

    // initial directions
    int up = 1;
    int down = 0;
    int lt = 1;
    int rt = 0;

    // Set-up whaley
    sprites whaley;
    whaley.x = 15; whaley.y = 15;
    whaley.height = 4;
    whaley.width = 25;
    whaley.layer = 1;
    whaley.counter = 0;
    for (int a = 0; a < whaley.height; a++)
    {
        for (int b = 0; b < whaley.width; b++)
        {
            whaley.asciiMap[a][b] = whale[a][b];
        }
    }

    // show canvas
    while (1)
    {
        clearCanvas();

        // whaley movement update
        if (whaley.counter >= 10)
        {
            whaley.counter = 0;
            lt = rand() % 2;
            rt = rand() % 2;
            up = rand() % 2;
            down = rand() % 2;
        }
        whaley.counter = whaley.counter + 1;
        whaley.move(up, down, lt, rt);
        //cout << "down" << down;

        // update canvas
        for (int a = 0; a < 26; a++)
        {
            for (int b = 0; b < 84; b++)
            {
                cout << canvas[a][b];
            }
            cout << endl;
        }
        Sleep(100);
        //cout << "counter " << whaley.counter << endl;
    }


    Sleep(1000);
    system("pause");













    // Program Termination.
    cout << "\n\n\n\n\t\t * Warning ! End Of program * " << endl;
    cout << "\t\t-------------------------------" << endl;
    system("pause");
    cout << "\n\n\t\t * PROGRAM TERMINATED * " << endl;
    system("pause");
    return 0;
}


// Ryan Brown - www.cmoss-electronics.com



