#include <iostream>
using namespace std;

class Student
{
private:
    string first_name;
    string last_name;
    int age;
    int standard;

public:
    //SETTERS
    void set_first_name(string str)
    {
        this->first_name = str;
    }
    void set_last_name(string str)
    {
        this->last_name = str;
    }
    void set_age(int num)
    {
        this->age = num;
    }
    void set_standard(int num)
    {
        this->standard = num;
    }
  
    //GETTERS
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    // concatenate all the attributes
    string to_string()
    {
        return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
