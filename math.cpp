    #include<bits/stdc++.h>
    using namespace std;
    class Solution{
        public:
        vector<int> duplicates(int ar[], int n)
        {
        sort(ar, ar+n);
        int c = 0, t = -1;
        for(int i = 0; i < n; i++)
        {
            if(ar[i] == ar[i+1] && t != ar[i+1])
            {
                cout << ar[i] << " ";
                c = 1;
                t = ar[i];
            }
        }
        if(c == 0)
        {
            cout << -1;
        }   
    }
    };
    int main()
    {
        int t;
        cin >> t;
        while(t-- > 0)
        {
            int n;
            cin >> n;
            int a[n];   
            for(int i = 0; i < n; i++) cin >> a[i];
            Solution obj;
            vector<int> ans = obj.duplicates(a,n);
            for(int i : ans) cout << i << " ";
            cout << endl;
        }
        return 0;
    }


    