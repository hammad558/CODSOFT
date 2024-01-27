#include<iostream>
using namespace std;
int main(){
	int choice;
	float a,b;
	do
	{  
	  cout<<" ----------------WELLCOME TO SIMPLE CALCULATOR-----------------  "<<endl;
	  cout<<"ENTER 1 FOR ADDITION"<<endl;
	  cout<<"ENTER 2 FOR SUBTRACTION"<<endl;
	  cout<<"ENTER 3 FOR MULTIPLICATION"<<endl;
	  cout<<"ENTER 4 FOR DIVISION   "<<endl;
	  cout<<"ENTER 0 TO EXIT"<<endl;
	  cin>>choice;
	  switch(choice){
	  	case 1:
	  		cout<<"ADDITION"<<endl;
	  		cout<<"ENTER FIRST NUMBER  "<<endl;
	  	    cin>>a;
	  	    cout<<"ENTER SECOND NUMBER  "<<endl;
	  	    cin>>b;
	  	    cout<<a<<" + "<<b<<" = "<<"  "<<a+b<<endl;
	  	    break;
	  	case 2:
	  		cout<<"SUBTRACTION"<<endl;
	  		cout<<"ENTER FIRST NUMBER  "<<endl;
	  	    cin>>a;
	  	    cout<<"ENTER SECOND NUMBER  "<<endl;
	  	    cin>>b;
	  	    cout<<a<<" - "<<b<<" = "<<"  "<<a-b<<endl;
	  	    break;
	  	    
	  	case 3:
		  	cout<<"MULTIPLICATION"<<endl;
	  		cout<<"ENTER FIRST NUMBER  "<<endl;
	  	    cin>>a;
	  	    cout<<"ENTER SECOND NUMBER  "<<endl;
	  	    cin>>b;
	  	    cout<<a<<" * "<<b<<" = "<<"  "<<a*b<<endl;   
	  	    break;
		
		case 4:
		   	cout<<"DIVISON"<<endl;
	  		cout<<"ENTER FIRST NUMBER  "<<endl;
	  	    cin>>a;
	  	     do {
                   cout << "ENTER SECOND NUMBER (non-zero): ";
                   cin >> b;
                   if (b == 0) {
                     cout << "ERROR:CANNOT DIVIDE BY ZERO . PLEASE ENTER A NON ZERO SECOND NUMBER ." << endl;
                    }
                } while (b == 0);
	  	    cout<<a<<" /"<<b<<" = "<<"  "<<a/b<<endl;	   
	  	    break;
	  	default:
		  cout<<"INVALID CHOICE ! ENTER AGAIN"<<endl;    
	  }
	  
	
	  	
	}
	while(choice!=0);
	
	
	
	
	
	
}
