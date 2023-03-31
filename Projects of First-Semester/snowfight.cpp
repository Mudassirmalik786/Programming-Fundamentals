/* THIS CODE IS WRITTEN BY MUHAMMAD MUDASSIR AND IT IS ABOUT SNOW FIGHT */
// -------------------------------------------------LIBRARIES INCLUDE---------------------------------------------------

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <strings.h>
#include <stdlib.h>

// -------------------------------------------------LIBRARIES INCLUDE---------------------------------------------------

using namespace std;

// ---------------------------------------------------Function Prototypes------------------------------------------------

void mainGame();
void printHeader();
int printMenu();
void printPlayer();
void erasePlayer();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printMaze();
void clearScreen();
void movePlayerRight();
void movePlayerLeft();
void movePlayerUp();
void movePlayerDown();
void generateBullet();
void moveBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int index);
void printEnemy1();
void moveEnemy1();
void reduceEnemy1Health();
void bulletCollisionWithEnemy1();
void showLives();
void checkEnemy1Health();
void eraseEnemy1();
void borderLine();
void checkMaze();
void printEnemy2();
void moveEnemy2();
void eraseEnemy2();
void bulletCollisionWithEnemy2();
void reduceEnemy2Health();
void checkEnemy2Health();
void printEnemy3();
void printEnemy4();
void keys();
void changeLives();
void eraseEnemy3();
void moveEnemy3();
void checkEnemy3Health();
void reduceEnemy3Health();
void bulletCollisionWithEnemy3();
void eraseEnemy4();
void moveEnemy4();
void checkEnemy4Health();
void reduceEnemy4Health();
void bulletCollisionWithEnemy4();
void speedEnemies();
void generateColors(int k);
void gameinFile();
void loadGameInFile();

//----------------------------------------------FUNCTION PROTOTYPES-------------------------------------------

//-------------------------------------------------- DATA STRUCTURES----------------------------------------------------

// BULLETS FOR PLAYERS

int bulletX[1000];
int bulletY[1000];
bool isBulletActive[1000];
int bulletCount = 0;
int option;

int livesCount = 3;
bool moveEnemyOne = true;
bool moveEnemyTwo = true;
bool moveEnemyThree = true;
bool moveEnemyFour = true;
int timer = 0;
int timer2 = 0;
int timer3 = 0;
int timer4 = 0;
int timer5 = 0;

int playerX = 2;
int playerY = 25;
int enemyOneX = 93;
int enemyOneY = 23;
int enemyTwoX = 92;
int enemyTwoY = 16;
int enemyThreeX = 92;
int enemyThreeY = 9;
int enemyFourX = 97;
int enemyFourY = 1;
int enemyHealthX = 130;
int enemyHealthY = 5;
int livesX = 130;
int livesY = 10;
int enemyOneHeal = 0;
int enemyTwoHeal = 0;
int enemyThreeHeal = 0;
int enemyFourHeal = 0;
bool gameRunning = true;

//----------------------------------------------------DATA STRUCTURES--------------------------------------------------

//----------------------------------------------------STARTING OF MAIN------------------------------------------------

main()
{
    generateColors(11);
    clearScreen();
    printHeader();
    int choice = printMenu();

    if (choice == 1)
    {
        clearScreen();
        printMaze();
        gotoxy(playerX, playerY);
        printPlayer();
        printEnemy1();
        printEnemy2();
        printEnemy3();
        printEnemy4();
        showLives();
        gameinFile();
        while (gameRunning)
        {
            mainGame();
        }
    }

    if (choice == 2)
    {
        keys();
    }
    if (choice == 3)
    {
        loadGameInFile();
    }

    if (choice == 4)
    {
        gameRunning = false;
    }
}

//----------------------------------------------------ENDING OF MAIN-------------------------------------------------

void mainGame()
{
    changeLives();
    if (GetAsyncKeyState(VK_RIGHT))
    {
        movePlayerRight();
    }
    if (GetAsyncKeyState(VK_LEFT))
    {
        movePlayerLeft();
    }
    if (GetAsyncKeyState(VK_UP))
    {
        movePlayerUp();
    }
    if (GetAsyncKeyState(VK_DOWN))
    {
        movePlayerDown();
    }
    if (GetAsyncKeyState(VK_SPACE))
    {
        generateBullet();
    }
    speedEnemies();
    moveBullet();
    bulletCollisionWithEnemy1();
    bulletCollisionWithEnemy2();
    bulletCollisionWithEnemy3();
    bulletCollisionWithEnemy4();
    Sleep(20);
    showLives();
    if (enemyOneHeal <= 50)
    {
        checkEnemy1Health();
    }
    if (enemyOneHeal >= 50)
    {
        checkEnemy2Health();
    }
    if (enemyTwoHeal >= 80)
    {
        checkEnemy3Health();
    }
    if (enemyThreeHeal >= 90)
    {
        checkEnemy4Health();
    }
    checkMaze();
}

