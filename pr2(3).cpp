#include<iostream.h>
#include<conio.h>
int main()
{
int i,j,rows;
clrscr();
cout<<"enter value of rows";
cin>>rows;
for(i=1; i<=rows; ++i)
{
for(j=1; j<=i;++j)
{
  cout<<"*";
}
  cout<<endl;
}
  getch();
  return 0;
}
