#include <iostream>
#include <conio.h>
using namespace std;
void function( int *index , int size){
  int loop;
  for (loop = 0 ; loop < size ; loop++){
    index[loop] = 2*index[loop];
  }
}
int main(){

  int index[] = {1,2,3,4,5};
  int size = sizeof(index) / sizeof(index[0]);
  cout << "size of index = " << size << endl;
   function(index , size);

   int loop; int range = size;
  for (loop = 0 ; loop <size ; loop++){
     cout << "array " << loop << " = " << index[loop] << endl;

  }

    getch();
}