#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define nline "\n"
const long long INF = 1e15;
#define sz(x) ((int)(x).size())
void run_case();

int32_t main() {

    long long test_cases=1;                   
    cin >> test_cases;
    while(test_cases--){
        run_case();
    }
}

long long healper(long long x) {
  long long op = 1;
  while(x%4==0) {
    x /= 2;
    op++;
  }
  return op;
}

void run_case() {
  int n; cin >> n;
  vector<long long> a(n); 
  for(auto& x: a) {
    cin >> x;
  }
  vector<long long> evn;
  long long odd = 0;
  long long ans = 0;
  for(auto& x: a) {
    if(x&1) odd++;
    else {
      if(x%2==0 && x%4!=0) {
        ans++;
        odd++;
      }
      else evn.pb(x);
    }
  }
  if(odd>0) {
    cout << ans + sz(evn) << nline;
    return;
  }
  long long mn = INF;
  for(auto& x: evn) {
    long long y = healper(x);
    mn = min(mn, y);
  }
  cout << mn + sz(evn)-1 << nline;
}