#include<iostream.h>
#include<conio.h>
#include<process.h>
class Game {
    public:
	virtual void getPoint()=0;
	virtual void displayPoint()=0;
};
class Badminton: public Game{
    int points;
    public:
	Badminton (){
	    points=0;
	}
        void getPoint(){
            cout<<"\nEnter points:";
	    cin>>points;
	    cout<<"\nEntered sucessfully...";
        }
        void displayPoint(){
	    cout<<"\nPoints of Badminton:"<<points<<endl;
        }
};
class Vollyball: public Game{
    int points;
    public:
	Vollyball (){
	    points=0;
	}
        void getPoint(){
            cout<<"\nEnter points:";
	    cin>>points;
	    cout<<"\nEntered sucessfully...";
        }
        void displayPoint(){
            cout<<"\nPoints of Vollyball:"<<points<<endl;
        }
};
class Cricket: public Game{
    int points;
    public:
	Cricket (){
	    points=0;
	}
        void getPoint(){
            cout<<"\nEnter points:";
	    cin>>points;
	    cout<<"\nEntered sucessfully...";
        }
        void displayPoint(){
            cout<<"\nPoints of Cricket:"<<points<<endl;
        }
};
char userChoice(){
    char ch;
    cout<<"\nPress 1: Enter points \nPress 2: Display points\nEnter your choice:";
    cin>>ch;
    return ch;
}
void main(){
    clrscr();
    char ch;
    Game *b_ptr;
    Badminton b;
    Vollyball v;
    Cricket c;
    while(1){
	cout<<"\nPress 0: Exit\nPress 1: Badminton\nPress 2: Vollyball\nPress 3: Cricket\nEnter your choice:";
        cin>>ch;
        switch (ch){
            case '0': exit(0);
            case '1': b_ptr=&b;
                      switch(userChoice()){
			  case '1':b_ptr->getPoint(); break;
			  case '2':b_ptr->displayPoint(); break;
                          default:cout<<"\nInvalid choice!!"<<endl;
                      }
                      break;
            case '2': b_ptr=&v;
                      switch(userChoice()){
			  case '1':b_ptr->getPoint(); break;
			  case '2':b_ptr->displayPoint(); break;
			  default:cout<<"\nInvalid choice!!"<<endl;
		      }
		      break;
	    case '3': b_ptr=&c;
                      switch(userChoice()){
			  case '1':b_ptr->getPoint(); break;
			  case '2':b_ptr->displayPoint(); break;
                          default:cout<<"\nInvalid choice!!"<<endl;
                      }
                      break;          
            default:cout<<"\nInvalid choice!!"<<endl;            
        }
        getch();
    }
}