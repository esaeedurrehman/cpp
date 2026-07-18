#include<iostream>
using namespace std;


typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;


union money
{
    int rice;//4
    char car;//c
    float pounds;//4
};


int main(){
    // enum Meal{ breakfast,launch,dinner};
    // Meal m1 = launch;
    // cout<< m1;
    // cout<<breakfast<<endl;
    // cout<<launch<<endl;
    // cout<<dinner<<endl;

    
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout << m1.car;

    // ep harry;
    // struct employee subham;
    // struct employee rohandas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<" The value is " <<harry.eId<<endl;
    // cout<<" The value is " <<harry.favChar<<endl;
    // cout<<" The value is " <<harry.salary<<endl;
    return 0;
}

