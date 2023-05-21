#include "university.h"
#include <string>
#include <iostream>

University::University(){

    this->uniname = "";
    this->country = "";
};

University::University(std::string nameuni, double gpa_wval, double gre_wval, double toefl_wval, double valbias, std::string country){
    this->wval_gpa = gpa_wval;
    this->wval_gre = gre_wval;
    this->wval_toefl = toefl_wval;
    this->biasval = valbias;
    this->uniname = nameuni;
    this->country = country;
};

University::~University(){

};

double University::get_gpa(){
    return this->wval_gpa;
};

double University::get_gre(){
    return this->wval_gre;
};

double University::get_toefl(){
    return this->wval_toefl;
};
double University::get_bias(){
    return this->biasval;
};

void University::evaluate_student(const Student& stud){
    stud.inc_appnum();
    double sum = (stud.get_gpa() * this->get_gpa()) + (stud.get_gre() * this->get_gre()) + (stud.get_toefl() *this->get_toefl());
    double act = sum + this->get_bias();

    if(act > 0)
        std::cout << stud.get_name() << " is admitted to " << this->uniname << "." << std::endl;
    else    
        std::cout << stud.get_name() << " is rejected from " << this->uniname << "." << std::endl;
};
