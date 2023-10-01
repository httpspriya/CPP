#include <iostream.h>
#include <conio.h>
#include <string.h>
class media {
    protected:
        float price;
        char title[50];
    public:
        media(float price, char *title){
            this->price=price;
            strcpy(this->title,title);
        }
	virtual void display()=0;
};
class book: public media{
    int pages;
    public:
        book(int pages,float price, char *title):media(price,title){
            this->pages=pages;
        }    
        void display(){
            cout<<"\nTitle            :"<<title<<endl;
            cout<<"Price            :"<<price<<endl;
            cout<<"Pages            :"<<pages<<endl;
        }
};
class tape: public media{
    float time;
    public:
        tape(float time,float price, char *title):media(price,title){
            this->time=time;
        }    
        void display(){
            cout<<"\nTitle            :"<<title<<endl;
            cout<<"Price            :"<<price<<endl;
            cout<<"Time             :"<<time<<endl;
        }
};
void main(){
    clrscr();
    book b(722,500,"xyz");
    tape t(32.12,321,"abc");
    media *b_ptr=&b;
    cout.precision(2);
    b_ptr->display();
    b_ptr=&t;
    cout.precision(2);
    b_ptr->display();
    getch();
}