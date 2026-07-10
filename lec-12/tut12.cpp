#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ---> data types which holds the address of other data types.

    int a=3;
    int* b = &a;
    // & ---> (Address of) operator 
    cout <<"The address of a is "<<&a<<endl;
    cout <<"The address of a is "<<b<<endl;

    // * ---> (value at) Derefrence operator
    cout << "The value at address b is "<<*b<<endl;

    // Pointer to pointer 
    int**c = &b;
    cout<<"The addrees of b is "<<&b<<endl;
    cout<<"The addrees of b is "<<c<<endl;
    cout<<"The value at addrees c is "<<*c<<endl;
    cout<<"The value at addrees value_at(value_at(c)) is "<<**c<<endl;
   



    return 0;       
}          