#include <iostream>
using namespace std;

int main(){
    int opp;
    float a,b,multi,div,sub,add;
    cout<<"Enter the Value for A: ";
    cin>>a;
    cout<<"Enter the Value for B: ";
    cin>>b;
    cout<<"Which Operation to Perform";
    cout<<"\n 1. Addition";
    cout<<"\n 2. Substraction";
    cout<<"\n 3. Multiplication";
    cout<<"\n 4. Division";
    cout<<"\n 5. Exit";
    cout<<"\nEnter Your Preference: ";
    cin>>opp;
    switch(opp){
        case 1:
        add=a+b;
        cout<<"\nThe Addition of "<<a<<" & "<<b<<" Is: "<<add<<"";
        break;
        case 2:
        if(a>b){
            sub=a-b;
            cout<<"\nThe Substraction of "<<a<<"from "<<b<<" Is: "<<sub<<"";
        }
        else{
            sub=b-a;
            cout<<"\nThe Substraction of "<<b<<" from "<<a<<" Is: "<<sub<<"";
        }
        break;
        case 3:
        multi=a*b;
        cout<<"\nThe Multiplication of "<<a<<" & "<<b<<" Is: "<<multi<<"";
        break;
        case 4:
        div=a/b;
        cout<<"\nThe Division of "<<a<<" & "<<b<<" Is: "<<div<<"";
        break;
        case 5:
        cout<<"\nThankyou For Using the Calculator, Hope To See You Soon!!!";
        default:
        cout<<"\nEnter From The Given Options";
    }
    return 0;
}