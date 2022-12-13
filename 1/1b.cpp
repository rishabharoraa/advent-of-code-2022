#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main() {
    string line;
	ifstream File("input.txt");

    int temp = 0;

    int f=-1,s=-1,t=-1;

    while(getline(File, line)) {
        if(line != "") {
            temp += stoi(line);
        } else {
            if(temp > f) {
                t = s;
                s = f;
                f = temp;
            } else if(temp > s) {
                t = s;
                s = temp;
            } else if(temp > t) {
                t = temp;
            }
            temp = 0;
        }
    }
    cout << f + s + t << endl;

    File.close();
}
