//https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

string c=a;
    reverse(c.begin(),c.end());
    string b=a+"#"+c;
    int i=0;
    int n=b.size();
    int j=1;
    vector<int>v(n,0);
    while(j<n){
        if(b[i]==b[j]){
            v[j]=i+1;
            i++;
            j++;
        }
        else {
            while(i>0 && b[i]!=b[j]){
                i=v[i-1];
            }
            if(b[i]==b[j]){
                v[j]=i+1;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    }
    return a.size()-v[n-1];
