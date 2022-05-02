#include<iostream.h>
#include<conio.h>
struct student{
int r_no;
char name[50];
int age;
char br[15];
};
int main()
{
student s
;
clrscr();
cout<<"get details of student:"<<endl;
cout<<"enter roll no:";
cin>>s.r_no;
cout<<"enter name:";
cin>>s.name;
cout<<"enter age:";
cin>>s.age;
cout<<"enter branch:";
cin>>s.br;
cout<<"print details of student:"<<endl;
cout<<"roll no"<<s.r_no<<endl;
cout<<"name:"<<s.name<<endl;
cout<<"age:"<<s.age<<endl;
cout<<"branch:"<<s.br<<endl;

getch();
return 0;
}