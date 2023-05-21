#include <string>
#include <iostream>
#include <student.h>

Student::Student(){
    this->stuname = "";
    this-> gpa = 0;
    this->gre = 0;
    this->toefl = 0;

    this->appnum = 0;
};


Student::Student(std::string namestu, double valgpa, int valgre, int valtoefl){
    this->stuname = namestu;
    this-> gpa = valgpa;
    this->gre = valgre;
    this->toefl = valtoefl;

    this->appnum = 0;

    std::cout << namestu << " logged in to the system." << std::endl;
};

Student::Student(const Student& student){
    this->stuname = student.stuname;
    this->gpa = student.gpa;
    this->gre = student.gre;
    this->toefl = student.toefl;

    this->appnum = 0;

    std::cout << student.stuname << " logged in to the system." << std::endl;
};

Student::~Student(){
    std::cout << this->stuname << " logged out of the system with " << this->appnum << " application(s)." << std::endl;
};

void Student::set_name(std::string newname){
    this->stuname = newname;
};

std::string Student::get_name() const{
    return this->stuname;
};

void Student::inc_appnum() const{
    this->appnum = this->appnum + 1;
};

double Student::get_gpa() const{
    return this->gpa;
};

int Student::get_gre() const{
    return this->gre;
};
int Student::get_toefl() const{
    return this->toefl;
};