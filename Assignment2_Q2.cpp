#include<iostream>
using namespace std;

class tollbooth{

unsigned int no_cars;
double money_collected;

public:

tollbooth(){
    no_cars = 0;
    money_collected =0;
}
void payingCar(){
    no_cars++;
    money_collected = money_collected + 0.50;
} 
void nopayCar(){
    no_cars++;
}

void printOnConsole() {
    cout<<"total cars pass bye"<<no_cars<<endl;
    cout<<"tatal money collected"<<money_collected<<endl;
    cout<<"total paying cars "<<money_collected/0.50<<endl;
    cout<<"total no. of non paying cars"<<no_cars-(money_collected/0.50)<<endl;

}

};
int main(){
    tollbooth t1;
    t1.payingCar();
    t1.nopayCar();
    t1.printOnConsole();
}