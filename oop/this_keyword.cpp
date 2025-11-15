#include <iostream>
#include <conio.h>
#include<string>
using namespace std;
class someone{
    public:
        string name;

        someone(string name ){
            this -> name = name;
        }
     void display(){
        cout << name << endl;
     }
};
int main(){
    someone member1("OBITO");
    member1.display();
    getch();

}