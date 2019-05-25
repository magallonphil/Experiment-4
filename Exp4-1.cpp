#include<iostream>
using namespace std;

int main() {
	again:
		cout<<"MENU: ";
		cout<<"\n\t1. Add";
		cout<<"\n\t2. Subtract";
		cout<<"\n\t3. Multiply";
		cout<<"\n\t4. Divide";
		cout<<"\n\t5. Modulus";
		cout<<"\n\nEnter your choice: ";
			int myChoice; cin>>myChoice;
		cout<<"\nEnter your first number: ";
			int num1; cin>>num1;
		cout<<"Enter your second number: ";
			int num2, result; cin>>num2;
	
			switch(myChoice){
				case 1: {
					result = num1 + num2;
					cout<<"Result: "<<result;
					break;
				}
				case 2: {
					result = num1 - num2;
					cout<<"Result: "<<result;
					break;
				}
				case 3: {
					result = num1 * num2;
					cout<<"Result: "<<result;
					break;
				}
				case 4: {
					result = num1 / num2;
					cout<<"Result: "<<result;
					break;
				}
				case 5: {
					result = num1 % num2;
					cout<<"Result: "<<result;
					break;
				}
			}
	cout<<"\n\nContinue? Y or N: ";
	condition:	
		char myAns; cin>>myAns;
		if(myAns == 'Y' || myAns=='y'){
			cout<<"\n\n";
			goto again;
		}
		else if(myAns == 'N' || myAns == 'n'){
			cout<<"\n-----End of Program-----";
		}
		else{
			cout<<"---INVALID!---";
			cout<<"\n\nEnter again: ";
			goto condition;
		}
}
