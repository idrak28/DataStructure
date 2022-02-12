#include<iostream>
using namespace std ;
 int  print (char input[]){
 if (input[0]=='\0'){
    return 0 ;
 } int i = print(input+1);
 return 1 + i ;

     }
int main()
{

    char input[]="abc";
    cout<<print(input);
    return 0;
}
