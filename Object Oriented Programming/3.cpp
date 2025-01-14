#include<iostream>
using namespace std;

class a1{
    int a;
    int d;
};

class a2{
    int a;
    char d;
};

class a3{
    char d;
    int a;
};

class a4{
    char a;
    int b1;
    int b;
};

class a5{
    int b1;
    int b2;
    char a;
};

int main(){
    a1 b1;
    a2 b2;
    a3 b3;
    a4 b4;
    a5 b5;
    cout<<sizeof(b1)<<endl; // 8
    cout<<sizeof(b2)<<endl; // 8
    cout<<sizeof(b3)<<endl; // 8
    cout<<sizeof(b4)<<endl; // 12
    cout<<sizeof(b5)<<endl; // 12
    return 0;
}