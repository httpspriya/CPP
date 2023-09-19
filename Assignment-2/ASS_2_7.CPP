#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
class String{
	char *str;
	public:
		String(int i){
			str=new char[20];
			cout<<"\nEnter string "<<i<<":";
			gets(str);
		}
		void diplayCmp(int cm){
			if(cm==0)
				cout<<"\nBoth strings are equal";
			else
				cout<<"\nBoth strings are not equal";
		}
		void display(){
			cout<<"\nString   :"<<str;
		}
		int operator ==(String s){
			int cmp=strcmp(str,s.str);
			return cmp;
		}
};
void main(){
	clrscr();
	String s1(1),s2(2);
	s1.display();
	s2.display();
	int cmp=s1==s2;
	s1.diplayCmp(cmp);
	getch();
}