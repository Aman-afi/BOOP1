#include<iostream.h>
#include<conio.h>
void point(int x, int y=0);
int main()
{
int p,q;
clrscr();
cout<<"enter x coordinate"<<endl;
cin>>p;
//cout<<"enter y coordinate"<<endl;
//cin>>q;
point(p,q);
return 0;
}
void point(int x, int y)
{
cout<<"("<<x<<","<<y<<")"<<endl;
getch();
}




