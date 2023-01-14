#include <iostream>
using namespace std;
float lowestPrice(int n, string period);
int main()
{
    int n;
    cout << "Enter number of kilometers : ";
    cin >> n;
    string period;
    cout << "Enter period of the day : ";
    cin >> period;
    float result = lowestPrice(n, period);
    cout << result;
}
float lowestPrice(int n, string period)
{
    float taxi = 0.70 * n;
    float bus = 0.09  * n;
    float train = 0.06 * n;
    float result;
    if (period == "day")
    {
        if (taxi < bus && taxi < train)
        {
            result = taxi + 0.79;
        }
        if (bus < taxi && bus < train)
        {
            result = bus;
        }
        if (train < taxi && train < bus)
        {
            result = train;
        }
    }
    if (period == "night")
    {
        if (taxi < bus && taxi < train)
        {
            result = taxi * 0.90;
        }
        if (bus < taxi && bus < train)
        {
            result = bus;
        }
        if (train < taxi && train < bus)
        {
            result = train;
        }
    }
    return result;
}