#include<iostream>
#include<math.h>

using namespace std;
//g++ RandomNumberGame.cpp
int main()
{
    int SecretNumber,tooHigh,tooLow;
    int LowerLimit,HigherLimit;

    cout<<"Enter Lower and Higher number in which you like to guess the number :"<<endl<<endl;
    cout<<"Enter lower number: "<<endl;
    cin>>LowerLimit;
    cout<<"Enter higher number"<<endl;
    cin>>HigherLimit;
    SecretNumber=rand();
    SecretNumber=rand()%(HigherLimit-LowerLimit)+LowerLimit;
    int number;
    int guess=0;
    cout<<"Random Number Game"<<endl;
    while(number!=SecretNumber)
    {
        cout<<"Try to guess the SecretNumber :";
        cin>>number;
        if(number>SecretNumber)
        {
            cout<<"Number is too high"<<endl;
        }
        else if(number<SecretNumber)
        {
            cout<<"Number is too low"<<endl;
        }
        guess++;
        cout<<endl;
    }
    cout<<"Congrats! After "<<guess<<" guess you found random number";

    return 0;
}