#include <iostream>
#include <string>
using namespace std;

int main  ()
{
string m,b;
float d,e,a,j;
int run=1;
	
	do{
	
	b="aabcdefghijklmnopqrstuvwxyz";
	cout<< ">Enter your message: ";
	getline(cin, m);
	d=m.length();
	cout << "\n\n\n>Enter the rot number: ";
	cin >> e;
	cout<<"\n\n\n>This is your desired encryption: ";
	for (j=0;j<d;j++) {
		a=m.at(j);
		if(a==32){
		cout<< " ";}
		else{
		a=a-96;
		a=a+e;
		if(a>26){
			a=a-26;
		}		
		cout<< b.at (a);
	}
	}
	cout << "\n\n\n>If you wish to encrypt again, Press 1:";
		cin >> run;
	cout <<"\n";
}while(run==1);
}
