#include <iostream>

class Student
{
public:
    Student();
    Student(std::string, double, int, int);
    Student(const Student &);
    ~Student();

    void set_name(std::string);
    std::string get_name() const;
    void inc_appnum() const;
    double get_gpa() const;
    int get_gre() const;
    int get_toefl() const;

private:
    mutable int appnum;
    std::string stuname;
    mutable double gpa;
    int gre;
    int toefl;
};
