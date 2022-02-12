
#include<iostream>
using namespace std;

bool isSort(int a[],int n)
{
if (n==0 || n==1)
   return true;
if (a[0]>a[1])
   return false; 
bool issmallerSorted = isSort(a+1,n-1) ;
return issmallerSorted;    
}
int main()
{
int a[]= {1,2,3,9,5,6,7,8} ;
if (isSort(a,8))
    cout<<"sorted"<< endl;
else 
    cout<<" not sorted" << endl;
}