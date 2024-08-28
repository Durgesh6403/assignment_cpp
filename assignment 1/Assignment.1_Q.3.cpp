 #include<iostream>
using namespace std;

class Student{
    int roll_no;
    string name;
    float marks;

public:

 void initStudent(){
       roll_no = 87169;
       name = "Durgesh";
       marks = 74.50;
    }

void printStudentOnConsole(){
   cout<<roll_no<<endl;
   cout<<name<<endl;
   cout<<marks<<endl;
}

void acceptStudentFromConsole(){
    cout<<"enter roll.no.\n name\n marks\n"<<endl;
    cin>>roll_no>>name>>marks;
}
};
int menu(){
    int choice;
    cout<<"enter your choice\n"<<endl;
    cout<<"0.Exit\n1.initialize student\n2.enter new student from console\n3.print stident"<<endl;
    cin>>choice;
    return choice;
}

int main(){
    Student s1;
    int choice;
    while (( choice = menu()) != 0)
    {
        switch (choice)
        {
        case 0:
            cout<<"program Exit Successfully"<<endl;
            break;    
        case 1:
            s1.initStudent();
            break;
        case 2:
            s1.acceptStudentFromConsole();
            break;
        case 3:
             s1.printStudentOnConsole();
            break;    
        
        default:
            cout<<"enter valid choice"<<endl;
            break;
        }
    }

}
