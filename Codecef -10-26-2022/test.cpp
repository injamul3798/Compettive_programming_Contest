// C++ program to compute
// all the possible
// pairs that forms a
// pythagorean triple
// with a given value
#include <bits/stdc++.h>
using namespace std;

// Function to generate all
// possible pairs
vector<pair<int, int> > Pairs(int C)
{
	// Vector to store all the
	// possible pairs
	vector<pair<int, int> > ans;

	// Checking all the possible
	// pair in the range of [1, c)
	for (int i = 1; i < C; i++) {
		for (int j = i + 1; j < C;
			j++) {

			// If the pair satisfies
			// the condition push it
			// in the vector
			if ((i * i) + (j * j) == (C * C)) {
				ans.push_back(make_pair(i, j));
			}
		}
	}
	return ans;
}

// Driver Program
int main()
{
	int C = 100;
	vector<pair<int, int> > ans
		= Pairs(C);

	// If no valid pair exist
	if (ans.size() == 0) {
		cout << "No valid pair exist"
			<< endl;
		return 0;
	}

	// Print all valid pairs
	for (auto i = ans.begin();
		i != ans.end(); i++) {
		cout << "(" << i->first << ", "
			<< i->second << ")" << endl;
	}

	return 0;
}
