#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class mark;
class student
{
public:
int r_no;
char name[20];
int age;
char br[20];

void getdata()
{
cout<<"enter roll no:";
cin>>r_no;
cout<<"enter name:";
cin>>name;
cout<<"enter age:";
cin>>age;
cout<<"enter branch:";
cin>>br;
}
friend void display(student a, mark b)
};

class mark
{
public:
int p;
int m;
int c;
void getmark()
{
cout<<"mark of physics:";
cin>>p;
cout<<"mark of math:";
cin>>m;
cout<<"mark of c:";
cin>>c;
}
friend void display(student a, mark b)
};

void display(student x, mark y)

{
cout<<"roll no:"<<x.r_no<<endl;
cout<<"name:"<<x.name<<endl;
cout<<"age:"<<x.age<<endl;
cout<<"br:"<<x.br<<endl;
cout<<"p:"<<y.p<<endl;
 cout<<"m:"<<y.m<<endl;
 cout<<"c:"<<y.c<<endl;
 }
int main()
{
int ch;
char yn;
clrscr();
do{

cout<<"press 1 to create object.\n press 2 to cout objects";
cout<<"enter your choice:";
cin>>ch;
switch(ch)
{
case 1:
student s;
mark b;
s.getdata();
b.getmark();
break;
case 2:
display(s,b);
break;
}
cout<<"do you wish to continue?";
cin>>yn;
}while(yn=='y'|| yn=='Y');
getch();
return 0;
}




