#include<iostream>
using namespace std;


class time{

 int hour;
 int minute;
 int seconds;


 public:
 time(){

    hour 
 }
 time (int h,int m,int s){


 }

 int  gethour(){
     return hour;
 }
 int getminute(){
    return minute ;

 }
 int getseconds(){
    return seconds;
   
 }

 void printTime(){

      cout << " hour - " <<  hour << endl;
      cout << " minute - " << minute<< endl;
      cout << " seconds - " <<  seconds << endl;
 }
 void sethour(int h){
    hour=h;

 } 
 void setminute(int m ){
    
     minute=m;

 }
 void setseconds(int s){
     seconds= s;


 }
};
int main(){

  time arr[5];
  
  arr[0].gethour();
  arr[0].sethour(1);
  arr[0].


    return 0;
}

