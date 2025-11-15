#include <iostream>
#include <conio.h>
using namespace std;
// declare class
class defaulT{
    public :
    int value ;
    int display(){

        cout << "value : " << value  ;
        cout<< " parameterize constructor"<< endl;
      }
      defaulT(int valuef ){

       value = valuef ;
      }

      defaulT(){

        cout << "default constructor " << endl ;
      }
};
int main(){
   
 defaulT number(1);
 number.display();

 defaulT nothing ;
 getch();

}