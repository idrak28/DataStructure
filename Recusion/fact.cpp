#include <iostream>
using namespace std;
int fact(int n){
// 1st step base case     
if(n==0) return 1;
int smallest = fact(n-1); // 2nd step is assumption

int ans = n* smallest; //3rd step calculaton
return ans;
}
int main()
{ cout<<fact(4)<<endl; 

}