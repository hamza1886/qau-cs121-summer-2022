#include <iostream>
#include <fstream>

using namespace std;

class Tenant {
    // todo
};

class Building {
private:
    string name;
    int yearBuilt{};

public:
    void showTenantDetails(Tenant tenant) {
        // todo
    }
};

int main() {
    const string filename{"building_db.dat"};

    Building building;

    // open file for writing in binary mode
    ofstream outFile{filename, ios::out | ios::binary};
    if (!outFile) {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    // write to file and close it
    outFile.write(reinterpret_cast<const char *>(&building), sizeof(Building));
    outFile.close();

    // open file for reading binary mode
    ifstream fileIn{filename, ios::in | ios::binary};
    if (!fileIn) {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    // read from file and close it
    fileIn.read(reinterpret_cast<char *>(&building), sizeof(Building));
    fileIn.close();

    return 0;
}