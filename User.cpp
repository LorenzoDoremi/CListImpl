

class User
{
private:
    int age;     // Attribute (int variable)
    string name; // Attribute (string variable)                 // The class
public:          // Access specifier
    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }
    void setAge(int tage)
    {
        age = tage;
    }
    void setName(string tname)
    {
        name = tname;
    }
};
