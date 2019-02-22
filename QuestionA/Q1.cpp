#include <iostream>

using namespace std;

class Solution {
public:
	bool IsOverlap (int x1, int x2, int x3, int x4) {

		int factor = (x1 - x2) * (x3 - x4);
		/* Two vectors has same directions */
		if ( factor > 0) {
			if (x2 < x3 || x4 < x1) { return false; }
			return true;
		}

		/* Two vectors has different directions */
		if (factor < 0) {
			if (x3 > x4) {
				if (x2 < x4 || x3 < x1) { return false; }	
			}
			if (x1 > x2) {
				if (x2 > x4 || x3 > x1) { return false; }	
			}
			return true;
		}

		/* One of the vector has only one number */
		if (x1 - x2 == 0) {
			if (x1 < x3 || x1 > x4) { return false; }
			return true;
		}
		else {
			if (x3 < x1 || x3 > x2) { return false; }
			return true;
		}

	}
};

int main() {

	Solution* solution = new Solution();

	cout << solution -> IsOverlap(1, 5, 6, 7) << endl;
	cout << solution -> IsOverlap(1, 5, 5, 6) << endl;
	cout << solution -> IsOverlap(1, 5, 6, 4) << endl;
	cout << solution -> IsOverlap(1, 5, 5, 5) << endl;

	return 0;
}