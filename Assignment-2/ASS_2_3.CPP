#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
class String
{
	char *str;
	public:
		String(){
			str=new char[20];
		}
		void getStr(){
			cout<<"\nEnter String:";
			gets(str);
		}
		void display(){
			cout<<"\nString is   :"<<str;
		}
		String operator+(String s){
			String s1;
			strcpy(s1.str,str);
			strcat(s1.str,s.str);
			return s1;
		}
		int operator >=(String s){
			int cmp=strcmp(str,s.str);
			return cmp;
		}
};
void main()
{
	clrscr();
	String s1,s2;
	s1.getStr();
	s2.getStr();
	String s3=s1+s2;
	s1.display();
	s2.display();
	s3.display();
	int cmp=s1>=s2;
	if(cmp==0)
		cout<<"\nBoth strings are equal";
	else if(cmp<0)
		cout<<"\nString 2 is greater";
	else
		cout<<"\nString 1 is greater";
	getch();
}