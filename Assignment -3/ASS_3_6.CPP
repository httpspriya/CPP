#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <process.h>
class Product{
	protected:
		int p_code;
		char *name;
	public:
	       Product(){}
	       Product(int cd,char *name){
			p_code=cd;
			strcpy(this->name,name);
		}
};
class Stock:public Product{
	protected:
		static long int stock;
	public:
		Stock(){
			stock=0;
		}
		Stock(int id,char *name):Product(id,name){

		}
		void update(){
			cout<<"\nCurrent stock: "<<stock;
		}
};
long int Stock::stock=0;
class Sales: virtual public Stock{
	public:
		int Qty;
		void sell_pro()
		{       if(stock==0){
				cout<<"\nInsuficient stock!!";
			}
			else{
				cout<<"how many product you want to sell:";
				cin>>Qty;
				if(Qty>stock)
					cout<<"\nInsuficient stock!!";
				else
					stock-=Qty;
			}
		}
};
class Purchase: virtual public Stock{
	public:
		int Qty;
		Purchase(int id,char *name):Stock(id,name){
			;
		}
		void purchase_pro()
		{
			cout<<"\nEnter purchase qty:";
			cin>>Qty;
			stock+=Qty;
		}
};
void main()
{
	clrscr();
	char ch;
	Stock *p_ptr;
	Purchase P(7,"Keyboard");
	Sales S;
	p_ptr=&P;
	while(1){
		cout<<"\n Press 1 -> Stock";
		cout<<"\n Press 2 -> Sell";
		cout<<"\n Press 3 -> Purchase";
		cout<<"\n Press 0 -> exit";
		cout<<"\n enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case '1':
				p_ptr->update();
				break;
			case '2':
				S.sell_pro();
				break;
			case '3':
				P.purchase_pro();
				break;
			case '0':
				exit(0);
			default:
				cout<<"\n INVALID CHOICE!";
		}
		getch();
	}
}