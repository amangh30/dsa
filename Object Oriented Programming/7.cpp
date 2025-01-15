#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc;
    int balance;
    static int totalcustomers; // attribute of class
    public:
    Customer(string a,int b,int c){
        name = a;
        acc = b;
        balance = c;
        totalcustomers++;
    }
    static void get(){ // static member function to directly get totalcustomers (part of class)
        cout<<totalcustomers<<endl;
    }
    void gettotal(){
        cout<<totalcustomers<<endl;
    }
};

int Customer:: totalcustomers = 0; // used to set the value to zero via scope resolution operator

int main(){
    Customer A1("Aman",1,500);
    Customer A2("Leo",2,1000);
    A1.gettotal(); // 2
    A2.gettotal(); // 2 
    Customer::get(); // 2
    return 0;
}