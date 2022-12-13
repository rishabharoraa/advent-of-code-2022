#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main() {
    string line;
	ifstream File("input.txt");

    int temp = 0;
    int mx = -1;

    while(getline(File, line)) {
        if(line != "") {
            temp += stoi(line);
            mx = max(temp, mx);
        } else {
            temp = 0;
        }
    }
    cout << mx << endl;

    File.close();
}
