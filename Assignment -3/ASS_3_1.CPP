#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <process.h>
class Matches
{
	public:
		int no_of_matches;
		char *player_name;
		Matches(){
			player_name=new char[20];
		}
		void getData(){
			cout<<"\nEnter player name:";
			gets(player_name);
			cout<<"\nEnter no of matches:";
			cin>>no_of_matches;
		}
		void putData(){
			cout<<"\nName    :"<<player_name<<endl;
			cout<<"matches   :"<<no_of_matches<<endl;
		}
};
class Test : public Matches
{
	int run;
	float average;
	public:
		void get(){
			getData();
			cout<<"\nEnter runs:";
			cin>>run;
			average=(float)run/no_of_matches;
		}
		void display(){
			cout<<"\nDetails of player"<<endl;
			cout<<"\n-------------------------"<<endl;
			putData();
			cout<<"Run       :"<<run<<endl;
			cout<<"Average   :"<<average<<endl;
			cout<<"\n-------------------------"<<endl;
		}
};
class One_day : public Matches
{
	int run;
	float average;
	public:
		void get(){
			getData();
			cout<<"\nEnter runs:";
			cin>>run;
			average=(float)run/no_of_matches;
		}
		void display(){
			cout<<"\nDetails of player"<<endl;
			cout<<"\n-------------------------"<<endl;
			putData();
			cout<<"Run       :"<<run<<endl;
			cout<<"Average   :"<<average<<endl;
			cout<<"\n-------------------------"<<endl;
		}
};
class T20 : public Matches
{
	int run;
	float average;
	public:
		void get(){
			getData();
			cout<<"\nEnter runs:";
			cin>>run;
			average=(float)run/no_of_matches;
		}
		void display(){
			cout<<"\nDetails of player"<<endl;
			cout<<"\n-------------------------"<<endl;
			putData();
			cout<<"Run       :"<<run<<endl;
			cout<<"Average   :"<<average<<endl;
			cout<<"\n-------------------------"<<endl;
		}
};
void main(){
	clrscr();
	char ch;
	do{
		cout<<"\nPress 0 :-Exit\nPress 1 :- to find average of test\nPress 2 :- to find average of One day\nPress 3 :- to find average of T20\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case '0':exit(0);
			case '1':Test t;
				 t.get();
				 t.display();
				 break;
			case '2':One_day o;
				 o.get();
				 o.display();
				 break;
			case '3':T20 t1;
				 t1.get();
				 t1.display();
				 break;
			default: cout<<"\nINVALID CHOICE!!";
		}
		getch();
	}while(1);
}
