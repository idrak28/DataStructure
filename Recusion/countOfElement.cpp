#include<iostream>
using namespace std ;

void coutOfele(int a[], int n , int x, int i,int &ans){
if (i==n)
    return  ;
 //int m=0 ;

if ( a[i]==x)
     ans++  ;
coutOfele(a,6,4,i+1,ans) ;

}
int main(){
int a []= {1,4,3,4,4,6};
int ans=0;
 coutOfele(a,6,4,0,ans) ;
 cout<< ans;
}
