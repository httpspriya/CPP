#include <iostream.h>
#include <conio.h>
class SumOfDigit{
	int no,sum;
	int process(){
	       int sum=0;
	       while (no>0){
		    sum=(no%10)+sum;
		    no=no/10;
	       }
	       return sum;
	}
	public:
	void get(){
	       cout<<"Enter any number:";
	       cin>>no;
	}

	void put(){
	       sum=process();
	       cout<<"\nSum of digit of no: "<< sum;
	}
};
void main(){
	clrscr();
	SumOfDigit s;
	s.get();
	s.put();
	getch();
}