void generateColors(int k)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, k);
}

int printMenu()
{
    cout << "Menu." << endl;
    cout << "|_________________|" << endl;
    cout << "1. Start" << endl;
    cout << "2. Keys" << endl;
    cout << "3. Load Game" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter Your option : ";
    cin >> option;
    return option;
}

void keys()
{
    clearScreen();
    printHeader();
    cout << endl;
    cout << "1. UP ARROW            Go up" << endl;
    cout << "2. Down ARROW          Go down" << endl;
    cout << "3. Left ARROW          Go Left" << endl;
    cout << "4. Right ARROW         Go Right" << endl;
    cout << "5. Space KEY         For Fire Use" << endl;
    cout << endl;
    cout << "        Press any Key to Continue: ";
    getch();
    clearScreen();
    printHeader();
    printMenu();
}

void printMaze()
{
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$############################################################################################################$$$$$$$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$############################################################################################################$$$$$$$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$############################################################################################################$$$$$$$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$  " << endl;
    cout << "$$                                                                                                            $    $$*  " << endl;
    cout << "$$                                                                                                            $    $$  *" << endl;
    cout << "$$                                                                                                            $    $$    *" << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      *" << endl;
    cout << "            $$                                                                                      $$ *                     * " << endl;
    cout << "         $$                                         @@                                                $$ *                 *   " << endl;
    cout << "       $$                                                                                               $$ *             *     " << endl;
    cout << "    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*         *       " << endl;
    cout << "                                                                                                               *    *          " << endl;
    cout << "                                                                                                                  *             " << endl;
    cout << "                                                                                                                              " << endl;
    cout << "                                                                                                                               " << endl;
    cout << "                                                                                                                               " << endl;
}

