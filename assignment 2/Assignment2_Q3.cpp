#include<iostream>
using namespace std;

class Address{
    string building;
    string street;
    string city;
    int pin;

    public:

    Address(string building,string street,string city,int pin){
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    void setbuilding(string building){
        this->building = building;
    }
    void setstreet(string street){
        this->street = street;
    }
    void setcity(string city){
        this->city = city;
    }
    void setpin(int pin){
        this->pin = pin;
    }

    string getbuilding(){
        return building;
    }
    string getstreet(){
        return street;
    }
    string getcity(){
        return city;
    }
    int getpin(){
        return pin;
    }


    

};

int main (){
    Address A1("itrends","sb","pune",4157055);
    A1.setbuilding("sunbeam");
    A1.setstreet("clg road");
    A1.setcity("pune");
    A1.setpin(411057);
    cout<<A1.getbuilding()<<endl;
    cout<<A1.getstreet()<<endl;
    cout<<A1.getcity()<<endl;
    cout<<A1.getpin()<<endl;
    



}