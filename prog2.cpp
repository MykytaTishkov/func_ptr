#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Greating
{
private:
    string name;
public:
    Greating(string name_new) 
        : name(name_new)
    {}
    void print_one();
    void print_two();
    void print_three();
    void print_name();
};

void Greating::print_one()
{
    cout << "One!" << endl;
}

void Greating::print_two()
{
    cout << "Two!" << endl;
}

void Greating::print_three()
{
    cout << "Three!" << endl;
}

void Greating::print_name()
{
    cout << this->name << endl;
}


int main()
{
    typedef void (Greating::* method_arr)();

    Greating first("first");

    method_arr ArrayFunk[4] = {&Greating::print_one, &Greating::print_two, &Greating::print_three, &Greating::print_name};
    for(int i = 0; i < 4; i++)
    {
        (first.*ArrayFunk[i])();
    }
    return 0;
}