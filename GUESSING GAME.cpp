#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    int choice,a,random;
    srand(time(0));
    do {
    	cout<<"----------------- WELCOME TO NUMBER GUESSING GAME------------------------- "<<endl;
    	cout<<"ENTER 1 TO PLAY THE GUESSING GAME  "<<endl;
    	cout<<"ENTER 0 TO EXIT  "<<endl;
    	cin>>choice;
    	random= (rand() % 100) + 1;
    	switch(choice){
		
    	case 1:
    		cout<<"GUESS THE NUMBER  "<<endl;
    		cin>>a;
    		if(random==a){
    			cout<<"CONGRATS ! YOU WON "<<endl;
			}
			else if(random>a){
				cout<<"NUMBER IS TOO HIGH !"<<endl;
			}
			else if(random<a){
				cout<<"NUMBER IS TOO LOW  !"<<endl;
			}
			break;
			
		default:
		 cout<<"INVALID CHOICE ! ENTER AGAIN "<<endl;	
		}
    		
	}
   	while(choice!=0);
    return 0;
}

