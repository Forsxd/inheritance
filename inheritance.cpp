#include <iostream>
#include <string>

using namespace std;

class Human {
private:
    string name;
public:
    string getName() {
        return name;
    }
    void setName(string name) {
        this->name = name;
    }
};

class Student : public Human {
public:
    string group;
    void learn() {
        cout << " is learning" << endl;
    }
};

class ExtramuralStudent : public Student {
public:
    void learn() {
        cout << " is learning on evenings" << endl;
    }
};

class Professor : public Human {
public:
    string subject;
};

class A {
public:
    string msgOne = "Message 1"; /*Паблик доступен всем и везде*/
private:
    string msgTwo = "Message 2"; /*Прайвет доступен только в своем классе*/
protected:
    string msgThree = "Message 3"; /*Протектед доступен в своем и в наследуемом классе, но не разрешает обращаться на уровне объекта класса*/
};

class B : public A {
public:
    void printMsg() {
        cout << msgOne << endl;
        msgThree = "SOSI";
    }
};

int main()
{
    Human hm;
    Student st;
    st.setName("Aurore Cassel");
    cout << st.getName();
    st.learn();
    ExtramuralStudent ExSt;
    ExSt.setName("Panam Palmer");
    cout << ExSt.getName();
    ExSt.learn();
    B b;
    b.printMsg();
}
