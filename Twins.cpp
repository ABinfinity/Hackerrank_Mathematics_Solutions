#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector< ll > primes;
int Prime[100001];
void prime(){
       Prime[0] = Prime[1] = 1;
   for(int i = 2 ; i <= 1e5 ; ++i ){
            if(!Prime[i]){
              primes.push_back(i);
              for(int j = i + i ; j <= 1e5 ; j += i )
                 Prime[j] = 1;
            }
   }
}
int arr[1000001];
int main(){
                     cin.sync_with_stdio(false);
                     prime();
                     int N , M;
                     cin >> N >> M;
                       int range = M - N + 1;
                     for(int i = 0 ; i  <= range ; ++i )   arr[i] = 1;
                     for(int i = 0 ; i < primes.size() && primes[i] * primes[i] <= M ; ++i ){
                         int start = (N/primes[i]) * primes[i];
                           if(N % primes[i] != 0 )
                            start += primes[i];
                            if(start <= 1e5){
                            if(!Prime[start])
                            start += primes[i];
                            }
                            for(int j = start ; j <= M ; j += primes[i])
                               arr[j - N] = 0;
                      }
                      primes.clear();
                      for(int i = 0 ; i < range ; ++i ){
                      if(arr[i]){
                        int P = i + N;
                        if(P > 1 )
                        primes.push_back(P);
                      }
                      }
                      int ans = 0;
                      for(int i = 1 ; i < primes.size() ; ++i )
                      if(primes[i] == 2 + primes[ i - 1 ])
                      ++ans;
                      cout << ans << endl;

}
