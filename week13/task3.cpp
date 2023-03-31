#include <iostream>
using namespace std;
string coordinate(string input);
string ship[5][5] = {
    {".", "*", ".", "*", "*"},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", ".", "*", "*", "."}};
main()
{
    for(int i= 0;i<5;i++){
        for(int j =0;j<5;j++){
            cout<<ship[i][j] << ""
        }
    }
    string input;
    cout << "Enter character: ";
    cin >> input;
    char row = input[0];
    int col = int(input[1]);

    string coor = coordinate(input);
}
string coordinate(string input)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (input == ".")
            {
                return "Splash";
            }
            if (input == "*")
            {
                return "Boom";
            }
        }
    }
}