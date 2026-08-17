#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> score;
    string event;
    for (int i = 0; i < n; i++) {
        cin >> event;
        if (event == "A") {
            int sum = score[score.size() - 1] + score[score.size() - 2];
            score.push_back(sum);
        } else if (event == "X") {
            score.push_back(2 * score.back());
        } else if (event == "R") {
            score.pop_back();
        } else {
            score.push_back(stoi(event));
        }
    }
    int total = 0;
    for (int x : score) {
        total += x;
    }
    cout << "Final Total Score: " << total;
    return 0;
}