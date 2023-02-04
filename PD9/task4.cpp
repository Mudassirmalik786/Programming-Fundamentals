#include <iostream>
#include <string>
using namespace std;
main()
{
    int length[3] = {23,97,37};
    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        if (length[0] <= 9 || length[1]<=9 || length[2]<=9)
        {
            if (length[i] == 7)
            {
                found = true;
                break;
            }
        }
        if (length[0] > 9 || length[1]>9 || length[2]>9)
        {
            int remainder = length[i] % 10;
            length[i] = length[i] / 10;
            if (length[i] == 7)
            {
                found = true;
                break;
            }
        }
    }
    if (found == true)
    {
        cout << "Boom!" << endl;
    }
    else
    {
        cout << "No 7 " << endl;
    }
}