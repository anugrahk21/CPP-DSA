#include <iostream>
using namespace std;

//Hashing is a technique to store and retrieve data in a fast and efficient manner. 
//It is used to store key-value pairs.

#define HASH_SIZE 1000

class Student{
    public:
    int id;
    string name;
    Student(){
        id = -1;
        name = "";
    }
};

Student StudentDB[HASH_SIZE]; //array of Student objects

//not required in this case because we are using constructor to initialize the array
// void initDB(){
//     for(int i=0; i<HASH_SIZE; i++){
//         StudentDB[i].id = -1;
//     }
// }

void insertStudent(int id, string name){
    int index = id % HASH_SIZE;
    while(StudentDB[index].id != -1){
        index = (index + 1) % HASH_SIZE;
    }
    StudentDB[index].id = id;
    StudentDB[index].name = name;
}

const Student* getStudent(int id){
    int index = id % HASH_SIZE;
    while(StudentDB[index].id != id){
        index = (index + 1) % HASH_SIZE;
    }
    return &StudentDB[index];
}

int main(){
    int numofStudents;
    cout<<"Enter number of students: ";
    cin>>numofStudents;
    for(int i=0; i<numofStudents; i++){
        int id;
        string name;
        cout<<"Enter student id: ";
        cin>>id;
        cout<<"Enter student name: ";
        getline(cin, name);
        insertStudent(id, name);
    };
    int id;
    cout<<"Enter student id to search: ";
    cin>>id;
    const Student* student = getStudent(id);
    if(student->id != -1){
        cout<<"Student found with id: "<<student->id<<" and name: "<<student->name<<endl;
    }else{
        cout<<"Student not found with id: "<<id<<endl;
    };
}
