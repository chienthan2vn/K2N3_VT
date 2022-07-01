#include<bits/stdc++.h>

using namespace std;

bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int, vector<int>> graph; 
        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]); 
            graph[edge[1]].push_back(edge[0]); 
        }
        stack<int> stk; 
        stk.push(start); 
        unordered_set<int> seen = {start}; 
        while (stk.size()) {
            int n = stk.top(); stk.pop(); 
            if (n == end) return true; 
            for (auto& nn : graph[n]) 
                if (!seen.count(nn)) {
                    seen.insert(nn); 
                    stk.push(nn); 
                }
        }
        return false; 
    }

    int findCenter(vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) {
            return edges[0][0];
        } else {
            return edges[0][1];
        }
    }
int main(){
    int n,source,destination;
    cin >> n;
   
    vector<int> nho;
    vector<vector<int> > luu;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;

        nho.push_back(a);
        nho.push_back(b);
        luu.push_back(nho);
        nho.clear();
        }
    /*
    for(int i=0; i<luu.size(); i++){
        for(int j=0; j<luu[i].size(); j++){
            cout << luu[i][j] << " ";
        }
        cout << endl;
    }
    
    if(validPath(n,luu,source,destination)==true)   cout <<"true";
    else cout << "false";
    */
    int k = findCenter(luu);
    cout << k << endl;
    return 0;
}