#include<iostream>
using namespace std;
void printmenu(){
cout<<" *********************************************** "<<endl;
cout<<" *** University Admission Management System **** "<<endl;
cout<<" *********************************************** "<<endl;
}
void calculateAggregate(float matricMarksStd1,float matricMarksStd2,float interMarksStd1,float interMarksStd2,float ecatMarksStd1,float ecatMarksStd2);
void compareMarks(string name1,string name2,float ecatMarksStd1 , float ecatMarksStd2){
if(ecatMarksStd1>ecatMarksStd2){
   cout<<name1<<" will get the 1st roll no.";
    }
if(ecatMarksStd1<ecatMarksStd2){
   cout<<name2<<" will get the 1st roll no.";
    }
}
int main(){
printmenu();
float matricMarksStd1,matricMarksStd2,interMarksStd1,interMarksStd2,ecatMarksStd1,ecatMarksStd2;
string name1,name2;
cout<<"Enter name of 1st Student : ";
cin>>name1;
cout<<"Enter name of 2nd student : ";
cin>>name2;
cout<<"Enter matric marks of 1st student : ";
cin>>matricMarksStd1;
cout<<"Enter matric marks of 2nd student : ";
cin>>matricMarksStd2;
cout<<"Enter inter marks of 1st student : ";
cin>>interMarksStd1;
cout<<"Enter inter marks of 2nd student : ";
cin>>interMarksStd2;
cout<<"Enter ecat marks of 1st student : ";
cin>>ecatMarksStd1;
cout<<"Enter ecat marks of 2nd student : ";
cin>>ecatMarksStd2;
calculateAggregate(matricMarksStd1,matricMarksStd1,interMarksStd1,interMarksStd2,ecatMarksStd1,ecatMarksStd2);
compareMarks(name1,name2,ecatMarksStd1 , ecatMarksStd2);
}
void calculateAggregate(float matricMarksStd1,float matricMarksStd2,float interMarksStd1,float interMarksStd2,float ecatMarksStd1,float ecatMarksStd2){
float matric1,matric2,inter1,inter2,ecat1,ecat2;
matric1 = (matricMarksStd1 * 30) / 1100;
inter1 = (interMarksStd1 * 30) / 550;
ecat1 = (ecatMarksStd1 * 40) / 400;
float aggregate1 = matric1 + inter1 + ecat1;
cout<<"Aggregate of 1st student is : "<<aggregate1<<endl;

matric2 = (matricMarksStd2 * 30) / 1100;
inter2 = (interMarksStd2 * 30) / 550;
ecat2 = (ecatMarksStd2 * 40) / 400;
float aggregate2 = matric2 + inter2 + ecat2;
cout<<"Aggregate of 2nd student is : "<<aggregate2<<endl;
} 