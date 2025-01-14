#include<iostream>
using namespace std;

class Student{
    string name;
    int age,roll;
    string grade;
    public:
        void set_name(string n){ // setter function
            name = n;
        }
        void getname(){ // getter function
            cout<<name<<endl;
        }
};

int main(){
    Student s1;
    s1.set_name("Aman");
    s1.getname();
    return 0;
}