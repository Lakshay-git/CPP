#include<iostream>
using namespace std;

class ref1 
{
    public:
        int x;
        ref1 *srefer;
        ref1(int a):srefer(NULL),x(a){}
};

void print(ref1 *b)
{
    if(b == NULL)
    return;
    do
    {
        cout<< b->x <<endl;
    } while ((b = b->srefer));
    
}

int main()
{
    ref1 x(10), y(20), z(30);
    x.srefer = &y;
    y.srefer = &z;

    print(&x);
    return 0;

}