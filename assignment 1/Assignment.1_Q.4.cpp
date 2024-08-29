//
#include<iostream>
using namespace std;

namespace NStudent{
    class Student{
    int roll_no;
    string name;
    float marks;

public:

 void initStudent(){
     
       roll_no = 87169;
       name = "durgesh";
       marks = 75.50;
    }

void printStudentOnConsole(){
   cout<<roll_no<<endl;
   cout<<name<<endl;
   cout<<marks<<endl;
}

void acceptStudentFromConsole(){
    cout<<"Enter student details"<<endl;
    cout<<"enter roll.no.\n name\n marks\n"<<endl;
    cin>>roll_no>>name>>marks;
}
};
}
using namespace NStudent;
int main(){
    Student s1;
    
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();
    
}