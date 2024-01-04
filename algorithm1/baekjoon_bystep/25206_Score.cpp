#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

double rate[] = { 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0 };

double whichRate(double rate[], string se) {
    if (se == "A+")
        return rate[0];
    else if (se == "A0")
        return rate[1];
    else if (se == "B+")
        return rate[2];
    else if (se == "B0")
        return rate[3];
    else if (se == "C+")
        return rate[4];
    else if (se == "C0")
        return rate[5];
    else if (se == "D+")
        return rate[6];
    else if (se == "D0")
        return rate[7];
    else if (se == "F")
        return rate[8];
}

vector<string> split(string str, char delimiter);

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout << fixed;
    cout << setprecision(6);  // 수정된 부분

    vector<pair<string, string>> pairs;
    double bottom = 0;
    double top = 0;

    for (int i = 0; i < 20; i++) {
        char s[60];
        cin.getline(s, 60, '\n');
        vector<string> subject = split(s, ' ');
        pairs.push_back(make_pair(subject[1], subject[2]));
    }

    for (int i = 0; i < 20; i++) {
        if (pairs[i].second != "P") {
            double n = stof(pairs[i].first);
            double k = whichRate(rate, pairs[i].second);
            bottom += n;
            top += (n * k);
            //cout << top<<endl;
        }
    }

    double re = top / bottom;
    cout << re;

    return 0;
}

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
    return answer;
}
