#include<iostream>
using namespace std ;
int sum(int *a,int *b)
{
   return *a+*b;
}	
int main()
{
  int a=20,b=30;
  cout << "Sum of a,b="<<sum(&a,&b)<<endl;
  return 0;


}
