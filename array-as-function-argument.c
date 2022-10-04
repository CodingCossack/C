//Create a program to find the average marks obtained by a student using a function.

#include <stdio.h>

double findAverage(double marks[5]) {
  double sum = 0.0;

  for (int i = 0; i < 5; ++i) {
    sum = sum + marks[i];
  }

  double average = sum / 5;

  return average;
}

int main() {

  double marks[5] = {54.8, 59.8, 48.7, 42.6, 60.1};

  double result = findAverage(marks);
  printf("%.2lf", result);    // Output = 53.20

  return 0;
}