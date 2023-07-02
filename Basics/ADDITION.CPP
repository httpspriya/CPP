#include <iostream.h>
#include <conio.h>
class Add{
     int no1,no2;
     public :
	     void input(){
		  cout<<"Enter value of no 1:";
		  cin>>no1;
		  cout<<"Enter value of no 2:";
		  cin>>no2;
	     }
	     void output(){
		  cout<<"Sum: "<<no1+no2;
	     }
};
void main(){
     Add a;
     clrscr();
     cout<<"\t\t\tAddition of two nos.\n";
     a.input();
     a.output();
     getch();
}