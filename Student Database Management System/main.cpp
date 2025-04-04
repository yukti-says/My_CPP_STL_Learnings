/*

GOAL:
building a system to manage student records with marks

STL:
we gonna use here
vector : to store student records
map : to associate ids with names
sort() : to sort students based on their marks

PROJECT REQUIREMENTS
*add student records(id , name , marks)
*display all records
* sort records based on marks
* delete a student record
*/


#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct Student{
    int id;
    string name;
    int marks;

    //constructor to initialize a student
    Student(int id , string name , int marks)
    {
        this ->id = id;
        this ->name = name;
        this ->marks = marks;
    }
};

//declaring global containers
vector<Student> studentRecords;
map<int , string> studentMap;

//adding a student record
void addstudent(int id , string name , int marks)
{
    Student s(id , name , marks);
    studentRecords.push_back(s);
    studentMap[id] = name;
    cout<<"Student added successfully!\n";
}

//displaying all student
void displaystudent()
{
    if(studentRecords.empty())
    {
        cout<<"No student record found.\n";
        return;
    }
    cout<<"\nStudent Record: \n";
    cout<<"ID\tName\tMarks\n";
    for(auto &s : studentRecords){
        cout<<s.id<<"\t"<<s.name<<"\t"<<s.marks<<endl;
    }

}

//searching student by id  basically will use map here
void searchstudent(int id){
    auto it = studentMap.find(id);
    if(it != studentMap.end())
    {
        for(auto &s : studentRecords){
            if(s.id == id){
                cout<<"\nStudent Found:\n";
                cout<<"ID: "<<s.id<<"\nName: "<<s.name<<"\nMarks: "<<s.marks<<endl;
                return;
            }

        }

    }
    else{
        cout<<"Student not found:\n";
    }

}


//sorting student by there marks
bool Markscompare(Student a , Student b)
{
  return a.marks > b.marks ;//will sort in descending order of marks
}


void sortrecords()
{
    if(studentRecords.empty()){
        cout<<"No Record Found to sort\n";
        return;
    }
    sort(studentRecords.begin() , studentRecords.end() , Markscompare);
    cout<<"Records sorted successfully by marks!\n";
}

//deleting student record
void deletestudent(int id) {
    for (auto it = studentRecords.begin(); it != studentRecords.end(); ) {
        if (it->id == id) {
            it = studentRecords.erase(it); // Erase and update iterator
            studentMap.erase(id); // Remove from the map
            cout << "Student with ID " << id << " deleted successfully!\n";
            return; // Exit the function after deletion
        } else {
            ++it; // Only increment if not erased
        }
    }
    cout << "Student ID not found!\n";
}




int main()
{
    int choice , id , marks;
    string name;
    while(true)
    {
        cout<<"\nStudent Database Management System: \n";
        cout<<"1. Add Student: \n";
        cout<<"2. Display Records: \n";
        cout<<"3. Search Student by ID: \n";
        cout<<"4. Sort by Marks: \n";
        cout<<"5. Delete: \n";
        cout<<"6. Exit\n";
        cout<<"Enter Your choice: ";
        cin>>choice;


        switch (choice)
        {
            case 1:
              cout << "Enter ID: ";
              cin >> id;
              cin.ignore(); // Clears the leftover newline from previous input

              cout << "Enter Name: ";
              getline(cin, name); // Reads the full name with spaces

              cout << "Enter Marks: ";
              cin >> marks;

              addstudent(id, name, marks);
              break;


            case 2:
            displaystudent();
            break;

            case 3:
            cout<<"Enter Student ID to search: ";
            cin>>id;
            searchstudent(id);
            break;

            case 4:
            sortrecords();
            displaystudent();
            break;

            case 5:
            cout<<"Enter Student ID to delete: ";
            cin>>id;
            deletestudent(id);
            break;

            case 6:
            cout<<"Existing Program!\n";
            return 0;

            default:
            cout<<"Invalid choice!";

        }

    }
}
