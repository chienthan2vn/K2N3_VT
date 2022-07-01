// C++ program to print all combinations of size
// k of elements in set 1..n
#include <bits/stdc++.h>
using namespace std;

void makeCombiUtil(vector<vector<int> >& ans,
	vector<int>& tmp, int n, int left, int k)
{
	// Pushing this vector to a vector of vector
	if (k == 0) {
		ans.push_back(tmp);
		return;
	}

	// i iterates from left to n. First time
	// left will be 1
	for (int i = left; i <= n; ++i)
	{
		tmp.push_back(i);
		makeCombiUtil(ans, tmp, n, i + 1, k - 1);

		// Popping out last inserted element
		// from the vector
		tmp.pop_back();
	}
}

// Prints all combinations of size k of numbers
// from 1 to n.
vector<vector<int> > makeCombi(int n, int k)
{
	vector<vector<int> > ans;
	vector<int> tmp;
	makeCombiUtil(ans, tmp, n, 1, k);
	return ans;
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while(t--){
        // given number
        int n;
        int k;
        cin >> n >> k;
        vector<vector<int> > ans = makeCombi(n, k);
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << "[";
            for (int j = 0; j < ans[i].size(); j++) {
                if(j==ans[i].size() - 1)    cout << ans.at(i).at(j);
                else
                cout << ans.at(i).at(j) << " ";
            }
            cout << "]";
            cout << endl;
        }
	}
	return 0;
}