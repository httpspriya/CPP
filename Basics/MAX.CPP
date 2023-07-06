#include <iostream.h>
#include <conio.h>
class Max{
	int a,b,c;
	public :
		void get(){
			cout<<"Enter no 1:";
			cin>>a;
			cout<<"Enter no 2:";
			cin>>b;
			cout<<"Enter no 3:";
			cin>>c;
		}
		int process(){
			if(a>b && a>c){
				return a;
			}
			else if(b>a && b>c){
				return b;
			}
			else{
				return c;
			}
		}
		void put(){
			cout<<"\nMaximum value is: "<<process();
		}
};
void main(){
	clrscr();
	Max m;
	m.get();
	m.put();
	getch();
}