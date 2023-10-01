#include <iostream.h>
#include <conio.h>
class Shape{  
    public:
	virtual void Area()=0;
	virtual void display()=0;
};
class circle : public Shape {
    int r;
    float area;
    public:
	void Area(){
            cout<<"\n\nCircle:-";
            cout<<"\nEnter radius:";
            cin>>r;
	    area=3.14*r*r;
        }    
        void display(){
            cout<<"\nArea of circle   :"<<area<<endl;
        }
};
class rectangle : public Shape{
    int width, length;
    float area;
    public:
	void Area(){
            cout<<"\n\nRectangle:-";
            cout<<"\nEnter width:";
            cin>>width;
	    cout<<"\nEnter length:";
	    cin>>length;
	    area=width*length;
        }    
        void display(){
	    cout<<"\nArea of rectangle   :"<<area<<endl;
	}
};
class square : public Shape{
    int side;
    float area;
    public:
	void Area(){
	    cout<<"\n\nSquare:-";
	    cout<<"\nEnter side:";
            cin>>side;
            area=side*side;
        }    
        void display(){
            cout<<"\nArea of square   :"<<area<<endl;
        }
};
void main(){
    clrscr();
    Shape *b_ptr[3];
    circle c;
    rectangle r;
    square s;
    b_ptr[0]=&c;
    b_ptr[1]=&r;
    b_ptr[2]=&s;
    for(int i=0;i<3;i++){
	b_ptr[i]->Area();
	b_ptr[i]->display();
    }
    getch();
}