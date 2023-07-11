#include <iostream.h>
#include <conio.h>
class Palin{
	int no,original,rev;
	public:
		void get(){
			cout<<"\nEnter any number:";
			cin>>no;
			original=no;
		}
		Palin(){
			rev=0;
		}
		void process();
		void put(){
			if(original==rev){
				cout<<"\n"<<original<<" is Palindrom";
			}
			else{
				cout<<"\n"<<original<<" is not Palindrom";
			}
		}
};
void Palin :: process(){
	while(no>0){
		rev=(rev*10)+(no%10);
		no=no/10;
	}
}
void main(){
	clrscr();
	Palin p;
	p.get();
	p.process();
	p.put();
	getch();
}