void printEnemy1()
{
    gotoxy(enemyOneX, enemyOneY);
    char enemy1[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char enemy2[9] = {'<', '+', '+', '+', '}', '+', '+', '}', ' '};
    char enemy3[9] = {' ', '+', '+', '+', '}', '+', '+', '+', ')'};
    char enemy4[9] = {' ', 'o', ' ', ' ', '_', ' ', ' ', 'o', ' '};
    for (int x = 0; x < 9; x++)
    {
        cout << enemy1[x];
    }
    cout << endl;
    gotoxy(enemyOneX, enemyOneY + 1);
    for (int x = 0; x < 9; x++)
    {
        cout << enemy2[x];
    }
    cout << endl;
    gotoxy(enemyOneX, enemyOneY + 2);
    for (int x = 0; x < 9; x++)
    {
        cout << enemy3[x];
    }
    cout << endl;
    gotoxy(enemyOneX, enemyOneY + 3);
    for (int x = 0; x < 9; x++)
    {
        cout << enemy4[x];
    }
}

void moveEnemy1()
{
    if (moveEnemyOne == true)
    {
        generateColors(13);
        gotoxy(enemyOneX, enemyOneY);
        char next = getCharAtxy(enemyOneX - 1, enemyOneY);
        if (next == ' ' || next == '.')
        {
            eraseEnemy1();
            enemyOneX = enemyOneX - 1;
            gotoxy(enemyOneX, enemyOneY);
            printEnemy1();
        }
        if (next == '$')
        {
            eraseEnemy1();
            enemyOneX = 93;
            enemyOneY = 23;
        }
        generateColors(11);
    }
}

void reduceEnemy1Health()
{
    enemyOneHeal = enemyOneHeal + 1;
}

void bulletCollisionWithEnemy1()
{
    char next = getCharAtxy(enemyOneX - 1, enemyOneY);
    char next1 = getCharAtxy(enemyOneX - 1, enemyOneY + 1);
    char next2 = getCharAtxy(enemyOneX - 1, enemyOneY + 2);
    char next3 = getCharAtxy(enemyOneX - 1, enemyOneY + 3);
    if (next == '.' || next1 == '.' || next2 == '.' || next3 == '.')
    {
        reduceEnemy1Health();
    }
}

void checkEnemy1Health()
{
    if (enemyOneHeal == 50)
    {
        eraseEnemy1();
        moveEnemyOne = false;
    }
}

void eraseEnemy1()
{
    gotoxy(enemyOneX, enemyOneY);
    for (int x = 0; x < 9; x++)
    {
        cout << " ";
    }
    gotoxy(enemyOneX, enemyOneY + 1);
    for (int x = 0; x < 9; x++)
    {
        cout << " ";
    }
    gotoxy(enemyOneX, enemyOneY + 2);
    for (int x = 0; x < 9; x++)
    {
        cout << " ";
    }
    gotoxy(enemyOneX, enemyOneY + 3);
    for (int x = 0; x < 9; x++)
    {
        cout << " ";
    }
}

void printEnemy2()
{
    gotoxy(enemyTwoX, enemyTwoY);
    cout << " ____ ____ ____ " << endl;
    gotoxy(enemyTwoX, enemyTwoY + 1);
    cout << "< ___{____}____>" << endl;
    gotoxy(enemyTwoX, enemyTwoY + 2);
    cout << "<----{----}---->" << endl;
    gotoxy(enemyTwoX, enemyTwoY + 3);
    cout << " o  o      o  o" << endl;
}

void moveEnemy2()
{
    if (enemyOneHeal >= 50)
    {
        if (moveEnemyTwo == true)
        {
            generateColors(13);
            gotoxy(enemyTwoX, enemyTwoY);
            char next = getCharAtxy(enemyTwoX - 1, enemyTwoY);
            if (next == ' ' || next == '.')
            {
                eraseEnemy2();
                enemyTwoX = enemyTwoX - 1;
                gotoxy(enemyTwoX, enemyTwoY);
                printEnemy2();
                Sleep(70);
            }
            if (next == '$')
            {
                eraseEnemy2();
                enemyTwoX = 92;
                enemyTwoY = 16;
            }
            generateColors(11);
        }
    }
}

void bulletCollisionWithEnemy2()
{
    char next = getCharAtxy(enemyTwoX - 1, enemyTwoY);
    char next1 = getCharAtxy(enemyTwoX - 1, enemyTwoY + 1);
    char next2 = getCharAtxy(enemyTwoX - 1, enemyTwoY + 2);
    char next3 = getCharAtxy(enemyTwoX - 1, enemyTwoY + 3);
    if (next == '.' || next1 == '.' || next2 == '.' || next3 == '.')
    {
        reduceEnemy2Health();
    }
}

void checkEnemy2Health()
{
    if (enemyTwoHeal == 70)
    {
        eraseEnemy2();
        moveEnemyTwo = false;
    }
}

void reduceEnemy2Health()
{
    enemyTwoHeal++;
}

void eraseEnemy2()
{
    gotoxy(enemyTwoX, enemyTwoY);
    for (int x = 0; x < 17; x++)
    {
        cout << " ";
    }
    gotoxy(enemyTwoX, enemyTwoY + 1);
    for (int x = 0; x < 17; x++)
    {
        cout << " ";
    }
    gotoxy(enemyTwoX, enemyTwoY + 2);
    for (int x = 0; x < 17; x++)
    {
        cout << " ";
    }
    gotoxy(enemyTwoX, enemyTwoY + 3);
    for (int x = 0; x < 17; x++)
    {
        cout << " ";
    }
}

void speedEnemies()
{
    if (timer == 10)
    {
        moveEnemy1();
        timer = 0;
    }
    if (timer2 == 6)
    {
        moveEnemy2();
        timer2 = 0;
    }
    if (timer3 == 5)
    {
        moveEnemy3();
        timer3 = 0;
    }
    if (timer4 == 4)
    {
        moveEnemy4();
        timer4 = 0;
    }
    timer++;
    timer2++;
    timer3++;
    timer4++;
}

void printEnemy3()
{
    gotoxy(enemyThreeX, enemyThreeY);
    cout << "      ---------- " << endl;
    gotoxy(enemyThreeX, enemyThreeY + 1);
    cout << "<~~~~(**********)" << endl;
    gotoxy(enemyThreeX, enemyThreeY + 2);
    cout << "     (|(o)___(o))" << endl;
    gotoxy(enemyThreeX, enemyThreeY + 3);
    cout << "      +++++++++  " << endl;
}

void moveEnemy3()
{
    if (enemyTwoHeal >= 70)
    {
        if (moveEnemyThree == true)
        {
            generateColors(13);
            gotoxy(enemyThreeX, enemyThreeY);
            char next = getCharAtxy(enemyThreeX - 1, enemyThreeY);
            if (next == ' ' || next == '.')
            {
                eraseEnemy3();
                enemyThreeX = enemyThreeX - 1;
                gotoxy(enemyThreeX, enemyThreeY);
                printEnemy3();
                Sleep(70);
            }
            if (next == '$')
            {
                eraseEnemy3();
                enemyThreeX = 92;
                enemyThreeY = 9;
            }
            generateColors(11);
        }
    }
}

void checkEnemy3Health()
{
    if (enemyThreeHeal == 80)
    {
        eraseEnemy3();
        moveEnemyThree = false;
    }
}

void reduceEnemy3Health()
{
    enemyThreeHeal++;
}

void bulletCollisionWithEnemy3()
{
    char next = getCharAtxy(enemyThreeX - 1, enemyThreeY);
    char next1 = getCharAtxy(enemyThreeX - 1, enemyThreeY + 1);
    char next2 = getCharAtxy(enemyThreeX - 1, enemyThreeY + 2);
    char next3 = getCharAtxy(enemyThreeX - 1, enemyThreeY + 3);
    if (next == '.' || next1 == '.' || next2 == '.' || next3 == '.')
    {
        reduceEnemy3Health();
    }
}

void eraseEnemy3()
{
    gotoxy(enemyThreeX, enemyThreeY);
    for (int x = 0; x < 18; x++)
    {
        cout << " ";
    }
    gotoxy(enemyThreeX, enemyThreeY + 1);
    for (int x = 0; x < 18; x++)
    {
        cout << " ";
    }
    gotoxy(enemyThreeX, enemyThreeY + 2);
    for (int x = 0; x < 18; x++)
    {
        cout << " ";
    }
    gotoxy(enemyThreeX, enemyThreeY + 3);
    for (int x = 0; x < 18; x++)
    {
        cout << " ";
    }
}

void bulletCollisionWithEnemy4()
{
    char next = getCharAtxy(enemyFourX - 1, enemyFourY);
    char next1 = getCharAtxy(enemyFourX - 1, enemyFourY + 1);
    char next2 = getCharAtxy(enemyFourX - 1, enemyFourY + 2);
    char next3 = getCharAtxy(enemyFourX - 1, enemyFourY + 3);
    if (next == '.' || next1 == '.' || next2 == '.' || next3 == '.')
    {
        reduceEnemy4Health();
    }
}

void reduceEnemy4Health()
{
    enemyFourHeal++;
}

void checkEnemy4Health()
{
    if (enemyFourHeal == 90)
    {
        eraseEnemy4();
        cout << "You won !! " << endl;
        moveEnemyFour = false;
        gameRunning = false;
    }
}

void moveEnemy4()
{
    if (enemyThreeHeal >= 80)
    {
        if (moveEnemyFour == true)
        {
            generateColors(13);
            gotoxy(enemyFourX, enemyFourY);
            char next = getCharAtxy(enemyFourX - 1, enemyFourY);
            if (next == ' ' || next == '.')
            {
                eraseEnemy4();
                enemyFourX = enemyFourX - 1;
                gotoxy(enemyFourX, enemyFourY);
                printEnemy4();
                Sleep(50);
            }
            if (next == '$')
            {
                eraseEnemy4();
                enemyFourX = 97;
                enemyFourY = 1;
            }
            generateColors(11);
        }
    }
}

void eraseEnemy4()
{
    gotoxy(enemyFourX, enemyFourY);
    for (int x = 0; x < 13; x++)
    {
        cout << " ";
    }
    gotoxy(enemyFourX, enemyFourY + 1);
    for (int x = 0; x < 13; x++)
    {
        cout << " ";
    }
    gotoxy(enemyFourX, enemyFourY + 2);
    for (int x = 0; x < 13; x++)
    {
        cout << " ";
    }
    gotoxy(enemyFourX, enemyFourY + 3);
    for (int x = 0; x < 13; x++)
    {
        cout << " ";
    }
}

void changeLives()
{
    if (livesCount >= 0)
    {
        int check = 0;
        char next = getCharAtxy(playerX, playerY);
        char next2 = getCharAtxy(playerX + 5, playerY + 1);
        char next3 = getCharAtxy(playerX + 5, playerY + 3);
        if (next != '.' && next != ' ' && next != '$')
        {
            livesCount--;
            check++;
        }
        else if (next2 != '.' && next2 != ' ' && next2 != '$')
        {
            livesCount--;
            check++;
        }
        else if (next3 != '.' && next3 != ' ' && next3 != '$')
        {
            livesCount--;
            check++;
        }
        if (livesCount < 3)
        {
            gotoxy(livesX + 17, livesY);
            cout << "   ";
            showLives();
        }
        if (livesCount > 0 && livesCount <= 3)
        {
            if (check > 0 && check <= 3)
            {
                erasePlayer();
                playerX = 2;
                playerY = 25;
                gotoxy(playerX, playerY);
                printPlayer();
                check = 0;
            }
        }
        if (livesCount == 0)
        {
            gameRunning = false;
            gotoxy(70, 20);
            cout << " ....     ..   ..  ..  ....     ...  .     .  ....  ...       " << endl;
            cout << ".        .  .  . .. .  ....    .   .  .   .   ....  .  .      " << endl;
            cout << ".  ....  ....  .    .  ....    .   .   . .    ....  . .       " << endl;
            cout << " .... .  .  .  .    .  ....     ...     .     ....  .  .      " << endl;
        }
    }
}

void printEnemy4()
{
    gotoxy(enemyFourX, enemyFourY);
    cout << "            " << endl;
    gotoxy(enemyFourX, enemyFourY + 1);
    cout << " <<()___->  " << endl;
    gotoxy(enemyFourX, enemyFourY + 2);
    cout << " <___|___>" << endl;
    gotoxy(enemyFourX, enemyFourY + 3);
    cout << "(*)     (*)" << endl;
}

void printHeader()
{
    cout << endl;
    cout << "    ||        $$$$$    $$$       $$   $$$$$   $$             $$ __  $$$$$$$$$  $$$$$$   $$$$$$    $$  $$$$  $$$$$$    ||    " << endl;
    cout << "    ||      $$     $   $$ $$     $$  $$   $$  $$             $$ __  $$           $$   $$   $$     $$  $$ $    $$      ||    " << endl;
    cout << "    ||      $$         $$   $$   $$  $$   $$  $$             $$ __  $$           $$   $$          $$  $$      $$      ||    " << endl;
    cout << "    ||        $$       $$    $$  $$  $$   $$  $$      $$     $$ __  $$$$$$       $$   $$          $$$$$$      $$      ||    " << endl;
    cout << "    ||          $$     $$     $$ $$  $$   $$  $$    $$ $$    $$ __  $$           $$   $$          $$$$$$      $$      ||    " << endl;
    cout << "    ||           $$    $$      $$$$  $$   $$  $$   $$   $$   $$ __  $$           $$   $$          $$  $$      $$      ||    " << endl;
    cout << "    ||     $     $$    $$       $$$  $$   $$  $$  $$     $$  $$ __  $$           $$   $$   $$$$   $$  $$ $    $$      ||    " << endl;
    cout << "    ||      $$$$$      $$        $$   $$$$$   $$ $$       $$ $$ __  $$         $$$$$$   $$$ $$    $$  $$$$    $$      ||    " << endl;
    cout << "                                                                                                                            " << endl;
}

void checkMaze()
{
    int check = enemyOneHeal;
    int check2 = enemyTwoHeal;
    int check3 = enemyThreeHeal;
    int checkFour = enemyFourHeal;
    // int checkFive = enemyFiveHeal;
    if (check == 50)
    {
        gotoxy(0, 21);
        borderLine();
        check++;
    }
    if (check2 == 70)
    {
        gotoxy(0, 14);
        borderLine();
        check2++;
    }
    if (check3 == 80)
    {
        gotoxy(0, 7);
        borderLine();
        check3++;
    }
    if (checkFour == 90)
    {
        checkFour++;
    }
}

void borderLine()
{
    generateColors(8);
    cout << "$$                                                                                                            $" << endl;
    generateColors(8);
}

void showLives()
{
    char live = 3;
    gotoxy(livesX, livesY);
    cout << "Lives For Player: ";
    gotoxy(livesX + 17, livesY);
    generateColors(6);
    for (int x = 0; x < livesCount; x++)
    {
        cout << live;
    }
    generateColors(6);
}

void printPlayer()
{
    char head = 1, head2 = 16, box = 219, foot = 124, armLeft = 47, armRight = 92; // 254
    char line1[5] = {' ', ' ', head, ' ', ' '};
    char line2[5] = {armLeft, box, '-', '-', '>'};
    char line3[5] = {' ', foot, foot, ' ', ' '};
    generateColors(3);
    gotoxy(playerX, playerY);
    for (int index = 0; index < 5; index++)
    {
        cout << line1[index];
    }
    cout << endl;
    gotoxy(playerX, playerY + 1);
    for (int index = 0; index < 5; index++)
    {
        cout << line2[index];
    }
    cout << endl;
    gotoxy(playerX, playerY + 2);
    for (int index = 0; index < 5; index++)
    {
        cout << line3[index];
    }
    generateColors(6);
}

void erasePlayer()
{
    gotoxy(playerX, playerY);
    for (int x = 0; x < 5; x++)
    {
        cout << " ";
    }
    gotoxy(playerX, playerY + 1);
    for (int x = 0; x < 5; x++)
    {
        cout << " ";
    }
    gotoxy(playerX, playerY + 2);
    for (int x = 0; x < 5; x++)
    {
        cout << " ";
    }
}

void movePlayerRight()
{
    char next = getCharAtxy(playerX + 5, playerY);
    if (next == ' ')
    {
        erasePlayer();
        playerX = playerX + 1;
        gotoxy(playerX, playerY);
        printPlayer();
        Sleep(100);
    }
}

void movePlayerLeft()
{
    char next = getCharAtxy(playerX - 1, playerY);
    if (next == ' ')
    {
        erasePlayer();
        playerX = playerX - 1;
        gotoxy(playerX, playerY);
        printPlayer();
        Sleep(100);
    }
}

void movePlayerUp()
{
    char next = getCharAtxy(playerX, playerY - 1);
    if (next == ' ')
    {
        erasePlayer();
        playerY = playerY - 1;
        gotoxy(playerX, playerY);
        printPlayer();
        Sleep(100);
    }
}

void movePlayerDown()
{
    char next = getCharAtxy(playerX, playerY + 3);
    if (next == ' ')
    {
        erasePlayer();
        playerY = playerY + 1;
        gotoxy(playerX, playerY);
        printPlayer();
        Sleep(100);
    }
}

void generateBullet()
{
    bulletX[bulletCount] = playerX + 5;
    bulletY[bulletCount] = playerY + 1;
    isBulletActive[bulletCount] = true;
    gotoxy(playerX + 5, playerY + 1);
    cout << ".";
    bulletCount++;
}

void moveBullet()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            char next = getCharAtxy(bulletX[x] + 1, bulletY[x]);
            if (next != ' ')
            {
                eraseBullet(bulletX[x], bulletY[x]);
                makeBulletInactive(x);
            }
            else
            {
                eraseBullet(bulletX[x], bulletY[x]);
                bulletX[x] += 1;
                printBullet(bulletX[x], bulletY[x]);
            }
        }
    }
}

