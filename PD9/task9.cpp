#include <iostream>
using namespace std;
main()
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int digits[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        cout << "Enter number : ";
        cin >> digits[i];
    }
    for(i = 0 ; i<4 ; i++){
        if(digits[i]==0)
        cout<<moves[0+1];
        else if(digits[i]==1)
        cout<<moves[1+1];
        else if(digits[i]==2)
        cout<<moves[2+1];
        else if(digits[i]==3)
        cout<<moves[3+1];
        else if(digits[i]==4)
        cout<<moves[4+1];
        else if(digits[i]==5)
        cout<<moves[5+1];
        else if(digits[i]==6)
        cout<<moves[6+1];
        else if(digits[i]==7)
        cout<<moves[7+1];
        else if(digits[i]==8)
        cout<<moves[8+1];
    }
}