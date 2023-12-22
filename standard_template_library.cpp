// //standard template library 
// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {

// vector<float>v1;
// v1.push_back(34);
// v1.push_back(99);
// v1.push_back(100);
// v1.push_back(9);
// v1.push_back(340);
// v1.push_back(990);
// int s1=v1.size();
// cout<<s1<<endl;//6
// v1.pop_back();
// v1.pop_back();
// v1.pop_back();
// v1.clear();
// cout<<"new size is : \n";
// cout<<v1.size();
// cout<<"enterd data is\n";
// for(vector<float>::iterator n1=v1.begin();n1!=v1.end();n1++)
// {
//     cout<<*n1<<endl;
// }


// }

//program example list 
// #include<iostream>
// #include<list>
// using namespace std;
// void display(list<int>&l)
// {
//     list<int>::iterator p;
//     for(p=l.begin();p!=l.end();p++)
//     cout<<"\n"<<*p;
// }
// int main()
// {
//     list<int> list1;
//     list<int> list2(5);
//     for(int i=0;i<3;i++)
//     list1.push_back(i);
//     cout<<"\n Displaying first list:";
//     display(list1);
//     list<int>::iterator p;
//     for(p=list2.begin();p!=list2.end();p++)
//     *p=1;
//     cout<<"\n Displaying Second list:";
//     display(list2);
//     cout<<"\n pushing element at front: ";
//     list1.push_front(100);
//     display(list1);
//     cout<<"\n poping element from front:";
//     list2.pop_front();
//     display(list2);
//     cout<<"\n sorting first list :";
//     list1.sort();
//     cout<<"sorting second list: ";
//     list2.sort();
//     display(list2);
//     cout<<"merging";
//     list1.merge(list2);
//     display(list1);
//     list1.reverse();
//     display(list1);
//     cout<<"\n Reversed merged list";


// }

//create a list with 5 characters apply sorting on it remove the first and last element 
//and then display the list 
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<char> l;
//     cout<<"enter the characters "<<endl;
//     for(int i=0;i<5;i++){
//         char ch;
//         cin>>ch;
//         l.push_back(ch);
//     }
//     l.pop_back();
//     l.pop_front();
//     list<char>::iterator p ;
//     for(p=l.begin();p!= l.end();p++){
//         cout<<"\n"<<*p;
//     }



//     }


//iterators 
// one canhave multiple iterators pointing to differnt or identical elementd=s
//in the container 


//create a list with minimum 10 elements of float type five element inserted five from front and five from back 
// i want to find third largest and third smallest element
// #include<iostream>
// #include <list>
// using namespace std;
// int main(){
// 	list<int> l;
// 	cout<<"enter the characters"<<endl;
// 	for(int i=0;i<5;i++){
	
// 	int ch;
// 	cin>>ch;
// 	l.push_front(ch);
// 	}
// 	for(int i=0;i<5;i++){
	
// 	int ch;
// 	cin>>ch;
// 	l.push_back(ch);
// 	}
	

// 	l.sort();
// 	list<int>::iterator p;
// 	int count=0;
// 	for(p=l.begin();p!=l.end();p++){
// 		count++;
// 		if(count==3 ){
		
// 		cout<<"\n third smallest"<<*p;}
// 		if(count==8 ){
		
// 		cout<<"\n third largest"<<*p;}
// 	}
// }

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
}