#include <iostream.h>
#include <conio.h>
class Max{
	int no,max,rem;
	public:
		void get(){
			cout<<"\nEnter any no:";
			cin>>no;
		}
		void process();
		Max(){
			max=0;
		}
		void put(){
			cout<<"\nMaximum digit: "<<max;
		}
};
void Max :: process(){
	while(no>0){
		rem=no%10;
		if(rem>max){
			max=rem;
		}
		no=no/10;
	}
}
void main(){
	clrscr();
	Max m;
	m.get();
	m.process();
	m.put();
	getch();
}