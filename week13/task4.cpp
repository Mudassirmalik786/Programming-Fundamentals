#include <iostream>
using namespace std;
main()
{
    int sample2dArray[4][3] = {
        {0, 1, 0},
        {0, 1, 2},
        {0, 2, 0},
        {2, 1, 0}};
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sample2dArray[i][j] == sample2dArray[i][j])
            {
                count++;
            }
        }
    }
    cout << count;
}