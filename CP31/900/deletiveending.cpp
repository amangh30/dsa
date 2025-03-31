        #include<bits/stdc++.h>
        using namespace std;

        void solve(){
            string s1,s2;
            cin>>s1>>s2;

            bool flag = false;

            int n = s1.length();
            int j=0;

            int n2 = s2.length();

            unordered_map<char,int> mpp;

            for(int i=0;i<n;i++){
                if(s1[i]==s2[j]){
                    j++;
                    mpp[s1[i]]++;
                    if(j==n2){
                        flag = true;
                    }
                }

                if(j==n && s2.find(s1[i]) != string::npos && mpp[s1[i]]>=1){
                    flag = false;
                    j=0;
                    mpp.clear();
                }

            }

            if(flag){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }

        int main(){
            ios::sync_with_stdio(false);
            cin.tie(NULL);

            int t;
            cin>>t;

            while(t--){
                solve();
            }

            return 0;
        }
