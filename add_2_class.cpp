#include <iostream>
using namespace std;

class comp1 {
public:
   int value1;
};

class comp2 {
public:
   int value2;
   friend int add(comp1 c1, comp2 c2);
};

int add(comp1 c1, comp2 c2) {
   return c1.value1 + c2.value2; 
}

int main() {
   comp1 c1;
   c1.value1 = 10;

   comp2 c2;
   c2.value2 = 20;

   int sum = add(c1, c2);

   cout << "Sum of values: " << sum << endl;
   cout<<"done by Ayush Dhakal"<<endl;

   return 0;
}