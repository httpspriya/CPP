#include <iostream.h>
#include <conio.h>
class Student{
      int roll,cpp,ds,os,sad,total;
      char name[20];
      void get(){
	   cout<<"Enter roll no:";
	   cin>>roll;
	   cout<<"Enter name:";
	   cin>>name;
	   cout<<"Enter marks of cpp:";
	   cin>>cpp;
	   cout<<"Enter marks of ds:";
	   cin>>ds;
	   cout<<"Emter marks of os:";
	   cin>>os;
	   cout<<"Enter marks of sad:";
	   cin>>sad;
      }
      void process(){
	   total=cpp+ds+os+sad;
      }
      public :
	     void put(){
		   get();
		   process();
		   cout<<"Roll no:"<<roll<<endl;
		   cout<<"Name:"<<name<<endl;
		   cout<<"cpp:"<<cpp<<endl;
		   cout<<"ds:"<<ds<<endl;
		   cout<<"sad:"<<sad<<endl;
		   cout<<"total:"<<total;
	     }
};
void main(){
      clrscr();
      Student a;
      a.put();
      getch();
}