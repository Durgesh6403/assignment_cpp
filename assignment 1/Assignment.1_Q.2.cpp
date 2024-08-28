#include<iostream>
using namespace std;

// SAME QUESTION IN STRUCT
//  struct Date
// { 
    
//     int day;
//     int month;
//     int  year;

//     public:
//     void initDate()
//     {
//         day = 15;
//         month =06;
//         year = 2001;
//     }
//     void printDateOnConsole()
//     {

//     cout << day << "/" << month << "/" << year << endl;
//     }
//     void acceptDateFormConsole()
//     {
//        cout << "Enter day: ";
//         cin >> day;
//         cout << "Enter month: ";
//         cin >> month;
//         cout << "Enter year: ";
//         cin >> year;

//     }
//     bool isLeapYear()
//     {
//        if (year % 400 == 0) 
//         return true;
//         else return false;
//     }
// };

// int main()
// {
//    struct Date  date;
//    int choice;
//    do{
//     cout<<"\nMenu:\n"<<endl;
//     cout<<"1.Initialize Date\n"<<endl;
//     cout<<"2.Print date\n"<<endl;
//     cout<<"3.Accept date form console\n"<<endl;
//     cout<<"4.Check if Year is Leap Year\n"<<endl;
//     cout<<"5.Exit\n"<<endl;
//     cout<<"Enter your choice:";
//     cin >> choice;
     
//      switch (choice){

//      case 1:
//              date.initDate();
//              break;
//      case 2:
//              date.printDateOnConsole();
//              break;
//      case 3:
//              date.acceptDateFormConsole();
//              break;
//      case 4:
//               if (date.isLeapYear()) 
//               cout << date.year << " is a leap year." << endl;
//               else 
//               cout << date.year << " is not a leap year." << endl;
//              break;
//      case 5:
//              cout << "Exiting..." << endl;
//              break;
//      default:

//              cout << "Invalid choice. Please try again." << endl;

//          }
   
// }while (choice != 5);
// return 0;
// }

//  same question with class

 class Date
{ 
    
    int day;
    int month;
    int year;

    public:
    void initDate()
    {
        day = 15;
        month =06;
        year = 2001;
    }
    void printDateOnConsole()
    {

    cout << day << "/" << month << "/" << year << endl;
    }
    void acceptDateFormConsole()
    {
       cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;

    }
    bool isLeapYear()
    {
       if (year % 400 == 0) 
        return true;
        else 
        return false;
    }
};  

int main()
{
    Date  date;
   int choice;
   do{
    cout<<"\nMenu:\n"<<endl;
    cout<<"1.Initialize Date\n"<<endl;
    cout<<"2.Print date\n"<<endl;
    cout<<"3.Accept date form console\n"<<endl;
    cout<<"4.Check if Year is Leap Year\n"<<endl;
    cout<<"5.Exit\n"<<endl;
    cout<<"Enter your choice:";
    cin >> choice;
     
     switch (choice){

     case 1:
             date.initDate();
             break;
     case 2:
             date.printDateOnConsole();
             break;
     case 3:
             date.acceptDateFormConsole();
             break;
     case 4:
              if (date.isLeapYear()) 
              cout <<  "leap year" << endl;
              else 
              cout << " non leap year" << endl;
             break;
     case 5:
             cout << "Exiting..." << endl;
             break;
     default:

             cout << "Invalid choice. Please try again." << endl;

         }
   
}while (choice != 5);
return 0;
}




