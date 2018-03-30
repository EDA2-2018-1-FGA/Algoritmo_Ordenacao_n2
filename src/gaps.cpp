#include "gaps.h"
#include <bits/stdc++.h>

std::vector<long long>
Gaps::fibonacci(long long max){
  std::vector<long long> resp;
  int current = 1;  

  resp.push_back(1);
  resp.push_back(1);

  while(resp[current] < max){
    resp.push_back(resp[current] + resp[current - 1]);
    current ++;
  }

  return resp;
}

std::vector<long long>
Gaps::catalan(long long max){
  std::vector<long long> resp;
  
  resp.push_back(1);
  resp.push_back(1);

  for(auto i = 2; resp[i-1] < max; i++){
    resp.push_back(0);
    for(auto j = 0; j < i; j++){
      resp[i] += resp[j] * resp[i - j - 1];
    }
  }
  return resp;
}


std::vector<long long> 
Gaps::shellsort(std::vector<long long> vector,
                std::vector<long long> gaps){
  int max_gap = 0;

  for(auto i = 0; gaps[i] < (long long)vector.size(); i++, max_gap = i);

  while(max_gap){
    for(auto i = gaps[max_gap]; i < (long long)vector.size(); i++){
      auto current = vector[i];
      int id = i;
      while(id >= gaps[max_gap] && vector[id - gaps[max_gap]] > current){
        vector[id] = vector[id - gaps[max_gap]];
        id -= gaps[max_gap];
      }
      vector[id] = current;
    }
    max_gap--;
  }

  return vector; 
}
