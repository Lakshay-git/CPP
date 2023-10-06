#include<iostream>
using namespace std;
class third;
class second;
class first 
{
    int x;
    public:
        void in()
        {
            cout<<"enter x";
            cin>>x;
        }
        friend void process(first,second,third); //friend function declared inside 

};
class second
{
    int y;
    public:
        void in()
        {
            cout<<"enter y";
            cin>>y;
        }
        friend void process(first,second,third); //friend function declared inside 

};
class third
{
    int z;
    public:
        void in()
        {
            cout<<"enter z";
            cin>>z;
        }
        friend void process(first,second,third); //friend function declared inside 

};
void process(first f9,second s9, third m9)
{
    cout<<f9.x+s9.y+m9.z<<endl;
}
int main()
{
    first f7;
    second s7;
    third m7;
    f7.in();
    s7.in();
    m7.in();
    process(f7,s7,m7);
}
