#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age,roll;
    string grade;
};

int main(){
    Student *st = new Student;
    (*st).name = "Aman";  // (*st). == st->
    cout<<st->name<<endl;
    return 0;
}