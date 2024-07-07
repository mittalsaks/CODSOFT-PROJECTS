//For input and output
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    //Seed the random number generator in current time
    srand((unsigned int) time(0));
    //Generate a random number in between 1 to 100
    int number=rand()%100 + 1;
    //Create a variable to store user guess
    int guess=0;
    //use while loop 
    while(guess !=number){
        cout<<" Enter guess number in between 1 to 100 ";
        cin>>guess;
        if(guess>number){
            cout<<"Guess lower !"<<endl;
        }
        else if(guess<number){
            cout<<"Guss higher !"<<endl;
        }
        else
        cout<<"You won !"<<endl;
    }

    cout<<"Game End !"<<endl;
    return 0;
}