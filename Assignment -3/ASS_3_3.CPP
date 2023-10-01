#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <process.h>
class SUPPLY{
    public:
	char *city;
	long int total_sales;
	int sales_person;
	    void getData(char *p){
	    city= new char[20];
	    strcpy(city,p);
	    cout<<"\nTotal sales:";
	    cin>>total_sales;
	    sales_person=getValidSalesPerson(total_sales);
	}
	int getValidSalesPerson(long int sales){
	    int valid_s_person;
	    if(sales>20000){
		valid_s_person=2+getValidSalesPerson(sales-20000);
	    }
	    else if(sales<=20000){
		if(sales<=5000){
		     valid_s_person=0;
		}
		else if(sales<=10000){
		     valid_s_person=1;
		}
		else{
		     valid_s_person=2;
		}
	    }
	    return valid_s_person;
	}
	void display(){
	     cout<<"\n\nSales detail";
	     cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+";
	     cout<<"\nCity          :"<<city;
	     cout<<"\nTotal sales   :"<<total_sales;
	     cout<<"\nSales person  :"<<sales_person;
	}
	void salesAdd(){
		int qty;
		cout<<"\nHow much sales you want to enter?:";
		cin>>qty;
		total_sales+=qty;
		sales_person=sales_person+getValidSalesPerson(qty);
	}
	void salesMinus(){
		int qty;
		cout<<"\nHow much sales you want to remove?:";
		cin>>qty;
		total_sales-=qty;
		sales_person=sales_person-getValidSalesPerson(qty);
	}
};
class Ahemdabad :public SUPPLY
{
    public:
	 void get(){
	     cout<<"\nEnter details for Ahemdabad:";
	     getData("Ahemdabad");
	 }
	 void put(){
	     display();
	 }
};
class Jamnagar :public SUPPLY
{
    public:
 	void get(){
	     cout<<"\nEnter details for Jamnagar:";
	     getData("Jamnagar");
	 }
	 void put(){
	     display();
	 }
};
char getUserChoice(int id){
    char choice;
    if(id==1){
        cout<<"\nPress 1:- Ahemdabad\nPress 2:- Jamnagar\nWhich city ?:";
        cin>>choice;
    }
    else if(id==2){
        cout<<"\n\nPress 0: EXIT\nPress 1: Add sales\nPress 2: Remove \nPress 3: Display\nEnter your choice:";
        cin>>choice;
    }
    return choice;
}
void main(){
    clrscr();
    Ahemdabad a;
    a.get();
    Jamnagar j;
    j.get();
    char choice;
    while(1){
        choice=getUserChoice(2);
        switch (choice){
            case '0':exit(0);
            case '1':choice=getUserChoice(1);
                     switch(choice){
                         case '1':a.salesAdd(); break;
                         case '2':j.salesAdd(); break;
                         default: cout<<"\nINVALID CHOICE!!";
                     }
                     break;
            case '2':choice=getUserChoice(1);
                     switch(choice){
                         case '1':a.salesMinus(); break;
                         case '2':j.salesMinus(); break;
                         default: cout<<"\nINVALID CHOICE!!";
                     }
                     break;
            case '3':choice=getUserChoice(1);
                     switch(choice){
                         case '1':a.display(); break;
                         case '2':j.display(); break;
                         default: cout<<"\nINVALID CHOICE!!";
                     }
                     break;
            default: cout<<"\nINVALID CHOICE!!";          
	}
	getch();
    }
}