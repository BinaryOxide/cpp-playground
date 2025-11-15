#include<iostream> 
#include<vector>
#include<conio.h>
using namespace std; 
int print_vector_function(vector <int> vec2)
    {
     cout << endl << "vector : "; 
      for(int printing_loop : vec2)
         {
           cout << printing_loop << " ";
         }
    }
int main(){
                                                                                                                                                     
 vector <int> vec = {1,2,3,4};

 //vector indexing starts from 0
 cout << vec[1]<<endl ;
// print current vector 
   print_vector_function(vec); 

// let's see the vector's capacity
   cout << endl << "vector capacity = " << vec.capacity() << endl;
// let's push 2 new elements
   vec.push_back(22); 
   vec.push_back(99);
   print_vector_function(vec);
   cout << endl << "vector capacity : " << vec.capacity() << endl;
   cout  << "vector front : " << vec.front() << endl;
   cout << "vector back : " << vec.back() << endl; 
   cout << "vector size : " << vec.size() << endl;
   cout << "vector at(2) : " << vec.at(2) << endl;


// vector don't decrease the capacity autometically, example
   // let's delete some element
      vec.pop_back();   
      vec.pop_back();                                             
      vec.pop_back();                                             
      vec.pop_back();


      cout << endl;                                             
      print_vector_function(vec);

      
      cout << endl << "vector capacity : " << vec.capacity() << endl;
      cout  << "vector front : " << vec.front() << endl;
      cout << "vector back : " << vec.back() << endl; 
      cout << "vector size : " << vec.size() << endl;
      cout << "vector at(2) : " << vec.at(2) << endl; 
       vec.shrink_to_fit();                                          
       cout  << "vector capacity after fit to its size : " << vec.capacity() << endl;                                            
                                                                                                                                              getch();      
                                                                                                                                                     
}