#include<iostream>
using namespace std;
class birthday
{
    int date,month,year;
    public:
        birthday(int d,int m,int y)
        {
            date =d;
            month = m;
            year = y;
            cout<<"birthday constructor"<<endl;

        }
        ~birthday(){
            cout<<"birthday destructor"<<endl;
        }
};