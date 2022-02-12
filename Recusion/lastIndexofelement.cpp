#include<iostream>
using namespace std ;

void lastIndex(int a[], int n , int x, int i){
if (i==n)
    return  ;
if ( a[i]==x)
    cout<< i<<" "  ;
lastIndex(a,6,4,i+1) ;
}
int main(){
int a []= {1,4,3,4,4,6};
 lastIndex(a,6,4,0) ;
}
