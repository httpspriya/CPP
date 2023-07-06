#include <iostream.h>
#include <conio.h>
class Reverse{
	int no,rem;
	long rev;
	public:
		void getNo(){
			cout<<"\nEnter any no:";
			cin>>no;
		}
		Reverse(){
			rev=0;
		}
		void process(){
			while(no>0){
				rem=no%10;
				rev=(rev*10)+rem;
				no=no/10;
			}
		}
		void putRev(){
			 cout<<"\nReverse no: "<<rev;
		}
};
void main(){
	clrscr();
	Reverse r;
	r.getNo();
	r.process();
	r.putRev();
	getch();
}