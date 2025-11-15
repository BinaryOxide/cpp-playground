#include <iostream>
#include <string>

struct Student {
  std::string name;
  int marks;
};

int main() {
  const int kNumStudents = 3;
            Student students[kNumStudents];

  for (int i = 0; i < kNumStudents; ++i) {
    std::cout << "Enter name and marks for student " << i + 1 << ": ";
    std::cin >> students[i].name >> students[i].marks;
  }

  std::cout << "\nStudent Name\tMarks\n";
  for (int i = 0; i < kNumStudents; ++i) {
    std::cout << students[i].name << "\t\t" << students[i].marks << "\n";
  }

  return 0;
}
