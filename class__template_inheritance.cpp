// // //class template inheritance 
// // #include<iostream>
// // using namespace std;
// // template<class a>
// // class one
// // {
// // 	protected:
// // 	a a11;//a11 is a data type of a
// // 	public:
// // 		void in(){
		
// // 		cout<<"data in base class";
// // 		cin>>a11;
// // 	}
// // };
// // template<class a1,class a2,class a3>
// // class two:public one<a1>
// // {
// // 	a2 a22;
// // 	a3 a33;
// // 	public:
// // 		void in1()
// // 		{
// // 			cout<<"enter the data for derived";
// // 			cin>>a22>>a33;
// // 		}
// // 		void process()
// // 		{
// // 			cout<<one<a1>::a11+a22+a33;
// // 		}
// // };
// // int main(){
// // 	two<int,float,float>t1;
// // 	t1.in();
// // 	t1.in1();
// // 	t1.in1();
	
// // }
// //create a class with data member name rollno. and registration no. there is a drived class three ca marks 
// // ca1 ca2 ca3 of float type 

// #include<iostream>
// using namespace std;

// template<class T>
// class abc
// {
//     T *a;
//     int size;
//     public:
//     abc()
//     {
//         cout<<"\n enter the size of array:";
//         cin>>size;
//         a=new T[size];
//         cout<<"\n enter the array values:";
//         for(int i=0;i<size;i++)
//         cin>>a[i];
//         T sum1()
//         {
//             T sum = 0;
//             for(int i=0;i<size;i++)
//             sum=sum+a[i];
//             return sum;
//         }

//     }

// };
// int main()
// {
//     abc<int>obj1;
//     cout<<"\n sum of integer array elements are :"<<obj1.sum1();
//     abc<float>obj2;
//     cout<<"\n sum of float array elements are :"<<obj2.sum1();
//     return 0;
// }