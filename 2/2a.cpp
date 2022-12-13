/**
 * A -> X -> Rock
 * B -> Y -> Paper
 * C -> Z -> Scissors
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
			score += 1;
			if(line[0] == 'A') {
				score += 3;
			} else if(line[0] == 'C') {
				score += 6;
			}
		} else if(line[2] == 'Y') {
			score += 2;
			if(line[0] == 'B') {
				score += 3;
			} else if(line[0] == 'A') {
				score += 6;
			}
		} else if(line[2] == 'Z') {
			score += 3;
			if(line[0] == 'C') {
				score += 3;
			} else if(line[0] == 'B') {
				score += 6;
			}
		}

		_score += score;
	}
	cout << _score << endl;
}