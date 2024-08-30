#include<iostream>
using namespace std;

class Date 
{
 int day;
 int month;
 int year;


public:
Date (){
 day=0;
 month=0;
 year=0;

}
Date (int day,int month,int year){

this->day=day;
this->month=month;
this->year=year;
}
void acceptdate(){

 cout<<"Enter the day"<<endl;
 cin>>day;
 cout<<"Enter the month"<<endl;
 cin>>month;
 cout<<"Enter the year"<<endl;
 cin>>year;
}
void displaydate(){
 
 cout << day << "/" << month << "/" << year << endl;

}
};

class Person
{
    string name;
    string address;
    int birthdate;
    Date d1;

    public:
    Person(){
        string name="";
        string address="";

    }
    Person (string name,string address){
        this->name=name;
        this->address=address;

      
    }
    void acceptPerson(){
    
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<"Enter the address"<<endl;
    cin>>address;
    cout<<"Enter date of birth"<<endl;
    d1.acceptdate();

    }
    void displayPerson(){
     cout<<"Name-"<<name<<endl;
     cout<<"Address-"<<address;
     cout<<"Date of Birth"<<endl;
     d1.displaydate();

    }
};
int main(){

 Person p1;
 p1.acceptPerson();
 p1.displayPerson();
 Person p2;
 p2.acceptPerson();
 p2.displayPerson();
}




