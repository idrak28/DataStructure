#include <iostream>
#include <cstring>
#include<vector>
using namespace std;
int main(){
    vector<int> *vp= new vector<int>(); //dynamic
    vector<int> v; //stactic
    v.push_back(10);
    //v.push_back(15);
    //v.push_back(20);
    cout<<"v[0]:"<<v[0]<<endl;
    v.pop_back();
    v[0]=100;
    cout<<"v[0]:"<<v[0]<<endl;


}
