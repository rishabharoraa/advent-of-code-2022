/**
 * A -> X -> Rock -> 1
 * B -> Y -> Paper -> 2
 * C -> Z -> Scissors -> 3
 */



#include<bits/stdc++.h>
using namespace std;

int main() {
	string line;
	ifstream File("input.txt");

	int _score = 0;

	while(getline(File, line)) {
		int score = 0;

		if(line[2] == 'X') {
			score += 0;
			if(line[0] == 'A') {
				score += 3;
			} else if(line[0] == 'B') {
				score += 1;
			} else if(line[0] == 'C') {
				score += 2;
			}
 		} else if(line[2] == 'Y') {
 			score += 3;
 			if(line[0] == 'A') {
				score += 1;
			} else if(line[0] == 'B') {
				score += 2;
			} else if(line[0] == 'C') {
				score += 3;
			}
 		} else if(line[2] == 'Z') {
 			score += 6;
 			if(line[0] == 'A') {
				score += 2;
			} else if(line[0] == 'B') {
				score += 3;
			} else if(line[0] == 'C') {
				score += 1;
			}
 		}

		_score += score;
	}
	cout << _score << endl;
}