#include <iostream.h>
#include <conio.h>
class Min{
	int no,rem,min;
	public:
		void get(){
			cout<<"\nEnter any no:";
			cin>>no;
		}
		Min(){
			rem=9;
		}
		void process();
		void put(){
			cout<<"\nMinimum digit: "<<min;
		}
};
void Min :: process(){
	while(no>0){
		rem=no%10;
		if(rem<min){
			min=rem;
		}
		no=no/10;
	}
}
void main(){
	clrscr();
	Min m;
	m.get();
	m.process();
	m.put();
	getch();
}