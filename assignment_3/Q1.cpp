 #include <iostream>
using namespace std; 

class Cylinder {

double radius;

double height;
static double const PI;

public:

Cylinder(){
     radius=0;
     height=0;
}
Cylinder(double radius,double height){
    this->radius=radius;
    this->height=height;


}
 
 void setradius(double radius)
 {
     this-> radius=radius;
 }
  double getradius( )const
 {
     return radius;

 }
 void setheight(double height){

     this-> height=height;
  }
 double getheight( )const
{
   return height;
  }
 
void calculateVolume(){

    double volume = PI * radius * radius * height;
    cout << "Area of volume = " <<volume<< endl;
 }
};
 double const Cylinder:: PI=3.14;

int main(){

Cylinder c1(10.5,5.5);
c1.setradius(20);
c1.getradius();
c1.setheight(5);
c1.getheight();
c1.calculateVolume();

 

}