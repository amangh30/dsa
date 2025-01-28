#include<iostream>
using namespace std;

class Person{
    string name;
    int age;

    public:
        Person(){
            name = "No Name";
            age = 0;
        }

        friend ostream &operator << (ostream &output, Person &p); // stream insertion operator
        friend istream &operator >> (istream &input, Person &p); // stream extraction operator
};

ostream &operator << (ostream &output, Person &p){
    output << "Lets go" << endl;
    output <<"My name is"<<p.name<<"and my age is"<<p.age<<endl;
    return output;
}

istream &operator >> (istream &input, Person &p){
    input>>p.name>>p.age;
    return input;
}

int main(){
    Person ob;
    cin>>ob;
    cout<<ob;
    return 0;
}