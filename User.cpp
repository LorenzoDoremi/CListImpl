#include <iostream>


class User
{
private:
    int age;     // Attribute (int variable)
    std::string name; // Attribute (string variable)                 // The class
public:          // Access specifier
    int getAge()
    {
        return age;
    }
    std::string getName()
    {
        return name;
    }
    void setAge(int tage)
    {
        age = tage;
    }
    void setName(std::string tname)
    {
        name = tname;
    }
};
