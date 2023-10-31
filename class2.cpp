// create a class which take single integer from user that number is a integer either number can be
// two possibilietes prime or not prime if no. is not prime write all factors
// if prime then not any factor prime number

// #include <iostream>
// using namespace std;

// class data1
// {
// public:
//     int x;
//     void in()
//     {
//         cout << "enter the no. to check factors" << endl;

//         cin >> x;
//     }
//     void check()
//     {
//         int y;
//         try
//         {
//             for (int i = 0; i < x; i++)
//             {
//                 if (x % i == 0)
//                 {
//                     cout << i << " ";
//                 }
//                 // else
//                 // {
//                 //     throw y;
//                 // }99
//             }
//         }
//         catch (int)
//         {
//             cout << "no. is  prime " << '\n';
//         }
//     }
// };
// int main()
// {
//     data1 d;
//     d.in();
//     d.check();
// }
   


// #include<iostream>
// using namespace std;
// int main()
// {char name;
//     try
//     {
//         cout<<"enter the char";
//         cin>>name;
//         if(name>=65&&name<=90)
//         cout<<"upper case valid char"<<name;
//         else if(name>=97&&name<=122)
//         cout<<"lower case avlid char"<<name;
//         else
//         throw(name);
//     }
//     catch(...)
//     {
//         cout<<"not a valid char";
//     }
// };



#include<iostream>
using namespace std;

class error 
{
    int err_code;
    char *err_desc;
    public:
    error(int c,char *d)
    {
        err_code=c;
        err_desc=new char[strlen(d)];
        strcpy(err_desc,d);
    }
    void err_display(void)
    {
        cout<<"error code:"<<err_code<<"error description:"<<err_desc;
    }
};

int main()
{
    try
    {
        cout<<"press any key:";
        getchar();
        throw error(99,"test exception");
    }
    catch(error e)
    {
        cout<<"exception caught successfully";
        e.err_display();
    }
    getchar();
    return 0;
    
}
