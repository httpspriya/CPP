#include <iostream.h>
#include <conio.h>
#include <string.h>
class Student{
	int rn,total,cpp,os,ds,sad;
	double per;
	char name[20],result[5],grade[2];
	void getData(){
		cout<<"Roll no:";
		cin>>rn;
		cout<<"Name:";
		cin>>name;
		cout<<"\nEnter marks of following subjects";
		cout<<"\n=================================";
		cout<<"\nCPP:";
		cin>>cpp;
		cpp=marksCheck(cpp);
		cout<<"OS:";
		cin>>os;
		os=marksCheck(os);
		cout<<"DS:";
		cin>>ds;
		ds=marksCheck(ds);
		cout<<"SAD:";
		cin>>sad;
		sad=marksCheck(sad);
	}
	int marksCheck(int a){
		if(a>100 || a<0){
			do{
			     cout<<"Marks can not be more than 100 and less than 0!!!";
			     cout<<"\nEnter mark of that subject again:";
			     cin>>a;
			}while(a>100 || a<0);
		       return a;
		}
		else{
		       return a;
		}
	}
	public:
		void process(){
			getData();
			total=cpp+os+ds+sad;
			if(cpp<40 || os<40 || ds<40 || sad<40){
				per=0.0;
				strcpy(result,"FAIL");
				strcpy(grade,"-");
			}
			else{
				per=total/4.0;
				strcpy(result,"PASS");
				if(per>=80){
					strcpy(grade,"O");
				}
				else if(per>=70 && per<80){
					strcpy(grade,"A");
				}
				else if(per>=60 && per<70){
					strcpy(grade,"B");
				}
				else if(per>=50 && per<60){
					strcpy(grade,"C");
				}
				else{
					strcpy(grade,"D");
				}
			}
		}
		void putData(){
			cout<<"\n"<<rn<<"\t"<<name<<"\t"<<cpp<<"\t"<<os<<"\t"<<ds<<"\t"<<sad<<"\t"<<total<<"\t"<<per<<"\t"<<result<<"\t"<<grade<<endl;
		}
};
void main(){
	clrscr();
	Student s[5];
	int i;
	for(i=0;i<5;i++){
		cout<<"\n\nEnter details of student:"<<i+1;
		cout<<"\n========================="<<endl;
		s[i].process();
	}
	cout<<"\nRno\tName\tCPP\tOS\tDS\tSAD\tTotal\tPer\tResult\tGrade";
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	for(i=0;i<5;i++){
		s[i].putData();
	}
	getch();
}