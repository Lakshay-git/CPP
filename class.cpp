//class is a user defined data type 
//class consist of data member anfd member function 

// #include<iostream>
// using namespace std;
// class data1 

// {
//     private:
//         int x,y;
//         public:
//             void in()
//             {cout<<"enter the data ";
//             cin>>x>>y;

//             }
//             void process()
//             {
//                 cout<<"result is ="<<x+y;
//             }

// };
// int main()
// {
//     data1 d1;
//     d1.in();
//     d1.process();//calling of function 

// // }

// #include<iostream>
// using namespace std;
// class data1 

// {
//     private:
//         int x,y;
//         public:
//             void in();//declare
//             void process();//declare
// };
// void data1::in()
// {cout<<"enter the data ";
// cin>>x>>y;
// }
// void data1::process()
// {
//     cout<<"result is="<<x+y;
// }
// int main()
// {
//     data1 d1;
//     d1.in();
//     d1.process();

// }

#include<iostream>
using namespace std;
class data1 

{
    private:
        int x,y;
        public:
            int z;
            void in();//declare

};
void data1::in()
{cout<<"enter the data ";
cin>>x>>y;
}
int main()
{
    data1 d1;
    d1.in();
    cout<<d1.z;//publc data acc by obj.varname

}

// data member can be in private or public protected 
// member function can never be private only public protected 


