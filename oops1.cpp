#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
};

class student : public Person {
    //name, age
    public: 
        int rollno;

        student(string name, int age, int rollno): Person(name, age){
            this->rollno = rollno;
        }


        void getInfo(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<rollno<<endl;

        }

};
int main(){
    //Inheritance
    student s1("Prachi", 18, 34);

    return 0;
}