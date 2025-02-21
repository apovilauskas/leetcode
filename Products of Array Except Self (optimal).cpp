#include <bits/stdc++.h>

int main()
{
    std::ifstream fd("duom.txt");
    std::ofstream fr("rez.txt");
    std::vector<int> a;
   int temp;
   while(fd >> temp){
       a.push_back(temp);
   }
   
   std::vector<int>ats(a.size());
   ats[0]=1;
   int prod=1;
   for(int i=1; i<a.size(); i++){
       ats[i] = prod * a[i-1];
       prod *= a[i-1];
   }

prod=1;
bool vienas = 0;
for(int i=a.size()-1; i>=0; i--){
    if(vienas ==0) {
        vienas = 1;
        continue;
    }
       ats[i] *= a[i+1] * prod;
       prod *= a[i+1];
   }

for(int i=0; i<ats.size(); i++){
        fr << ats[i] << ' ' ;
    }

    return 0;
}
