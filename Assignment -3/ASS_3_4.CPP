#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class Employee{
    protected:
    	int emp_no;
    	char *name;
    	long int b_sal;
    public:    
    	Employee (){
	        name= new char[20];
        }
        void insert(){
            cout<<"\nEmployee details:";
            cout<<"\nEmp_no      :";
            cin>>emp_no;
            cout<<"Name        :";
            gets(name);
            cout<<"Basic salary:";
            cin>>b_sal;
        }
        void display (){
            cout<<"\nEmployee no      :"<<emp_no;
            cout<<"\nName             :"<<name;
            cout<<"\nBasic salary     :"<<b_sal;
        }
};
class Internal: public virtual Employee{
    protected:
        int Internal_marks;
    public:
        void insert(){
            Employee::insert();
            cout<<"\nMarks of internal performance:";
            cin>>Internal_marks;
        }    
};
class External: public virtual Employee{
    protected:
        int External_marks;
    public:
        void insert(){
            cout<<"\nMarks of external performance:";
            cin>>External_marks;
        }    
};
class Result: public Internal, public External {
    protected:
        int total;
    public:
        void display (){
            total=Internal_marks+External_marks;
	    Employee::display();
	    cout<<"\n\nMarks of performances :-"<<endl;
	    cout<<"Internal         :"<<Internal_marks<<endl;
	    cout<<"External         :"<<External_marks<< endl;
	    cout<<"Total            :"<<total<<endl;
        }    
};
void main(){
    clrscr();
    Result r;
    r.Internal::insert();
    r.External::insert();
    cout<<"\nResult:-";
    r.display();
    getch();
}