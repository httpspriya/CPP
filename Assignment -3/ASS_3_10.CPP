#include <iostream.h>
#include <conio.h>
class first{
    protected:
        char *carName,*model;
    public:
	void getData(){
	    carName=new char[20];
	    model=new char[20];
            cout<<"\nCar name:";
            cin>>carName;
            cout<<"Model name:";
            cin>>model;
        }
        void putData(){
            cout<<"\nCar name        :"<<carName<<endl;
	    cout<<"Model name      :"<<model<<endl;
        }
};
class second: public first {
    protected:
        char *carNo,*year;
    public: 
	void getData(){
	    carNo=new char[20];
	    year=new char[20];
            cout<<"Car no:";
            cin>>carNo;
            cout<<"Year:";
            cin>>year;
        }
        void putData(){
	    cout<<"Car no          :"<<carNo<<endl;
	    cout<<"Year            :"<<year<<endl;
        }    
};
class third: public second {
    public:
        void getData(){
            cout<<"\nEnter following details:";
            first::getData();
            second::getData();
        }
        void putData(){
            first::putData();
            second::putData();
        }
        
};
void main(){
    clrscr();
    char ch;
    int no;
    third *car;
    cout<<"\nHow many cars you want to enter?:";
    cin>>no;
    car=new third[no];
    for(int i=0;i<no;i++){
	car[i].getData();
    }
    cout<<"\nDetails of cars:-";
    for(i=0;i<no;i++){
	cout<<"\nCar:-"<<i+1;
	car[i].putData();
        getch();
    }
}