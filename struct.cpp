// //program for struct
// #include<iostream>
// using namespace std;
// struct fan 
// {
//     char nameofcomp[30];
//     float cost;
//     char color[20];

// };
// int main()
// {
//     fan f1,f2;
//     cout<<sizeof(f1)<<endl<<sizeof(f2);
//     cin>>f1.color>>f1.cost>>f1.nameofcomp;
//     cout<<f1.color<<endl<<f1.cost<<endl<<f1.nameofcomp;
//     f2=f1;
//     cout<<"struct copied ";
//     cout<<f2.color<<endl<<f2.cost<<endl<<f2.nameofcomp;

// }


// above code return 56 value because we take the value of nearest multiple of 4 in this case we take 32 not 30 


#include<iostream>
using namespace std;
union fan 
{
    char nameofcomp[30];
    float cost;
    char color[20];

};
int main()
{
    fan f1,f2;
    cout<<sizeof(f1)<<endl<<sizeof(f2);
    cin>>f1.color>>f1.cost>>f1.nameofcomp;
    cout<<f1.color<<endl<<f1.cost<<endl<<f1.nameofcomp;
    f2=f1;
    cout<<"struct copied ";
    cout<<f2.color<<endl<<f2.cost<<endl<<f2.nameofcomp;
    
}
// in case of union it return the lasgest value of storage of data member 