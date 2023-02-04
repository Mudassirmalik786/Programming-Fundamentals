#include <iostream>
using namespace std;
main()
{
    int size, number;
    cout << "Enter size of array : ";
    cin >> size;
    int numbers[size];
    bool found = false;
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> numbers[i];
    }
    cout << "Enter another number : ";
    cin >> number;
    for(i = 0; i<=size ; i++){
    if (number == numbers[i])
    {
        found =  true;
        break;
    }
    }
    if(found == true){
        cout<<"Number entered ";
    }
    else if(found == false){
        cout << "Number not entered ";
    }
}