#include <iostream>
using namespace std;
main()
{
    int matrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};
    bool count = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && matrix[i][j] != 1)
            {
                count = false;
            }
            if (i != j && matrix[i][j] != 0)
            {
                count = false;
            }
        }
    }
    if (count)
    {
        cout << "Identity matrix ";
    }
    else
    {
        cout << "Not Identity Matrix ";
    }
}