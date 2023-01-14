#include <iostream>
using namespace std;
#include <conio.h>

int findLocation(int height, int xcoordinate, int ycoordinate);

int main()
{

    int height, xcoordinate, ycoordinate;
    cout << "enter height: ";
    cin >> height;

    cout << "enter x cordinate: ";
    cin >> xcoordinate;

    cout << "enter y cordinate: ";
    cin >> ycoordinate;

    findLocation(height, xcoordinate, ycoordinate);

    getch();
}

int findLocation(int height, int xcoordinate, int ycoordinate)
{
    int x_boundary, y_boundary;
    int base = height * 3;
    int roof = height * 4;

    if (xcoordinate == ycoordinate && ycoordinate == height)
    {
        cout << "Border";
        return 0;
    }
    if ((xcoordinate > base || ycoordinate > roof) || (xcoordinate < 0 || ycoordinate < 0))
    {
        cout << "Outside ";
        return 0;
    }

    if (ycoordinate == 0 || ycoordinate == height)
    {
        if (xcoordinate >= 0 && xcoordinate <= base)
        {
            cout << "border ";
            return 0;
        }
    }
    if ((xcoordinate == height) || (xcoordinate == height * 2))
    {
        if (ycoordinate >= height && ycoordinate <= roof)
        {
            cout << "border ";
            return 0;
        }
    }
    if ((xcoordinate == 0 || xcoordinate == base) && (ycoordinate <= height && ycoordinate >= 0))
    {
        cout << "border ";
        return 0;
    }

    if (xcoordinate % height == 0 && ycoordinate % height == 0)
    {
        if (xcoordinate == 0)
        {
            if (ycoordinate <= height)
            {
                cout << "Border";
                return 0;
            }
        }
        else if (ycoordinate == 0)
        {
            if (xcoordinate <= base)
            {
                cout << "Border";
                return 0;
            }
        }
        // else if (x>= height &&  x<= height * 2 && y>= height && y< height )
        // {
        //     /* code */
        // }

        // cout << "Border";
        // return 0;
    }

    if (ycoordinate < (height))
    {
        if (xcoordinate < base)
        {
            cout << "inside";
            return 0;
        }
    }
    if (xcoordinate > (height) && xcoordinate < (height * 2))
    {
        if (ycoordinate > height && ycoordinate < roof)
        {
            cout << "inside";
            return 0;
        }
    }
    cout << "outside";
    return 0;
}