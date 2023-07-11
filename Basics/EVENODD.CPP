#include <iostream.h>
#include <conio.h>
class EvenOdd{
	int no,rem,mult,sum;
	public:
		void get(){
			cout<<"\nEnter any number:";
			cin>>no;
		}
		EvenOdd(){
			sum=0,mult=1;
		}
		void process();
		void put(){
			cout<<"\nSum of odd digits:"<<sum;
			cout<<"\nMultiplication of even digits:"<<mult;
		}
};
void EvenOdd :: process(){
	while(no>0){
		rem=no%10;
		rem%2==0 ? (mult*=rem) : (sum+=rem);
		no=no/10;
	}
}
void main(){
	clrscr();
	EvenOdd a;
	a.get();
	a.process();
	a.put();
	getch();
}