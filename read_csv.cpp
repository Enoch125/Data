#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
     string message;
    cout << "Please enter the name of the CSV file to open (e.g., data.csv): ";
    cin >> filename;

    ifstream file(filename);

   
    if (!file.is_open()) {
        cout << "Error: The file '" << filename << "' was not found." << endl;
        return 1;
    }

  

    while (getline(file, message)) {
        cout << message << endl;
    }


    file.close();

    return 0;
}
