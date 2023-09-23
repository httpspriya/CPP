#include <iostream.h>
#include <conio.h>
class Time{
  int hours;
  long int min,sec;
  public:
	void getData(){
		cout<<"\nEnter values:";
		cout<<"\nHours:";
		cin>>hours;
		cout<<"Minutes:";
		cin>>min;
		cout<<"Seconds:";
		cin>>sec;
	}
	Time operator +(Time t){
		Time ans;
		ans.hours=0;
		if((ans.sec=sec+t.sec)>=60){
			ans.min=ans.sec/60;
			ans.sec%=60;
		}
		if((ans.min+=(min+t.min))>=60){
			ans.hours=ans.min/60;
			ans.min%=60;
		}
		ans.hours+=(hours+t.hours);
		return ans;
	}
	void putData(){
		cout<<"Hours    :"<<hours<<endl;
		cout<<"Minutes  :"<<min<<endl;
		cout<<"Seconds  :"<<sec<<endl;
	}
};
void main(){
	clrscr();
	Time t1,t2,t3;
	t1.getData();
	t2.getData();
	cout<<"\nData of object 1:"<<endl;
	t1.putData();
	cout<<"\nData of object 2:"<<endl;
	t2.putData();
	t3=t1+t2;
	cout<<"\nData of after addition of object 1 and 2:"<<endl;
	t3.putData();
	getch();
}
