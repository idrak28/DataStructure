#include <iostream>
using namespace std;
int fib(int n){
if (n==0) return 0;
if (n==1) return 1;
int smallout1 =fib(n-1);
//cout<<smallout1 <<endl;
int smallout2 = fib(n-2);
//cout<<n <<endl;
int ans = smallout2 + smallout1;
return ans ;
}
int main(){
int x =2 ;
cout<<fib(x)<<endl;
}

