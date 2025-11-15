#include<iostream>
#include<conio.h>
using namespace std;
class class_number_2;//*Declaration of the class number 2*/
class class_number_3;//* Declaration of the class number 3
class class_inheritance{public:void inherited_display();};
//*-------------------------------------------------------------------------
class class_number_1 :public class_inheritance{
  private:
  int number_1;
  public:
  void set_value_1(int shared_number_1){
    number_1=shared_number_1;
  }
  void inherited_display(){
  cout << "Value in Class Number 1 is : "<< number_1 << endl;
  }
  friend void addition(class_number_1,class_number_2 ,class_number_3);//*
};//*-------------------------------------------------------------------------------
class class_number_2:public class_inheritance {
  private:
  int number_2;
  public:
  void set_value_2(int shared_number_2){
    number_2=shared_number_2;
  }
  void inherited_display(){
  cout<< "Value in Class Number 2 is : " << number_2 << endl;
  }
  friend void addition(class_number_1,class_number_2,class_number_3);

};//*-------------------------------------------------------------------------------
class class_number_3 :public class_inheritance{
  private:
  int number_3;
  public:
  void set_value_3(int shared_number_3){
    number_3=shared_number_3;
  }
  void inherited_display(){
  cout<<"Value in Class Number 3 is : "<< number_3 <<endl;
  }
  friend void addition(class_number_1,class_number_2,class_number_3);

};//*-------------------------------------------------------------------------------
void addition(class_number_1  object_1, class_number_2 object_2, class_number_3 object_3) {

  int sum  = object_1.number_1 + object_2.number_2 + object_3.number_3;
  cout << "The Sum of the numbers is : "<<sum ;
}
int main(){
  class_number_1 object_1;object_1.set_value_1(100);object_1.inherited_display();
  class_number_2 object_2;object_2.set_value_2(200);object_2.inherited_display();
  class_number_3 object_3;object_3.set_value_3(500);object_3.inherited_display();
  //*calling the friend function by passing objects of two
  addition(object_1,object_2,object_3);
  getch();
}
























Sure, here are some short points on effective studying and long-term retention:

1. Set a Schedule: Consistency is key. Set aside specific times each day for studying.

2. Break it Down: Don't try to cram all the information at once. Break your study material into manageable chunks.

3. Active Learning: Engage with the material. This could be through note-taking, teaching someone else, or discussing the topic.

4. Use Mnemonics: Memory aids like acronyms, visualizations, rhymes, and songs can help remember information.

5. Practice Testing: Regularly test yourself on the material to reinforce your memory.

6. Rest and Repeat: Sleep is crucial for memory consolidation. Also, revisit the material periodically for better long-term retention.

7. Healthy Lifestyle: Regular exercise, a balanced diet, and adequate sleep can enhance cognitive function and memory.

