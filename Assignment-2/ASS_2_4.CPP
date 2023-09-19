#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
class String
{
	char *str;
	public:
		String()
		{
			str=new char[20];
		}
		void getStr()
		{
			cout<<"\nEnter String:";
			gets(str);
		}
		void display()
		{
			cout<<"\nString is   :"<<str;
		}
		friend void operator +(String a,String b)
		{
			strcat(a.str,b.str);
		}
};
void main()
{
	clrscr();
	String s1,s2;
	s1.getStr();
	s2.getStr();
	s1+s2;
	s1.display();
	s2.display();
	getch();
}