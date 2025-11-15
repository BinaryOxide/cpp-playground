#include <iostream>
#include <conio.h>
   using namespace std;
     int main()
  {

int  input1 ;
  char input2 ;
  
cout <<"start  number pattern !"                             << endl << endl;
cout <<"For pattern 1  (1>12>123)                press     a" <<endl;
cout <<"For pattern 2  (1>22>333)                press     b" <<endl;
cout <<"For pattern 3  (binary 1 - 1>00>111)     press     c" <<endl;
cout <<"For pattern 4  (binary 2 - 1>10>101)     press     d" <<endl;

cout << endl << endl;
cout <<"start  character pattern !"<<endl;

cout <<"For pattern 5  (a>ab>abc)                press     e" <<endl;
cout <<"For pattern 6  (a>bb>ccc)                press     f" <<endl;

cout << endl << endl;
cout <<"Start reverse pattern !"<< endl;

cout <<"For pattern 7  (123>12>1)                press     g" <<endl;
cout <<"For pattern 8  (333>22>1)                press     h" <<endl;
cout <<"For pattern 9  (binary 1 - 111>00>1)     press     i" <<endl;
cout <<"For pattern 10 (binary 2 - 101>10>1)     press     j" <<endl;
cout <<"For pattern 11 (character abc<ab<c)      press     k" <<endl;
cout <<"For pattern 12 (character ccc<bb<a)      press     l" <<endl;

cout << endl << endl << endl;
cout << "select character : ";


    tolower(input2); 
     cin >> input2;
     
cout << endl ;
switch(input2)
      {
      case 'a':
          {   // start of pattern 1  (1>12>123)

            int num , row , col;
              cout << "Enter number of lines : ";
                 cin >> num;
              for ( row = 1 ; row <= num  ;  row++ )
                  {
                  for (col = 1 ; col <=row ; col++)
                      {
                         cout << " " << col;
                      }
                 cout << endl;    
                  } break;
          }   // end of pattern 1   (1>12>123)

      case 'b':
          {  // start of pattern 2   (1>22>333)

            int num , row , col;
              cout <<"Enter the number of lines :";
                cin >> num;
              for( row = 1 ; row <= num ; row++)
                 {
                    for (col = 1 ; col <= row ; col++)
                        {
                              cout << " " << row;
                        }
                 } break;  

          }   // end of of pattern 2   (1>22>333)
  
      case 'c':
           {  // START OF pattern 3  (binary 1 - 1>00>111)

            int num , row , col;
              cout << "Enter number of lines : ";
              cin >> num;
              for ( row = 1 ; row <= num  ;  row++ )
                  {
                    for (col = 1 ; col <=row ; col++)
                        {
                           cout << " " << (row % 2);
                        }
                    cout << endl;    
                  } break; 

           }  // END OF pattern 3  (binary 1 - 1>00>111)

      case 'd':
           {  // start of pattern 4  (binary 2 - 1>10>101)

            int num , row , col;
               cout << "Enter number of lines : ";
               cin >> num;
               for ( row = 1 ; row <= num  ;  row++ )
                   {    
                     for (col = 1 ; col <=row ; col++)
                         {
                            cout << " " << (col % 2);
                         }
                     cout << endl;    
                   }break;
           } // end of pattern 4  (binary 2 - 1>10>101)
   
      case 'e':
          {    // start of pattern 5  (a>ab>abc)
          char   num , row , col;
                cout << "Enter number of lines : ";
                cin >> num;
                for ( row = 'a' ; row <= num  ;  row++ )
                    {
                      for (col = 'a' ; col <=row ; col++)
                          {
                             cout << " " << col;    // a
                          }                         // b b
                      cout << endl;                 // c c c   
                    } break;
          }   // end of pattern 5  (a>ab>abc)

      case 'f':
          { // start of  pattern 6  (a>bb>ccc)
                      char   num , row , col;
                cout << "Enter number of lines : ";
                cin >> num;
                for ( row = 'a' ; row <= num  ;  row++ )
                    {
                      for (col = 'a' ; col <=row ; col++)
                          {
                             cout << " " << row;     // a
                          }                          // b  b
                      cout << endl;                  // c  c   c
                    } break;
          } // end of    pattern 6  (a>bb>ccc)


//    !     start reverse pattten 


      case 'g':
          {

          int num , row , col;
        cout << "Reverse pattern ";
        cout << endl;  
cout << "Enter number of lines : ";
cin >> num;
for ( row = num ; row >=1  ;  row-- )
    {   
      for (col = 1 ; col <=row ; col++)
          {
              cout << " " << col ;
          }
      cout << endl;    
    } break;
        
          }    

     case 'h':
         {

         int num , row , col;
cout << "Enter number of lines : ";
cin >> num;
for ( row = num ; row >=1  ;  row-- )
    {
      for (col = 1 ; col <=row ; col++)
          {
              cout << " " << (row % 2) ;
          }
      cout << endl;    
    } break;

         }  

    default:
           {
            cout << "character isn't valid !"<<endl<< "Please enter enter a valid character !";
           }
      }

getch();
  }     