void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}

void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void makeBulletInactive(int index)
{
    isBulletActive[index] = false;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void clearScreen()
{
    system("cls");
}

void gameinFile()
{
    fstream file;
    file.open("gameinfile.txt", ios::out);
    file << livesX << endl;
    file << livesY << endl;
    file << enemyOneHeal << endl;
    file << enemyTwoHeal << endl;
    file << enemyThreeHeal << endl;
    file << enemyFourHeal << endl;
    file << livesCount << endl;
    file << moveEnemyOne << endl;
    file << moveEnemyTwo << endl;
    file << moveEnemyThree << endl;
    file << moveEnemyFour << endl;
    file << playerX << endl;
    file << playerY << endl;
    file << enemyOneX << endl;
    file << enemyOneY << endl;
    file << enemyTwoX << endl;
    file << enemyTwoY << endl;
    file << enemyThreeX << endl;
    file << enemyThreeY << endl;
    file << enemyFourX << endl;
    file << enemyFourY << endl;
    file << enemyHealthX << endl;
    file << enemyHealthY << endl;
    file.close();
}

void loadGameInFile()
{
    fstream file;
    file.open("gameinfile.txt", ios::in);
    file >> enemyOneHeal;
    file >> enemyTwoHeal;
    file >> enemyThreeHeal;
    file >> enemyFourHeal;
    file >> livesCount;
    file >> moveEnemyOne;
    file >> moveEnemyTwo;
    file >> moveEnemyThree;
    file >> moveEnemyFour;
    file >> playerX;
    file >> playerY;
    file >> enemyOneX;
    file >> enemyOneY;
    file >> enemyTwoX;
    file >> enemyTwoY;
    file >> enemyThreeX;
    file >> enemyThreeY;
    file >> enemyFourX;
    file >> enemyFourY;
    file >> enemyHealthX;
    file >> enemyHealthY;
    file >> livesX;
    file >> livesY;
    file.close();
}