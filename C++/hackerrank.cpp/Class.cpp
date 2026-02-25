#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Student {
private:
    int age, standard;;
    string first_name, last_name;

public:

    void set_first_name(string new_first_name) { first_name = new_first_name; }
    void set_last_name(string new_last_name) { last_name = new_last_name; }
    void set_standard(int new_standard) { standard = new_standard; }
    void set_age(int new_age) { age = new_age; }

    int get_age() const { return age; }
    int get_standard(){ return standard; }
    string get_first_name(){ return first_name; }
    string get_last_name(){ return last_name; }

    string to_string(){
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    cout<< "\n";
    cout << st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << endl;
    cout << "\n";
    cout << st.to_string() << endl;

    return 0;
}
