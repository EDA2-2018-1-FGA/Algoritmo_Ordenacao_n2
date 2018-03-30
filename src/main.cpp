#include <bits/stdc++.h>
#include "gaps.h"

using namespace std;

int main(){
  cout << "|N |middle(ns)|fibonacci(ns)|catalan(ns)|" << endl;
  cout << "|--|----------|-------------|-----------|" << endl;
  for(long long count = 1; count <= 100; count++){

    int MAX = 100*count;

    vector<long long> numbers;

    srand(time(nullptr));

//    cout << "Generate Numbers" << endl;
    for(auto i = 0; i < MAX; i++){
      numbers.push_back(rand() % (2 * MAX ));   
    }

    vector<long long> ordened;

    auto middle_start_time = std::chrono::high_resolution_clock::now();
    ordened = Gaps::shellsort(numbers);
    auto middle_end_time = std::chrono::high_resolution_clock::now();
 

    //    cout << "Start ShellSort with Fibonacci" << endl;
    auto fib_start_time = std::chrono::high_resolution_clock::now();
    ordened = Gaps::shellsort(numbers, Gaps::fibonacci(MAX));
    auto fib_end_time = std::chrono::high_resolution_clock::now();
    //    for(auto i = 0; i < MAX; i++){
    //      cout << ordened[i] << endl;   
    //    }
    //    cout << "End ShellSort with Fibonacci" << endl;

    ordened.clear();

    //    cout << "Start ShellSort with Catalan" << endl;
    auto catalan_start_time = std::chrono::high_resolution_clock::now();
    ordened = Gaps::shellsort(numbers, Gaps::catalan(MAX));
    auto catalan_end_time = std::chrono::high_resolution_clock::now();
    //    for(auto i = 0; i < MAX; i++){
    //      cout << ordened[i] << endl;   
    //    }
    //    cout << "End ShellSort with Catalan" << endl;
    cout << "|"<< MAX << "|";
    cout << chrono::duration_cast<std::chrono::nanoseconds>(middle_end_time - middle_start_time).count();
    cout << "|";
    cout << chrono::duration_cast<std::chrono::nanoseconds>(fib_end_time - fib_start_time).count();
    cout << "|";
    cout << chrono::duration_cast<std::chrono::nanoseconds>(catalan_end_time - catalan_start_time).count();
    cout << "|" << endl;
  }
  return 0;
}
