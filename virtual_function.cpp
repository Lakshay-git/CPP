// //virtual function
// #include<iostream>
// using namespace std;
// class base
// {
//     public:
//         virtual void fun() //         {
//             cout<<"we can write any process in base here"<<endl;
//         }

// };
// class derived:public base
// {
//     public:
// //         void fun()
// //         {
// //             cout<<"we are in derived levell"<<endl;
// //         }
// // };
// // class derived1:public derived
// // {
// //     public:
// //         void fun()
// //         {
// //             cout<<"in final derived class"<<endl;
// //         }

// // };
// // int main()
// // {
// //     base *p1;
// //     p1=new base;
// //     p1->fun();
// //     p1=new derived;
// //     p1->fun();
// //     p1=new derived;
// //     p1->fun();
// // }

// // virtual destructur
// #include <iostream>
// using namespace std;
// class one
// {
// public:
//      one()
//     {
//         cout << "base class constructor " << endl;
//     }
//     virtual ~one()
//     {
//         cout << "base class destructor " << endl;
//     }
// };
// class two : public one
// {
// public:
//     two()
//     {
//         cout << "derived class constructor" << endl;
//     }
//     ~two()
//     {
//         cout << "derived class destructor" << endl;
//     }
// };
// int main()
// {
//     one *b;
//     b = new two;
//     delete b;
// }

//create a class which will have two data members one is name second is cgpa 
//cotain aclass of two data member use dynamic constructor to initialize

// #include <iostream>
// using namespace std;

// class Student {
// public:

//     Student(const std::string& name, float cgpa) : name(name), cgpa(cgpa) {}


//     void displayInfo() {
//         std::cout << "Name: " << name << ", CGPA: " << cgpa << std::endl;
//     }

// private:
//     std::string name;
//     double cgpa;
// };

// int main() {

//     Student* student1 = new Student("dharampaal", 3.8);
//     Student* student2 = new Student("veerpaal", 3.9);


//     std::cout << "Student 1 - ";
//     student1->displayInfo();
//     std::cout << "Student 2 - ";
//     student2->displayInfo();


//     delete student1;
//     delete student2;

//     return 0;
// }
//create a parent class with data members university name and strength there is a derived 
//class named as CSE which contain department name and no, of teachers and no, of students 
//second one is computer application data member no. of students  

#include <iostream>
using namespace std;

class University {
protected:
    std::string universityName;
    int strength;

public:
    University(const std::string& name, int strength) : universityName(name), strength(strength) {}

    void displayInfo() {
        std::cout << "University Name: " << universityName << ", Strength: " << strength << std::endl;
    }
};

class CSE : public University {
private:
    std::string departmentName;
    int noOfTeachers;
    int noOfStudents;

public:
    CSE(const std::string& name, int strength, const std::string& deptName, int teachers, int students)
        : University(name, strength), departmentName(deptName), noOfTeachers(teachers), noOfStudents(students) {}

    void displayInfo() {
        University::displayInfo();  // Display University's information
        std::cout << "Department Name: " << departmentName << ", Teachers: " << noOfTeachers << ", Students: " << noOfStudents << std::endl;
    }
};

class ComputerApplication : public University {
private:
    int noOfStudents;

public:
    ComputerApplication(const std::string& name, int strength, int students)
        : University(name, strength), noOfStudents(students) {}

    void displayInfo() {
        University::displayInfo();  // Display University's information
        std::cout << "Students (Computer Application): " << noOfStudents << std::endl;
    }
};

int main() {
    University u1("lovely professional University", 10000);
    CSE cse1("lovely professional University", 10000, "Computer Science", 50, 15000);
    ComputerApplication ca1("lovely professional University", 10000, 2000);

    u1.displayInfo();
    cse1.displayInfo();
    ca1.displayInfo();

    return 0;
}

