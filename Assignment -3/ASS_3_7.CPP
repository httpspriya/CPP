#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <process.h>
class Media{
    protected:
	char title[20];
	float price;
    public:
        Media(char *title, float price){
	//    title=new char[20];
            strcpy (this->title,title);
            this->price=price;
        }
        virtual void display()=0;    
};
class Harddisk: public Media {
    int qty;
    char *hdd_type;
    public:
        Harddisk(char *title, float price,int qty,char *type):Media (title, price){
            hdd_type=new char[20];
            this->qty=qty;
            strcpy(hdd_type,type);
        }
        void display(){
            cout<<"\nTitle        :"<<title<<endl;
            cout<<"price        :"<<price<<endl;
            cout<<"quantity     :"<<qty<<endl;
            cout<<"type         :"<<hdd_type<<endl;
            cout<<"Total price  :"<<price*qty<<endl;
        }
};
class Pendrive: public Media {
   int qty;
    char *pendrive_type;
    public:
        Pendrive(char *title, float price,int qty,char *type):Media (title, price){
	    pendrive_type= new char[20];
	    strcpy(pendrive_type,type);
            this->qty=qty;
        }
        void display(){
            cout<<"\nTitle        :"<<title<<endl;
            cout<<"price        :"<<price<<endl;
            cout<<"quantity     :"<<qty<<endl;
	    cout<<"type         :"<<pendrive_type<<endl;
            cout<<"Total price  :"<<price*qty<<endl;
        }
};
void main(){
    clrscr();
    char choice;
    Media *b_ptr;
    while(1){
        cout<<"\nPress 0: exit \nPress 1: Harddisk\nPress 2: Pendrive \n Enter your choice:";
        cin>>choice;
        switch (choice){
	    case '0': exit(0);
            case '1': Harddisk h("xyz",22.2,4,"abc");
                      b_ptr=&h;
                      b_ptr->display();
                      break;
            case '2': Pendrive p("oyyy",77.7,1,"hoyy");
                      b_ptr=&p;
                      b_ptr->display();
                      break;           
            default:"\nInvalid choice!!";          
	}
	getch();
    }
}