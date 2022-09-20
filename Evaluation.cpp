#include "Evaluation.h"
#include <iostream>

Evaluation::Evaluation(){
    date="";
    score=0;
    comment="";
    guest = nullptr;
    owner = nullptr;
}

void Evaluation::printData() {
    cout << "Autor: " << guest -> getName() << "\n";
    cout << "Evaluado: " << owner -> getName() << "\n";

    cout << "Puntaje: " << score << "\n";
    cout << "Fecha: " << date << "\n";
    cout << "Comentario: \n   " << comment << "\n";

}

void Evaluation::setDate(string date){
    Evaluation::date = date;
}

string Evaluation::getDate(){
    return date;
}

void Evaluation::setScore(double score){
    Evaluation::score=score;
}
double Evaluation::getScore(){
    return score;
}

void Evaluation::setComment(string comment){
    Evaluation::comment=comment;
}
string Evaluation::getComment(){
    return comment;
}

void Evaluation::setGuest(Guest* guest){
    Evaluation::guest =guest;
}
Guest* Evaluation::getGuest(){
    return guest;
}

void Evaluation::setOwner(Owner* owner){
    Evaluation::owner = owner;
}
Owner* Evaluation::getOwner(){
    return owner;
}

void  Evaluation ::setId(double id){
    Evaluation::id = id;
}
double Evaluation::getId(){
    return id;
}
