#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc;
    int balance;
    public:
    Customer(){ //  default constructor (i.e. no params) (if we remove this and just make a parameterised constructor then on creating an object without passing any params will give us an error )
        name = "Sinha";
    }
    Customer(string name, int acc, int balance){ // parameterised constructor
        this->name = name;
        this->acc = acc;
        this->balance = balance;
    }

    inline Customer(string a, int b): name(a),acc(b){ // inline constructor

    }

    Customer(Customer &B){ // if not by reference then copying will be done infinitely
        name = B.name;
        acc = B.acc;
        balance = B.balance;
    }

    void getname(){
        cout<<name<<endl;
    }
    // this pointer points to the object to differentiate between the variables passed to the constructor or the variables already existing inside the object
    // since we can create multiple constructors having different params then this concept is known as constructor overloading

    // Note:  Two constructors with the same parameters cannot be overloaded
};

int main(){
    Customer A1("Aman",123,5000);
    Customer A2;
    A1.getname(); // Aman
    A2.getname(); // Sinha

    Customer A3("Leo",456);
    A3.getname(); // Leo

    //copy constructor
    Customer A4(A1); // it is there by default (we can create it tho)
    A4.getname(); // Aman
    return 0;
}