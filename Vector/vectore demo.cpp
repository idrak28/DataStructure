
/15/09/2021
//Md Idrak Efaz
//190205121
#include <iostream>
#include<vector>
#include<cstring>


using namespace std;
void show_student (vector< int>&n, vector<int>&r, vector<float>&c)
{
    int counter = n.size() ;
    for( int i= 0 ; i < counter ; ++i)
    {
        cout<< n [i] <<" " << r[i] << " " << "  "<< c[i] << endl;
    }
}
void add_student(vector<int>&n, vector<int>&r, vector<float>&c)
{
float num;
int  num1;
int student;
    do
    {
       cout<< " n\CGPA:" ;
       cin >> num ;
        c.push_back(num);
        cout<< " \nRoll number:" ;
        cin>> num1;
        r.push_back(num1);
        cout<< " \nstudent name:" ;
         cin>> student ;
        n.push_back(student);
    }while(num>0);

    c.pop_back();
    r.pop_back();
    n.pop_back();
}
void delet_student (vector<int>&n, vector<int>&r, vector<float>&c)
 { int x ;
     cout<< " which number record you want to delet: ";
   cin>>x ;
   n.erase(n.begin()+(x-1));
    r.erase(r.begin()+(x-1)) ;
     c.erase(c.begin()+(x-1)) ;

 }
 void edit_student( vector<int>&n, vector<int>&r, vector<float>&c)
 { int x ;
 cout<<" which number record you want to edit \n";
 cin >> x  ;
 cout<< " \n what are the value \n";
 int name , roll ;
 float cgpa ;
 cout<< " student name " ;
  cin>> name ;
 cout<< " roll number " ;
   cin >> roll ;
 cout<< " cgpa " ;
 cin>> cgpa ;
 cout<< endl ;


    n.insert(n.begin()+(x-1),name) ;
     r.insert(r.begin()+(x-1),roll) ;
      c.insert(c.begin()+(x-1),cgpa) ;
 }


int main ()
{
    vector<int> name ;
    vector<int> roll_number;
    vector<float> cgpa;
    cout<< " 1 for  show student record \n 2 for adding student record \n 3 for deleting student record \n 4 for editing student record \n" ;
    int aww ;
    cin>> aww ;
    {
        if (aww==1 )
show_student(name,roll_number,cgpa);
        else if (aww==2)
add_student(name,roll_number,cgpa);
        else if ( aww==3)
delet_student(name,roll_number,cgpa);
        else if ( aww==4)
edit_student (name,roll_number,cgpa);
        else
cout<< " worng input" ;
    }
}
