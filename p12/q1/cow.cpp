#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow(){
    strcpy(name,"no name");
    char * hobby = nullptr;
    double weight = 0.0;    
}

Cow::Cow(const char *nm, const char *ho, double wt){
    strcpy(name, nm);
    hobby = new char[strlen(ho) +1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c){
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) +1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow(){
    delete [] hobby;
}

void Cow::ShowCow() const{
    using std::cout;
    cout<<"name: "<< name <<"\n"
        <<"hobby: " << hobby << "\n"
        <<"weight: "<< weight << "\n";
}

Cow & Cow::operator=(const Cow &c){
    delete [] hobby;
    strcpy(name,c.name);
    hobby = new char[strlen(c.hobby) +1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

