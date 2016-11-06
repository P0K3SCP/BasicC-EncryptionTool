#include <iostream>
#include <string>
using namespace std;

int main  ()
{
string m,b;
float d,e,a,j;
	b="aabcdefghijklmnopqrstuvwxyz";
	cout<< "enter your msg: ";
	getline(cin, m);
	d=m.length();
	cout << "enter the rot number";
	cin >> e;
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
}
