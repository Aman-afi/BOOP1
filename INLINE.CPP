#include<iostream.h>
#include<conio.h>
const float pie=3.14;
inline float area (float r)
{
return(pie*r*r);
}
int main()
{
float radius;
clrscr();
cout<<"enter r::";
cin>>radius;
cout<<"area:"<<area(radius)<<endl;
getch();
return 0;
}