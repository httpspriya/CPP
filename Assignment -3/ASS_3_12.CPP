#include <iostream.h>
#include <conio.h>
#include <string.h>
class Student{
    protected:
        int roll;
	char *name;
	public:
	    Student(){
	    }
	    Student(int roll,char *name){
		 name=new char[20];
		 this->roll=roll;
		 strcpy (this->name,name);
	    }
};
class Test: public Student{
    protected:
        int cpp,os,ds,sad;
	public:
		Test(){

		}
		Test(int cpp,int os,int ds,int sad,int roll,char *name): Student(roll,name){
			this->cpp=cpp;
			this->os=os;
			this->ds=ds;
			this->sad=sad;
		}
};
class Result:public Test{
	int total;
	float per;
	public:
		Result(){

		}
		Result(int cpp,int os,int ds,int sad,int roll, char *name):Test(cpp,os,ds,sad,roll,name)
		{
			total=cpp+os+ds+sad;
			per=total/4.0;
		}
		void display(){
			cout<<"\nTotal:"<<total;
			cout<<"\nPercentage:"<<per;
		}
};
void main(){
	clrscr();
	Result r(77,77,77,77,8,"Priyanshi");
	r.display();
	getch();
}