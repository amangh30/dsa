#include<iostream>
using namespace std;

class Customer{
    string name;
    int* balance;
    public:
    Customer(){

    }
    Customer(string name, int d){
        this->name = name;
        balance = new int;
        *balance = d;
    }

    ~Customer(){ // destructor (used to delete the memory dynamically allocated inside the object)
        delete balance;
    }
};

int main(){
    Customer A1("Aman",1000);

    // if a1,a2,a3 is created then constructor goes like 1,2,3 and destructor goes like 3,2,1 as objects are created in a stack which is LIFO

    Customer *A2 = new Customer; // destructor is not called 
    delete A2; // destructor is called here
}