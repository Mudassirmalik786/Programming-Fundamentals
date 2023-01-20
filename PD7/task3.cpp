#include <iostream>
#include<windows.h>
using namespace std;
void useNested1(int rows);
void useNested2(int rows);
main()
{
    int rows;
    cout << "Enter desired number of rows : ";
    cin >> rows;
    useNested2(rows);
    useNested1(rows);
}
void useNested2(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << " ";
        }
        for(int k = 1 ; k<=i ; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void useNested1(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for(int k = rows ; k>=i ; k--){
            cout<<"*";
        }
        cout << endl;
    }
}