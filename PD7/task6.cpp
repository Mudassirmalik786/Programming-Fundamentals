#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    int patients;
    int treatedpatients = 0, untreatedpatients = 0;
    int days;
    cin >> days;
    int doctor = 7;
    for (int i = 1; i <= days; i++)
    {
        cout << "Enter number of patients for " << i << " Days";
        cin >> patients;
        if ((i % 3 == 0) && (untreatedpatients - treatedpatients > 0))
        {
            doctor = doctor + 1;
        }
        if (patients > doctor)
        {
            treatedpatients = treatedpatients + doctor;
            untreatedpatients = untreatedpatients + (patients - doctor);
        }
        else
        {
            treatedpatients = treatedpatients + patients;
        }
    }
    cout << "Treated : " << treatedpatients << endl;
    cout << "Untreated : " << untreatedpatients << endl;
}