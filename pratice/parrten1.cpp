#include <iostream>
#include<cstring>
using namespace std ;
void printAllprefixes(char str[]){
    int n = strlen(str) ;
    for(int e=n-1;e>=0 ;e--)
    {
        for (int s=n-1 ; s>=e ; s--){
            cout<<str[s]<<" ";
        } cout<<endl;
    }
}
int main ()
{ char str[10]="abcde";
    printAllprefixes(str) ;

}
