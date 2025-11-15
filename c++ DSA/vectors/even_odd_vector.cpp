#include<iostream>
#include<vector>
using namespace std;
int print_vector_function( vector <int> passed_vec)
    {
    // cout << endl;
       for( int traverse_loop : passed_vec)
          {
            cout << traverse_loop << " " ;
          }
    }
int main()
{
  vector <int> vec_of_even = {};
  vector <int> vec_of_odd = {};
  int temp_data;
  for(int data_loop = 1; data_loop <=100; data_loop++)
     {
      if( data_loop % 2 ==0)
        {
          vec_of_even.push_back(data_loop);
        }
      else {vec_of_odd.push_back(data_loop);}

     };
     
      cout <<"vector of even numbers : ";
      print_vector_function(vec_of_even);
      cout << endl;  
      cout << "vector capacity : " << vec_of_even.capacity() << endl;
      cout << "vector front : "    << vec_of_even.front() << endl;
      cout << "vector back : "     << vec_of_even.back() << endl; 
      cout << "vector size : "     << vec_of_even.size() << endl;
      cout << "vector at(2) : "    << vec_of_even.at(2) << endl;

      cout << endl<<endl;


     cout <<"vector of odd numbers : ";
     print_vector_function(vec_of_odd);  
     cout << endl;  
     cout << "vector capacity : " << vec_of_odd.capacity() << endl;
     cout << "vector front : "    << vec_of_odd.front() << endl;
     cout << "vector back : "     << vec_of_odd.back() << endl; 
     cout << "vector size : "     << vec_of_odd.size() << endl;
     cout << "vector at(2) : "    << vec_of_odd.at(2) << endl;  


     //erase all vectors
       vec_of_even.clear();
       vec_of_odd.clear();
       cout << endl;
       cout << "vectors after the 'clear' operation :";
       print_vector_function(vec_of_even);
       if( vec_of_even.size() == 0)
         {
          cout << endl << "vector of even number = null";
         }
       print_vector_function(vec_of_odd);
       if( vec_of_odd.size() == 0)
         {
          cout << endl << "vector of odd number = null";
         }
     
     return 0;
}    