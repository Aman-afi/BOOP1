#include<iostream.h>
#include<conio.h>
void exc(int&, int&);//function declaration
void main()
{
  clrscr();
  cout<<"enter two number"<<endl;
  cin>>x>>y;
  exc(x, y);//function call
  cout<<"after exchange"<<endl;
  cout<<x<<endl;
  cout<<y<<endl;
  getch();
}
void exc(int&a, int&b)//funtion declaration
{
  int c;
  c=a;
  a=b;
  b=c;
}


