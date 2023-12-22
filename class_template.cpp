// //class template 

// #include<iostream>
// using namespace std;

// template< class a,class b, class c>
// class data
// {
//     a a1;
//     b b1;
//     c c1;
//     public:
//         void take()
//         {
//             cout<<"enter the data"<<endl;
//             cin>>a1>>b1>>c1;
//         }
//         void process()
//         {
//             cout<<"enterd data is"<<endl;
//             cout<<a1+2<<endl<<b1+2<<endl<<c1+2<<endl;
//         }
// };
// int main()
// {
//     data<int, int , char >d1
//     d1.take();
//     d1.process();
// }

//make thefunction for non inline 
#include<iostream>
using namespace std;

template<class a,class b, class c >
class data1
{
    a a1;
    b b1;
    c c1;
    public:
        void take();

        void process()
        {
            cout<<"enter data is" << endl;
            cout<<a1+2<<endl<<b1+2<<endl<<c1+2<<endl;
        }
};
template<class a,class b, class c>
void 