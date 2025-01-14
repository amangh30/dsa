#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age,roll;
    string grade;
};

// by default the members inside a class is set to private

int main(){
    Student s1;
    s1.name = "Aman";
    s1.age = 10;
    s1.roll = 21;
    s1.grade = "A+";
    cout<<s1.name<<endl;
    return 0;
}