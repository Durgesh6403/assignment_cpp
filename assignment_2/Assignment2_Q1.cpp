#include <iostream>
using namespace std;

class Box
{   double length;
    double width;
    double height;


public:
  Box(){
      cout<<"this is prameterless constructor"<<endl;
      length=1;
      width=1;
      height=1;
  }
  Box(double length,double width,double height)
  {
     cout <<"this is parametrized constructor"<< endl;
     this->length=length;
     this->width=width;
     this->height=height;
  }
  Box(double value)
  {
      cout<<"this is single parameterized constructor"<<endl;
      length=value;
      width=value;
      height=value;
   

  }

 double calculator()
 {
    return length * width * height;

  }
};
int menu() {

  int choice;
  cout<<"\n0.Exit\n"<<endl;
  cout<<"1.Calculate Volume with default values "<<endl;
  cout<<"2.Calculate Volume with length,breadth and height with same value "<<endl;
  cout<<"3.Calculate Volume with different length,breadth and height values."<<endl;
  cout<<"Enter your choice"<<endl;
  cin>>choice;
  return choice;
   

}
int main(){

   int choice;
   double length,width,height;
   Box b1;
   int value;
while ((choice = menu()) != 0){

 switch(choice)
  {
  case 1: 
         b1=Box();
         cout<<"volume:"<<b1.calculator()<<endl;
         break;
  case 2:
        cout<<"Enter the value"<<endl;
        cin>>value;
        b1=Box(value);
        cout<<b1.calculator();
        break;
  case 3:
       cout <<"enter the value of length"<<endl;
       cin>>length;
       b1=Box(length);
       cout <<"enter the value of width"<<endl;
       cin>>width;
       b1=Box( width);
       cout<<"enter the value of height"<<endl;
       cin>> height;
       b1=Box(height);
       cout<<b1.calculator();
       break;
 default:
        cout<<"invalid key"<<endl;

    
       
  }
}
   


}