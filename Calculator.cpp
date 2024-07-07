#include<iostream>
using namespace std;
int main(){
    float a;
    float b;
    cout<<"Enter 1st number ="<<" ";
    cin>>a;
    cout<<"Enter 2nd number ="<<" ";
    cin>>b;
    char op;
    cout<<"A : Addittion"<<endl;
    cout<<"B : Subtraction"<<endl;
    cout<<"C : Muktiplication"<<endl;
    cout<<"D:  Division"<<endl;
    cout<<"Choose the operation which you want to perform (A/B/C/D)"<<endl;
    cin>>op;
    switch(op){
        case 'A': cout<<"Addition of"<<" "<<a<<" "<<"and"<<" "<<b<<" "<<"is :"<<" ";
        cout<<(a+b)<<endl;
        break;
        case 'B': cout<<"Subtraction of"<<" "<<a<<" "<<"and"<<" "<<b<<" "<<"is :"<<" ";
        cout<<(a-b)<<endl;
        break;
        case 'C': cout<<"Multiplication of"<<" "<<a<<" "<<"and"<<" "<<b<<" "<<"is :"<<" ";
        cout<<(a*b)<<endl;
        break;
        case 'D': cout<<"Division of"<<" "<<a<<" "<<"and"<<" "<<b<<" "<<"is :"<<" ";
        cout<<(a/b)<<endl;
        default:cout<<"Plz enter valid operation"<<endl;
    }
}