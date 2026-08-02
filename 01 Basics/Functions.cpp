#include<bits/stdc++.h>
using namespace std;
/*
  Functions are set of code which perform something for you
  Functions are used to modularise code 
  Functions are used to increase readability
  Functions are used to use the same code multiple times
   void -> which doesn`t return anything
   return
   paramterized 
   non parameterized
*/
// void printName(string name){
//   cout << "Tapash" << name << endl;
// }
// int main(){
//   string name;
//   cin >> name;
//   printName(name);
//   return 0;
// }

// Take two numbers and print its sum

// int sum(int num1, int num2){
//   int num3 = num1 + num2;
//   return num3;
// }
// int main(){
//   int num1, num2;
//   cin >> num1 >> num2;
//   int result = sum(num1, num2);
//   cout << result;
//   return 0;
// }


// pass by value
void doSomething(int num){
  cout << num << endl;
  num += 5;
  cout << num << endl;
  num += 5;
  cout<<num << endl;
}
int main(){
  int num = 10;
  doSomething(num);
  cout << num << endl;
  return 0;
}