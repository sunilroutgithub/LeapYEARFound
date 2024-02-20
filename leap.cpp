#include<iostream>
using namespace std;

bool checkyear(int year){
   if(year % 400 == 0)
     return true;
      if(year % 100 == 0)
     return false;
      if(year % 4 == 0)
     return true;

    return false;
 }
int main(){
     int year;
     cin>>year;
     if(checkyear(year)){
        cout<<"Leap Year";
     }else{
        cout<<"Not a Leap Year";
     }
    return 0;
}