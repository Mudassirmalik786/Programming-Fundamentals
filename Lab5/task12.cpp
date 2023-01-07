#include<iostream>
using namespace std;
main() 
 {
   int volume,p1,p2,overflow;
   float hours,percentfull;
   cout << "enter volume of the pool. " ;
   cin >> volume;
   cout << "enter flow rate of first pipe. " ;
   cin >> p1;
   cout << "enter flow rate of second pipe. " ;
   cin >> p2;
   cout << "enter number of hours. ";
   cin >> hours;
   
   float poolwater = (p1*hours)+(p2*hours);
   
   float p1cont = ((p1*hours)/poolwater)*100;
   float p2cont = ((p2*hours)/poolwater)*100; 
   
   if(poolwater >= volume)
    {
      cout << "pool is 100% full" << endl ;
      overflow = poolwater-volume;
      cout << overflow << " liters water has been overflowed." << endl ;
    }
   if(poolwater< volume)
     {
       percentfull = (poolwater/volume)*100;
       cout << "pool is " << percentfull << "percent filled." << endl ;
     }
   
   cout << "pipe 1 has contributed " << p1cont << "percent." << endl;
   cout << "pipe 2 has contributed " << p2cont << "percent."<< endl;
}