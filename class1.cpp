// #include<iostream>
// using namespace std ;
// class student
// {
//     char name[20];
//     int rollno;
//     public:
//         float cgpa;
//         void take1();
//         void out();
// };
// void student::take1()
// {
//     cout<<"enter the private data here ";
//     cin>>name>>rollno;
// }
// void student::out()
// {
//     cout<<name<<"\n"<<rollno<<"\n"<<cgpa<<endl;
// }
// int main()
// {

//     student s1 ;
//     s1.take1();
//     cin>>s1.cgpa;//data member is public 
//     s1.out();
// }


// #include<iostream>
// using namespace std ;
// class student
// {
//     char name[20];
//     int rollno;
//     public:
//         float cgpa;
//         void take1();
//         void out();
// };
// void student::take1()
// {
//     cout<<"enter the private data here ";
//     cin>>name>>rollno;
// }
// void student::out()
// {
//     cout<<name<<"\n"<<rollno<<"\n"<<cgpa<<endl;
// }
// int main()
// {

//     student s1[4] ;//array of objects 
//     for(int i=0;i<4;i++)
//     {
//         s1[i].take1();
//         cin>>s1[i].cgpa;///data member is public 
//         s1[i].out();
//     }
// }

// #include<iostream>
// using namespace std ;
// class student
// {
//     char name[20];
//     int rollno;
//     public:
//         float cgpa;
//         void take1();
//         void out();
// };
// void student::take1()
// {
//     cout<<"enter the private data here ";
//     cin>>name>>rollno;
// }
// void student::out()
// {
//     cout<<name<<"\n"<<rollno<<"\n"<<cgpa<<endl;
// }
// int main()
// {

//     student s1[4] ;//array of objects 
//     for(int i=0;i<4;i++)
//     {
//         s1[i].take1();
//         cin>>s1[i].cgpa;///data member is public 

//     }
//     for(int i=0;i<4;i++)
//     {
//         s1[i].out();
//     }
// }
//create a class employe with data member name of thwe employe , uid, salary of float type. create 
//of object using array. display ata whose salary is highest 


#include<iostream>
using namespace std;
class employee
{
    char name[20];
    int uid;
    float salary ;


    public:
        void take1();
        void out();
        float lar();

};
void employee::take1()
{
    cout<<"enter the private data here ";
    cin>>name>>uid>>salary;
}
void employee::out()
{
    cout<<name<<"\n"<<uid<<"\n"<<salary<<endl;
}
float employee::lar(){
    return salary;
}
int main()
{

    employee e1[5] ;
    for(int i=0;i<5;i++)
    {
        e1[i].take1();


    }
    for(int i=0;i<5;i++)
    {
        e1[i].out();
    }
    float largest=e1[0].lar();//assumption
    int index=0;
    for(int i=0;i<5;i++)
    {
        if(e1[i].lar()>largest)
        largest=e1[i].lar();
index=i;
        
    }
    e1[index].out();
}