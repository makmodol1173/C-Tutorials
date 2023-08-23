#include<bits/stdc++.h>
using namespace std;
class Person {
    string name;
    float height;
    int age;

public:
    Person(string n, float h, int a) {
        name = n;
        height = h;
        age = a;
    }
    void display () {
        cout << "Name: " << name << endl;
        cout << "Height: " << height << " feet" << endl;
        cout << "Age: " << age << " years" << endl;
    }
};
int main() {
    Person* p = new Person("Makmudul", 5.8, 23);

    p->display();
    delete p;

    return 0;
}
