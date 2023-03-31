#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};

void displayWorld();
void setGravityStatus(bool value);
void timeTick(int times);
void generateColors(int k);
void header();
bool gravity = false;

main()
{
    system("cls");
    header();
    displayWorld();
    setGravityStatus(true);
    cout << endl;
    int times;
    cout << "Enter number at which you want to apply gravity: ";
    cin >> times;
    timeTick(times);
    cout << endl;
    cout << endl;
    displayWorld();
}
void header()
{
    generateColors(8);
    cout << "   ||       $$$$$$                                                                   ||      " << endl;
    cout << "   ||      $$        $$$$                                                            ||      " << endl;
    cout << "   ||      $$       $  $    $$$                                                      ||      " << endl;
    cout << "   ||      $$  $$$$ $ $    $   $  $$       $$                                        ||      " << endl;
    cout << "   ||       $$$$$ $ $  $   $ $ $    $     $    $$$$$$                                ||      " << endl;
    cout << "   ||               $   $  $   $     $   $        $     $$$$$$$                      ||      " << endl;
    cout << "   ||                      $   $      $ $         $        $      $$$       $$$      ||      " << endl;
    cout << "   ||                                  $          $        $         $     $         ||      " << endl;
    cout << "   ||                                             $        $          $   $          ||      " << endl;
    cout << "   ||                                          $$$$$$      $           $ $           ||      " << endl;
    cout << "   ||                                                      $            $            ||      " << endl;
    cout << "   ||                                                                   $            ||      " << endl;
    cout << "   ||                                                                   $            ||      " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

void displayWorld()
{
    generateColors(9);
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << objects[row][col];
            cout << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void setGravityStatus(bool value)
{
    gravity = value;
}

void timeTick(int times)
{
    int count = 0;
    if (gravity)
    {
        generateColors(1);
        while (count < times)
        {
            for (int row = 3; row >= 0; row--)
            {
                for (int col = 0; col < 5; col++)
                {
                    if (objects[row][col] == '#')
                    {
                        if (objects[row + 1][col] == '-')
                        {
                            objects[row + 1][col] = '#';
                            objects[row][col] = '-';
                        }
                    }
                }
            }
            count = count + 1;
        }
    }
}

void generateColors(int k)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, k);
}
