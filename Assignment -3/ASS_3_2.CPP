#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class Student{
	public:
		char *s_name;
		int s_roll;
		Student(){
			s_name=new char[20];
		}
		void getStu(){
			cout<<"Roll no:";
			cin>>s_roll;
			cout<<"\nName:";
			gets(s_name);
		}
};
class Test: public Student{
	public:
		int sub1,sub2;
		void getTest(){
			cout<<"Subject 1:";
			cin>>sub1;
			cout<<"Subject 2:";
			cin>>sub2;
		}
};
class Result : public Test{
	int total_marks;
	public:
		void total(){
			getStu();
			getTest();
			total_marks=sub1+sub2;
		}
		void display(){
			cout<<"\nDetails:-"<<endl;
			cout<<"=========================="<<endl;
			cout<<"\nRoll no     :"<<s_roll<<endl;
			cout<<"Name        :"<<s_name<<endl;
			cout<<"\nMarks:"<<endl;
			cout<<"------------------"<<endl;
			cout<<"Subject 1   :"<<sub1<<endl;
			cout<<"Subject 2   :"<<sub2<<endl;
			cout<<"Total       :"<<total_marks;
		}
};
void main(){
	clrscr();
	Result r;
	r.total();
	r.display();
	getch();
}