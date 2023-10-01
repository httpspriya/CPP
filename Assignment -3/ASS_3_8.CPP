#include <iostream.h>
#include <conio.h>
#include <string.h>
class vehicle {
    protected:
        char *color;
        char *vehicle_no;
    public:    
	void get(){
	    color=new char[20];
	    vehicle_no=new char[20];
	    cout<<"Colour:";
            cin>>color;
            cout<<"Vehicle no:";
            cin>>vehicle_no;
        }
};
class scooter : virtual public vehicle {
    protected:
        char *type;
	long int price;
    public:    
	void getData(){
	    type= new char[20];
            char ch;
	    cout<<"\nEnter details of vehicle"<<endl;
	    get();
            cout<<"Type:-\n\tPress 1: Bike\n\tPress 2: Moped:";
	    do{
                cout<<"\nEnter your choice:";
                cin>>ch;
                switch (ch){
                    case '1': strcpy(type,"Bike"); break;
                    case '2': strcpy(type,"Moped"); break;
                    default: cout<<"\nInvalid choice!!"<<endl;
		}
	    }while(ch!='1' && ch!='2');
            cout<<"Price:";
            cin>>price;
            cout<<"\nSuccessfully inserted..."<<endl;
        }
};
class bill :virtual public vehicle {
    protected:
        float tax,discount;
};
class payment: public scooter, public bill{
    float additional_discount,total_amount;
    public:
	void getDiscount(){
	    if(strcmp(type,"Bike"))
		additional_discount=(price*2)/100.0;
            else
		additional_discount=(price*3)/100.0;
	}
	void process(){
	    discount=(price*7)/100.0;
	    tax=(price*4)/100.0;
	    getDiscount();
            total_amount=(price-discount-additional_discount)+tax;
        }
        void display(){
            cout<<"BILL:-"<<endl;
            cout<<"Vehical no.         :"<<vehicle_no<<endl;
            cout<<"Type                :"<<type<<endl;
            cout<<"Colour              :"<<color<<endl;
            cout<<"Price               :"<<price<<endl;
	    cout<<"Tax                 :"<<tax<<endl;
            cout<<"Discount            :"<<discount<<endl;
            cout<<"additional discount :"<<additional_discount<<endl;
	    cout<<"Total amount        :"<<total_amount<<endl;
            
        }
};

void main(){
    clrscr();
    payment p;
    p.getData();
    p.process();
    p.display();
    getch();
}