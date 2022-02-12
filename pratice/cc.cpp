#include<iostream>
using namespace std;
bool usSort(int a[],int n)
{
if (n==0 || n==1)
   return true;
if (a[0]>a[1])
   return false;
bool issmallerSorted = usSort(a+1,n-1) ;
return issmallerSorted;
}
int main()
{
int a[]= {1,2,3,4,9,6,7,8} ;
if (usSort(a,8))
    cout<<"sorted";
else
    cout<<" not sorted" ;
}
