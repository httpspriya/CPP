#include <iostream.h>
#include <conio.h>
class Positive_negative{
	int no;
	public:
		void get(){
			cout<<"\nEnter any no:";
			cin>>no;
		}
		void process(){
			if(no==0){
				cout<<"\n"<<no<<" is zero";
			}
			else if(no>0){
				cout<<"\n"<<no<<" is positive";
			}
			else{
				cout<<"\n"<<no<<" is negative";
			}
		}
};
void main(){
	clrscr();
	Positive_negative a;
	a.get();
	a.process();
	getch();
}