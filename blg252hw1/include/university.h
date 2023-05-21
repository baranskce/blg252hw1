#include <iostream>
#include <student.h>

class University{
public: 
    University();
    University(std::string, double, double, double, double, std::string = "");
    ~University();
    void evaluate_student(const Student&);
    double get_gpa();
    double get_gre();
    double get_toefl();
    double get_bias();

private:
    std::string uniname;
    double wval_gpa;
    double wval_gre;
    double wval_toefl;
    double biasval;
    std::string country;
};

