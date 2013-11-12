#include <iostream>

using namespace std;

int main(){
  for (int i = 1; i <= 100; i++){
    bool isThreeMultiples = (i % 3 == 0);
    bool isFiveMultiples = (i % 5 == 0);
    bool isBothMultiples = isThreeMultiples && isFiveMultiples;
    if (isBothMultiples){
      cout << "FizzBuzz" << endl;
    }
    else if (isFiveMultiples){
      cout << "Buzz" << endl;
    }
    else if (isThreeMultiples){
      cout << "Fizz" << endl;
    }
    else {
      cout << i << endl;
    }
  }
  return 0;
}
