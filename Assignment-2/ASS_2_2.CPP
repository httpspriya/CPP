#include <iostream.h>
#include <conio.h>
class logicalAnd{
  int value;
  public:
	logicalAnd(){
	 ;
	}
	logicalAnd(int a){
		value=a;
	}
	friend logicalAnd operator &&(logicalAnd a,logicalAnd b){
		logicalAnd l;
		l.value=a.value && b.value;
		return l;
	}
	void display(){
		if(value)
			cout<<"\nBoth value are non zero"<<endl;
		else
			cout<<"\nAny one or both value is zero"<<endl;
	}
};
void main(){
	clrscr();
	logicalAnd l1(45),l2(7);
	logicalAnd l3=l1&&l2;
	l3.display();
	getch();
}