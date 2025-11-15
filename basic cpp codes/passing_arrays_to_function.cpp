#include <iostream>
#include <conio.h>
using namespace std;
int displayArray(int num[] , int arraysize){
    for(int index = 0 ; index < arraysize ; index++){
        cout << num[index] << "  " << endl;
    }
}
int main (){
    int number[5] = { 10 , 20 , 30 , 40 , 50 } ;
     displayArray(number , 5);
    getch();
}
