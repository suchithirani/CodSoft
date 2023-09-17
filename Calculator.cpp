#include<iostream>
using namespace std;
//g++ Calculator.cpp
class Calculator
{
    public:
    void Addition(int nu1,int nu2)
    {
        cout<<"Addition of two numbers is: "<<nu1+nu2<<endl;
    }
    void Subtraction(double nu1,double nu2)
    {
        cout<<"Subttraction of two numbers is: "<<nu1-nu2<<endl;
    }
    void Multiplication(double nu1,double nu2)
    {
        cout<<"Multiplication of two numbers is: "<<nu1*nu2<<endl;
    }
    void Division(double nu1,double nu2)
    {
        cout<<"Division of two numbers is: "<<nu1/nu2<<endl;
    }

};

int  main()
{
    Calculator c;
    char Operator;
    double nu1=0.0,nu2=0.0;
    cout<<"Enter which operation you like to do(+,-,*,/): ";
    cin>>Operator;
    cout<<endl;
    cout<<"Enter any two numbers: ";
    cin>>nu1>>nu2;
    cout<<endl;
    if(Operator=='+')
    {
        c.Addition(nu1,nu2);
    }
    else if(Operator=='-')
    {
        c.Subtraction(nu1,nu2);
    }
    else if(Operator=='*')
    {
        c.Multiplication(nu1,nu2);
    }
    else if(Operator=='/')
    {
        if(nu2==0)
        {
            cout<<" 0 is not possible in denominator";
        }
        else
        {
            c.Division(nu1,nu2);
        }
    }
    
    return 0;
}