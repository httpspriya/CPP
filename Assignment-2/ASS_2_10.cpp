#include<iostream>
using namespace std;

class Distance{
	int km;
	long int m;
	public:
		void getData(){
			cout<<"\nEnter following values:";
			cout<<"\nKilometer:";
			cin>>km;
			cout<<"Meter:";
			cin>>m;
		}
		void putData(){
			cout<<"\nDetails:"<<endl;
			cout<<"Kilometer   :"<<km<<endl;
			cout<<"Meter       :"<<m;
		}
        Distance operator -(Distance d){
            Distance ans;
            ans.km=km-d.km;
            ans.m=m-d.m;
            return ans;
        }
};
int main(){
	Distance d1,d2,d3;
	d1.getData();
	d2.getData();
	cout<<"\n\nData of object 1:"<<endl;
	d1.putData();
	cout<<"\n\nData of object 2:"<<endl;
	d2.putData();
	d3=d1-d2;
	cout<<"\nData of after subtraction of object 1 and 2:"<<endl;
	d3.putData();
	return 0;
}