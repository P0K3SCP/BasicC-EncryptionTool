#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>


using namespace std;

int main  ()
{
string message,crypt;
int l,rot,letra,j,Choice,seed,Run;
	
	
	
	do{
	
	cout<<"What level of encryption do you wish to perform?";
	cout<<"\n1-Fixed usergiven Rotation;";
	cout<<"\n2-Fixed Random-seed rotation(UserGiven seed);";
	cout<<"\n3-Unfixed Random Rotation.";
	cout<<"\n4-Unfixed Timegiven seed Rotation\n>";
	cin>>Choice;
	
	
	
	crypt="aabcdefghijklmnopqrstuvwxyz";
	
	switch(Choice){
		
		case 1:
			cout<< ">Enter your message: ";
			cin.ignore();
			getline(cin, message);
			l=message.length();
			cout << "\n\n\n>Enter the rot number: ";
			cin >> rot;
			cout<<"\n\n\n>This is your desired encryption: ";
	
	
	
			for (j=0;j<l;j++) {
				letra=message.at(j);
				if(letra==32){
				cout<< " ";}
				else{
				letra=letra%27;
				letra=(letra+rot)%27;
				cout<< crypt.at(letra);
	}	}
		break;
	
		case 2:
			cout<< ">Enter your message: ";
			cin.ignore();
			getline(cin, message);
			l=message.length();
			cout << "\n\n\n>Enter your seed: ";
			cin >> seed;
			srand(seed);
			rot=rand();
			cout<< "This is your generated rotation:" << rot;
			cout<<"\n\n\n>This is your desired encryption: ";
	
	
	
			for (j=0;j<l;j++) {
				letra=message.at(j);
				if(letra==32){
				cout<< " ";}
				else{
				letra=letra%27;
				letra=(letra+rot)%27;
				cout<< crypt.at(letra);
		
	}	}
		break;
		case 3:
			cout<< ">Enter your message: ";
			cin.ignore();
			getline(cin, message);
			l=message.length();
			cout << "\n\n\n>Enter your seed: ";
			cin >> seed;
			srand(seed);
			rot=rand();
			cout<< "This is your generated rotation:" << rot;
			cout<<"\n\n\n>This is your desired encryption: ";
	
	
	
			for (j=0;j<l;j++) {
				letra=message.at(j);
				if(letra==32){
				cout<< " ";}
				else{
				letra=letra%27;
				letra=(letra+(j*rot))%27;
				cout<< crypt.at(letra);
	}	}
	break;
		
		case 4:
			cout<< ">Enter your message: ";
			cin.ignore();
			getline(cin, message);
			l=message.length();
			srand((unsigned)time(NULL));
			rot=rand();
			cout<< "This is your generated rotation:" << rot;
			cout<<"\n\n\n>This is your desired encryption: ";
	
	
	
			for (j=0;j<l;j++) {
				letra=message.at(j);
				if(letra==32){
				cout<< " ";}
				else{
				letra=letra%27;
				letra=(letra+(j*rot))%27;
				cout<< crypt.at(letra);
	}	}
		break;
		
		default:
			cout<< "Your number is invalid";
			
		break;		
	}
	cout<<"\n\n\n>If you wish to restart, press 1: ";
	cin>> Run;
	cout<<"\n\n\n\n\n";
	
	
}while(Run=1);

	cout<<"TERMINATING";
}
