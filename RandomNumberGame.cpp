#include<iostream>
#include<math.h>

using namespace std;
//g++ RandomNumberGame.cpp
int main()
{
    int RandomNumber,tooHigh,tooLow;
    int LowerLimit,UpperLimit;

    cout<<" Lower and Higher number in which you like to guess the number "<<endl<<endl;
    cout<<"Enter Lower limit: "<<endl;
    cin>>LowerLimit;
    cout<<"Enter Upper limit"<<endl;
    cin>>UpperLimit;
    
    RandomNumber=rand()%(UpperLimit-LowerLimit)+LowerLimit;
    int number;
    int guess=0;
    cout<<"Random Number Game"<<endl;
    while(number!=RandomNumber)
    {
        cout<<"Try to guess the SecretNumber :";
        cin>>number;
        if(number>RandomNumber)
        {
            cout<<"Number is too high"<<endl;
        }
        else if(number<RandomNumber)
        {
            cout<<"Number is too low"<<endl;
        }
        guess++;
        cout<<endl;
    }
    cout<<"Congrats! After "<<guess<<" guess you found random number";

    return 0;
}
