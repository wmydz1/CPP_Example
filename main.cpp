//
// Created by Samchen on 1/4/16.
//


#include <iostream>


using namespace std;


//class Person {
//public:
//    Person(string theName);
//    
//    void introduce();
//    
//protected:
//    string name;
//};
//
//class Teacher : public Person {
//    
//public:
//    Teacher(string theName, string theClass);
//    
//    void teach();
//    
//    void introduce();
//    
//protected:
//    string classes;
//};
//
//class Student : public Person {
//    
//public:
//    Student(string theName, string theClass);
//    
//    void attendClass();
//    
//    void introduce();
//    
//protected:
//    string classes;
//    
//};
//
//class TeachingStudent : public Student, public Teacher {
//public:
//    TeachingStudent(string theName, string classTeaching, string classAttending);
//    
//void introduce();
//};
//
//Person::Person(string theName) {
//    name = theName;
//}
//
//void Person::introduce() {
//    cout << "I am " << name << " \n\n";
//}
//
//Teacher::Teacher(string theName, string theClass) : Person(theName) {
//    classes = theClass;
//}
//
//void  Teacher::teach() {
//    cout << name << " teach " << classes << " \n\n";
//}
//
//void  Teacher::introduce() {
//    cout << "I am " << name << " I teach " << classes << " \n\n";
//}
//
//Student::Student(string theName, string theClass) : Person(theName) {
//    classes = theClass;
//}
//void Student::attendClass() {
//    cout<<name<<" attend " <<classes<< " study  \n\n";
//}
//void Student::introduce() {
//    cout<<"hello everyone ,I am "<<name<<" , I learn in "<<classes<<" \n\n";
//}
//TeachingStudent::TeachingStudent(string theName, string classTeaching, string classAttending) :Teacher(theName,classTeaching) ,Student(theName,classAttending) {
//    
//}
//void TeachingStudent::introduce() {
//    cout<< "hello eveyone,I am "<<Student::name<<" I teach "<<Teacher::classes<<" , \n\n";
//    cout<<" I learn in "<<Student::classes+" \n\n";
//}
//
//
//int main(){
//    Teacher teacher("美女老师","小红花班");
//    Student student("小孩","小红花班");
//    TeachingStudent teachStudent("小老师","小红花班","大红花班");
//    
//    teacher.teach();
//    teacher.introduce();
//    
//    student.introduce();
//    student.attendClass();
//    
//    teachStudent.teach();
//    teachStudent.attendClass();
//    return 0;
//}
//




