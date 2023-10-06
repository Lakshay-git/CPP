// #include<iostream>
// using namespace std;

// // // class one
// {
// // //     public:
// // //         one()
// // //         {
// // //             cout<<"i am in base class constructur"<<endl;
// // //         }
// // //         ~one()
// // //         {
// // //             cout<<"i am in base class destructur"<<endl;
// // //         }
// // // };
// // // class two
// // // {
// // //     public:
// // //         two()
// // //         {
// // //             cout<<"i am in base2 class constructur"<<endl;
// // //         }
// // //         ~two()
// // //         {
// // //             cout<<"i am in base2 class destructur"<<endl;
// // //         }
// // // };
// // // class three:public two,public one
// // // {public:
// // //     three()
// // //     {
// // //         cout<<"i am in derived class constructor "<<endl;
// // //     }
// // //     ~three()
// // //     {
// // //         cout<<"i am in derived class destructor"<<endl;
// // //     }
// // // };
// // // int main()
// // // {
// // //     three dd;
// // // };

// // class base{
// //     protected:
// // int x,y;
// // base(int w, int g){
// //     x=w;
// //     y=g;
// // }
// // ~base(){
// //     cout<<"destructor of the base called "<<endl;
// // }
// // };
// // class derived: public base{
// //     protected:
// //         float n,m;
// //         public:
// //             derived(int p1,int p2,float p3,float p4):base(p1,p2){
// //                 n=p3;
// //                 m=p4;
// //             }
// //             void fun(){
// //                 cout<<"x*y*n*m";
// //             }
// //             ~derived(){
// //     cout<<"destructor of the derived called "<<endl;}
// // };
// // int main(){
// //     derived dd(1,32,33,0);
// //     dd.fun();
// // }

// //there is the base class with data member base class contain name roll no. registration no. and marks in +2 these are four
// //data member semester1 is derived class from base and have one data member tgpa1 and same for semester2 and final derived class is sem3 same for that 

#include <iostream>
#include<string>
using namespace std; 
class basestudent{
    protected:
    int roll;
    string name;
    int marks12;
    public :
    basestudent(int roll,string name,int marks12){
        this->roll=roll;
        this->name = name ;
        this ->marks12 = marks12;
        cout << "1st constructor"<<endl;
    }
    ~basestudent(){
        cout<<"Destructor called"<<endl;
    }
};
class sem1:public basestudent{
    protected:
    float tgpa1;
    public:
    sem1(int roll, string name, int marks12, float tgpa1)
        : basestudent(roll, name, marks12), tgpa1(tgpa1) {
        cout << "Sem1 constructor called" << endl;
    }

    ~sem1() {
        cout << "Sem1 destructor called" << endl;
    }
    
};
class sem2 : public sem1 {
protected:
    float tgpa2;

public:
    sem2(int roll, string name, int marks12, float tgpa1, float tgpa2)
        : sem1(roll, name, marks12, tgpa1), tgpa2(tgpa2) {
        cout << "Sem2 constructor called" << endl;
    }

    ~sem2() {
        cout << "Sem2 destructor called" << endl;
    }
};
class sem3initializer : public sem2 {
public:
    sem3initializer(int roll, string name, int marks12, float tgpa1, float tgpa2)
        : sem2(roll, name, marks12, tgpa1, tgpa2) {
        cout << "sem3initializer constructor called" << endl;
    }

    ~sem3initializer() {
        cout << "sem3initializer destructor called" << endl;
    }
};
int main(){
    sem3initializer s(123,"Shreya",97,7.89,8.9);
    return 0;
}