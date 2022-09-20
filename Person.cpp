#include "Person.h"
#include <iostream>

void Person::printPersonData(){
    cout << "Nombre: " << name << "\n";
    cout << "ID: " << id << "\n";
    cout << "Gender: " << sex << "\n";
    cout << "Date of Birth: " << birthDate << "\n";


}


double Person::getId(){
    return id;
}
void Person:: setId(double id){
    Person::id = id;
}

string Person:: getName(){
    return name;
}

void Person:: setName(string name){
    Person::name = name;
}

bool Person:: getSex(){
    return sex;
}
void Person:: setSex(bool sex){
    Person::sex = sex;
}

string Person:: getBirthDate(){
    return birthDate;
}
void Person:: setBirthDate(string birthDate){
    Person:: birthDate = birthDate;
}