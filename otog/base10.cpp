#include <bits/stdc++.h>
using namespace std;
int main(){
  string num; cin >> num;
    for(int i = 2; i <= 9; i++) {
        //char USE[1010+1],ANS[1010+1],BASE[1010*1000];int SED = 0,k=0,l=0,j=0;
        //strcpy(ANS,NUM);
        int remains = 0;
        string ans = "";
        string base;
        while(1){

            //strcpy(USE,ANS);k=0;l=0;SED=0;
            int l = 0;
            int n = 0;
            while(num[n] != '\0'){
                  if (((num[n] - '0' + 10*remains)/i != 0) && l==0) {
                    ans[l] = (num[n] - '0' + 10*remains)/i + '0';
                    l++;
                  }
                  remains = (num[n] - '0' + 10*remains)%i;
                  n++;
            }
            ans[l] = '\0';
            base = remains + '0';
            if(ans[0] == '\0') break;
        }
        printf("%d : ",i);
        for(int o = base.size() - 1; o >= 0; o--) cout << base << "\n"; 
    }
    return 0;
}
