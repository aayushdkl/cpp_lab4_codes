#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inch;

public:
    Distance() : feet(0), inch(0) {}
    Distance(int f, int i) : feet(f), inch(i) {}

    Distance operator-(Distance d) {
        Distance result;
        result.feet = feet - d.feet;
        result.inch = inch - d.inch;
        if (result.inch < 0) {
            result.feet--;
            result.inch += 12;
        }
        return result;
    }
    void display() {
        cout << "Distance: " << feet << " feet, " << inch << " inches" << endl;
        cout<<"DONE BY AYUSH DHAKAL"<<endl;
    }
};
int main() {
    Distance d1(5, 8);
    Distance d2(3, 10);
    Distance difference = d1 - d2;
    // d1.display();
    // d2.display();
    std::cout << "Difference: ";
    difference.display();
    return 0;
}
