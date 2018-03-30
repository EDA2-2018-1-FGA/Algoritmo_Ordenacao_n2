#include <bits/stdc++.h>
#include "gaps.h"

#define MAX 1000000000

using namespace std;

int main(){
  vector<long long> fib = Gaps::fibonacci(MAX);

  for(auto v : fib){
    cout << v << endl;
  }

  cout << "----------------------------------" << endl;
  vector<long long> catalan = Gaps::catalan(MAX);

  for(auto v : catalan){
    cout << v << endl;
  }

  return 0;
}
