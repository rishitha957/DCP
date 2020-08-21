#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using std::vector;
using namespace std;

bool cmp(const pair<int, int>i, const pair<int, int>j) 
{ 
    return double(i.first/i.second) > double(j.first/j.second); 
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  // write your code here
  vector< pair<int, int> > w_b;
  for(int i=0;i<weights.size();i++){
     w_b.push_back(make_pair(values[i],weights[i]));
  }
  int curr_weight=0;
  double final_value = 0.000;
  setprecision(3);
  sort(w_b.begin(), w_b.end(), cmp);
  for(int i=0;i<w_b.size();i++){
    if(curr_weight+w_b[i].second <= capacity){
        curr_weight+=w_b[i].second;
        final_value+=w_b[i].first;
    }
    else{
        int remaining = capacity-curr_weight;
        final_value+=w_b[i].first*((double)remaining/w_b[i].second);
        return final_value;
    }
  }
  return final_value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  // std::cout.precision(10);
  // printf("%s\n",typeof(optimal_value) );
  std::cout<<optimal_value<<setprecision(3)<< std::endl;
  return 0;
}
