#include <iostream>
using namespace std;
void bubblesort(int a[], int n)
{
for( int count = 0; count <= n-1; count++) {
   for (int j=0; j <=n-2 ; j++){
      if (a[j]>a[j+1]) 
         swap(a[j],a[j+1]); 
   }
}
int main()
{   int n;
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>a[i];
 bubblesort(a,n);
 for(int i=0; i<n; i++)
 cout<<a[i]<<" ";

}