//array_sum_of_diagonal_element_of_matrix.cpp

#include <iostream>
#include <conio.h>
using namespace std;
 int main(){
 int rowin , colin ,row , col , index1 , index2   ;
 int  sum = 0 ,usum = 0 , lsum = 0 ;

 cout << "Enter the row : ";
  cin >> rowin ;
 cout << "Enter the col : ";
  cin >> colin ; 

int a[rowin][colin];
//--------------------------------------------------------------
//----------------------------------------------taking input----
 for ( row = 0 ; row < rowin ; row++ )
    {
        for( col = 0 ; col < colin ; col ++ )
           {
            cout << "a["<<row<<"]["<<col<<"]"<<  " = " ;
            cin >> a[row][col];
           }
           cout << endl << endl;
    }

//--------------------------------------------------------------
// getiing out put array cube 

for ( row = 0 ; row < rowin ; row++ )
    {
        for( col = 0 ; col < colin ; col ++ )
           {
            // cout << "a["<<row<<"]["<<col<<"]"<<  " = " ;
            cout << a[row][col] << " "  ;
           } 
           cout << endl ;
    } 

//--------------------------------------------------------------
//---------------------------------sum--------------------------
cout << endl << endl;
for ( row = 0 ; row < rowin ; row++ )
    {
        for( col = 0 ; col < colin ; col ++ )

         //--------------------------- SUM of diagonal
           if (row ==  col)
           {  
                 sum = sum + a[row][col];

            cout << "a["<<row<<"]["<<col<<"]"<<  " = " ;
            cout << a[row][col] << " "  ;
             cout << endl;
           } 
        
           
    }
cout << "Sum of diagonal element is : " << sum ;

cout << endl << endl;
for ( row = 0 ; row < rowin ; row++ )
    {
        for( col = 0 ; col < colin ; col ++ )

         //--------------------------- UPPER SUM
           if (row <  col)
           {  
                 usum = usum + a[row][col];

            cout << "a["<<row<<"]["<<col<<"]"<<  " = " ;
            cout << a[row][col] << " "  ;
             cout << endl;
           } 
        
           
    }
cout << "Sum of upper  element is : " << usum ;

cout << endl << endl;
for ( row = 0 ; row < rowin ; row++ )
    {
        for( col = 0 ; col < colin ; col ++ )

         //--------------------------- LOWER SUM
           if (row >  col)
           {  
                 lsum = lsum + a[row][col];

            cout << "a["<<row<<"]["<<col<<"]"<<  " = " ;
            cout << a[row][col] << " "  ;
            cout << endl;
           } 
        
           
    }
cout << "Sum of upper  element is : " << lsum ;

getch();
 }