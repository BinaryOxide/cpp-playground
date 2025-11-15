 #include <iostream>
 using namespace std;
 int main(){ 
 
 int value = 100; 
 
  int *pointer_1;
  pointer_1 = &value;
 
  int **pointer_2;
  pointer_2 = &pointer_1;
 
  int ***pointer_3;
  pointer_3 = &pointer_2;
  //-----------> output
  
  cout << pointer_1 << endl; // output : 0x61ff08
  cout << *pointer_1 << endl;// output : 100
 
  cout << *pointer_2 + 1 << endl;// output : 0x61ff0c
  cout << **pointer_2  << endl;// output : 100
  cout << **pointer_2 + 100  << endl;// output : 200
 
  cout << **pointer_3 << endl;// output : 0x61ff08
  cout << ***pointer_3 << endl;// output : 100
  cout << endl << endl << endl;
 
  ***pointer_3 = 3000;
  cout << "***pointer_3 = 3000" << endl;// output : ***pointer_3 = 3000
  cout << "value = " << ***pointer_3 << endl;// output : value = 3000
 
   cout << endl << endl << endl;
  **pointer_2 = *pointer_1 + 100;
  cout << "**pointer_2 = *pointer_1 + 100; = " << **pointer_2 << endl;
  // output : **pointer_2 = *pointer_1 + 100; = 3100
 
 
  cout << endl << endl ;
  cout <<"pointer_1 = "<< *pointer_1 << endl;// output :pointer_1 = 3100
  cout <<"pointer_2 = "<< **pointer_2 << endl;// output : pointer_2 = 3100
  cout <<"pointer_3 = "<< ***pointer_3 << endl;// output : pointer_3 = 3100
  cout << "value = " << value << endl;// output : value = 3100
 
  return 0;
  
}