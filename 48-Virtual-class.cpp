#include <iostream>
using namespace std;

class Animal {
public:
    int id;
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

class Tiger : virtual public Animal {
};

class Lion : virtual public Animal {
};

class Liger : public Tiger, public Lion {
};



class Person {
public:
    string name;
    void showName() {
        cout << "Name: " << name << endl;
    }
};

class Teacher : virtual public Person {
public:
    void teach() {
        cout << "Delivering a lecture in class..." << endl;
    }
};

class Researcher : virtual public Person {
public:
    void research() {
        cout << "Conducting research in the lab..." << endl;
    }
};

class TeachingAssistant : public Teacher, public Researcher {
public:
    void work() {
        cout << "TA is managing both responsibilities." << endl;
    }
};
int main() {
    Liger myLiger;

    myLiger.id = 45; 
    myLiger.eat();

    cout << "Liger ID: " << myLiger.id << endl;


    TeachingAssistant ta;

    ta.name = "Hisaan";
    ta.showName();
    
    ta.teach();
    ta.research();
    ta.work();

    return 0;
}