#include <iostream.h>
#include <conio.h>
class Unary
{
 int x,y;
 public:
	void getData(){
	    cout<<"\nEnter value of x:";
	    cin>>x;
	    cout<<"\nEnter value of y:";
	    cin>>y;
  }
	void display(){
            cout<<"\nX:"<<x;
            cout<<"\nY:"<<y;
  }
        void operator -(){
            x=-x;
            y=-y;
        }
};
void main()
{
    clrscr ();
    Unary u;
    u.getData();
    cout<<"\nData before operator overloading:";
    u.display();
    -u;
    cout<<"\nData after operator overloading:";
    u.display();
    getch();
}
