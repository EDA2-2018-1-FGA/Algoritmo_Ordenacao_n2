#include <bits/stdc++.h>
#include "gaps.h"

#define MAX 100

using namespace std;

int main(){
  vector<long long> numbers;

  srand(time(nullptr));

  cout << "Generate Numbers" << endl;
  for(auto i = 0; i < MAX; i++){
    numbers.push_back(rand() % (2 * MAX ));   
  }

  vector<long long> ordened;

  cout << "Start ShellSort with Fibonacci" <<endl;
  ordened = Gaps::shellsort(numbers, Gaps::fibonacci(MAX));
  for(auto i = 0; i < MAX; i++){
    cout << ordened[i] << endl;   
  }

  cout << "End ShellSort with Fibonacci" <<endl;

  ordened.clear();

  cout << "Start ShellSort with Catalan" <<endl;
  ordened = Gaps::shellsort(numbers, Gaps::catalan(MAX));
  for(auto i = 0; i < MAX; i++){
    cout << ordened[i] << endl;   
  }

  cout << "End ShellSort with Catalan" <<endl;
  return 0;
}
