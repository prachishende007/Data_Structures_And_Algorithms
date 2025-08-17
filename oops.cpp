#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // cnon-parameterized constructor
    Teacher()
    {
        dept = "AI";
    }

    // parameterized constructor
    Teacher(string name, string dept, string subject, double sal)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }

    // Copy Constructor
    Teacher(Teacher &orgObj)
    {
        // pass by reference
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
    // properties
    string name;
    string dept;
    string subject;

    // methods
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(double newSalary)
    {
        salary = newSalary;
    }

    // getter
    double getSalary()
    {
        return salary;
    }

    void getInfo()
    {
        cout << name << endl;
        cout << dept << endl;
        cout << subject << endl;
        cout << salary << endl;
    }
};

class student
{
public: 
    string name;
    double* cgpaptr;

    //shallow copy

    student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    //shallow copy
    // student(student &obj) {
    //     this->name = obj.name;
    //     this->cgpaptr = obj.cgpaptr;
    // }

    //deep copy
    student(student &obj) {
        this->name = obj.name;
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
    }

    //destructor
    ~student(){
        cout<<"Hey!, I delete evrything"<<endl;
        delete cgpaptr;
    }

    void getInfo(){
        cout<<"name :" << name << endl;
        cout<<"cgpa:" << *cgpaptr << endl;
    }
};

int main()
{
    Teacher t1; // constructor call automatically
    t1.name = "Prachi";
    t1.subject = "Maths";
    t1.dept = "AI";
    t1.setSalary(1500000);

    Teacher t2("Pranav", "ComputerScience", "OOPS", 1200000);
    t2.getInfo();

    Teacher t2(t1);
    t2.getInfo();

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;


    student s1("Pranav", 9.0);
    s1.getInfo();

    student s2(s1);
    *(s2.cgpaptr) = 9.2;



    return 0;
}