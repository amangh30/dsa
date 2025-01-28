#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        void setNo(int a,int b){
            this->a = a;
            this->b = b;
        }
        void print(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }

        friend Complex sumComplex(Complex o1, Complex o2); // this gives access to the private data of class Complex to friend sumComplex
};

Complex sumComplex(Complex c1, Complex c2){
    Complex ans;
    ans.setNo((c1.a+c2.a),(c2.b+c2.b));
    return ans;
}

int main(){
    Complex c1,c2,sum;
    c1.setNo(1,3);
    c1.print();
    
    c2.setNo(5,6);
    c2.print();

    sum = sumComplex(c1,c2);

    sum.print();

}

