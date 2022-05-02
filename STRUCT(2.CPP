#include<iostream.h>
#include<conio.h>
struct human{
char name[40];
int weight;
int height;
int age;
char blood[5];
};
int main()
{
human s;
clrscr();
cout<<"get details of human:"<<endl;
cout<<"enter name:";
cin>>s.name;
cout<<"enter weight:";
cin>>s.weight;
cout<<"enter height:";
cin>>s.height;
cout<<"enter age:";
cin>>s.age;
cout<<"enter blood:";
cin>>s.blood;

cout<<"print details of human:"<<endl;
cout<<"name:"<<s.name<<endl;
cout<<"weight:"<<s.weight<<endl;
cout<<"height:"<<s.height<<endl;
cout<<"age:"<<s.age<<endl;
cout<<"blood:"<<s.blood<<endl;
getch();
return 0;
}
