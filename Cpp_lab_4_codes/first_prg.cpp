#include <iostream>
using namespace std;

class admission {
public:
   static int number; 

   static void admitOne() {
       number++;
   }

   friend void admitGroup(); 
};
int admission::number = 0;
void admitGroup() {
   admission::number += 5;
}
int main() {
   admission::admitOne();
   admission::admitOne();
   admitGroup();
   admitGroup();
   cout << "Total number of admitted students: " << admission::number << endl;
   cout<<"done by Ayush Dhakal"<<endl;
   return 0;
}