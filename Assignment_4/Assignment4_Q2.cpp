#include <iostream>
using namespace std;

class Student
{

    string name;
    string gender;
    static int rollNumber;
    int marks[3];
    int percentage;

public:
    Student()
    {
        this->name = "";
        this->gender = "";
        for (int i = 0; i < 3; i++)
        {
            this->marks[i] = 0;
        }
    }

    void acceptStudent()
    {
        cout << "Enter students details" << endl;
        cout << "Enter name " << endl;
        cin >> name;
        cout << "Enter gender " << endl;
        cin >> gender;
        rollNumber++;
        cout << "Enter marks of three subject " << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }

    void printStudent()
    {
        cout<<"Student name"<<name<<endl;
        cout<<"Student gender"<<gender<<endl;
        cout<<"Student rollNo"<<rollNumber<<endl;
        cout<<"Student marks of three subject"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout<< marks[i];
        }
        cout << "Pcercentage of " << name << "is";
        int total;
        for (int i = 0; i < 3; i++)
        {
            total = marks[i] + total;
        }
        percentage = total / 3;
    }

    int getRollNumber()
    {
        return rollNumber;
    }
};

int Student::rollNumber = 0;

int searchRecords(Student *arr[5], int roll)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]->getRollNumber() == roll)
        {
            return i;
        }
    }
    return -1;
}

void sortRecords(Student *sort[5])
{
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (sort[i]->getRollNumber() > sort[j]->getRollNumber())
            {
                swap(sort[i], sort[j]);
            }
        }
    }
}

int menu()
{
    int choice;
    cout<< "\nStudent Information System\n"<<endl; 
    cout<< "1. Accept student information"<<endl;
    cout<< "2. Display student information"<<endl;
    cout<< "3. Search student information and display data"<<endl;
    cout<< "4. Sort student information and display data"<<endl;
    cout<< "5.exit"<<endl;
    cout<< "Enter your choice:"<<endl;;
    cin >> choice;
    return choice;
}

int main()
{
    Student *arr[5];
    int choice;

    do
    {
        switch (choice)
        {
         
        case 1:
        
            for (int i = 0; i < 5; i++)
            {
                arr[i] = new Student();
                arr[i]->acceptStudent();
            }
            break;
        
        case 2:
            for (int i = 0; i < 5; i++)
            {
                arr[i]->printStudent();
            }
            break;
        
        case 3:
        {
            int rollNumber;
            cout << "Enter student roll number: ";
            cin >> rollNumber;
            int index = searchRecords(arr, rollNumber);
            cout << index;
            if (index != -1)
            {
                cout << "Student found at index" << index << endl;
            }
            else
            {
                cout << "Student not found"<<endl;
            }
            break;
        }
        case 4:
            sortRecords(arr);
            cout << "Student information sorted" << endl;
            break;

        case 5:
            cout << "Thank you for using app..."<<endl;
            break;
        
        default:
            cout << "Enter a valid input"<<endl;
            break;
        }
    } while ((choice = menu()) != 0);

    return 0;
}