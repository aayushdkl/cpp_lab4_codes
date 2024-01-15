#include<iostream>
#include <cstring>
using namespace std;

class String {
private:
    char value[100];

public:
    String() {
        value[0] = '\0';
    }
    String(char* strip) { 
        strcpy(value, strip);
    }
    String operator + (String str) {
        String total;
        strcpy(total.value, value);
        strcat(total.value, str.value);
        return total;
    }

    void print() const {
        cout << value;
    }
};

int main() {
    String str1("Hello,beautiful girl ");
    String str2("I love you");
    String total = str1 + str2;
    total.print(); 
    return 0;
}
