#include<iostream>
using namespace std;

class String {
public:
    string value;

    String(const string& str) : value(str) {}

    // Overload + operator for string concatenation
    String operator + (const String& other) {
        String result(value + other.value);
        return result;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    String s1("kamal");
    String s2(" sharma");

    String s3 = s1 + s2;
    s3.display();
}
