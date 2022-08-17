#include <iostream>

using namespace std;

int musicalChair(bool *, int, int);

int main() {
    int n, k;

    cout << "Enter number of friends: ";
    cin >> n;

    cout << "Enter skipping number: ";
    cin >> k;
    cout << endl;

    if (n <= 0 || k <= 0) {
        cerr << "Cannot start with n = " << n << " and k = " << k << endl;
        cerr << "Please enter positive integers only." << endl;
        exit(-1);
    }

    bool *seats = new bool[n];
    for (auto i = 0; i < n; i++) {
        seats[i] = true;
    }

    musicalChair(seats, n, k);

    return 0;
}

int musicalChair(bool *seats, int n, int k) {
    int remainingSeats = n;

    unsigned int prevIndex;
    long currIndex = 0;

    while (true) {
        for (auto i = 0; i < k;) {
            if (seats[currIndex % n]) {
                i++;
            }
            currIndex++;
        }

        if (1 == remainingSeats) {
            break;
        }

        prevIndex = (currIndex - 1) % n;
        seats[prevIndex] = false;
        --remainingSeats;

        cout << "Friend " << (prevIndex + 1) << " leaves the circle." << endl;
    }

    int winnerIndex = (currIndex - 1) % n;
    cout << "----------------------------" << endl;
    cout << "Friend " << (winnerIndex + 1) << " is the winner." << endl;

    return winnerIndex;
}
