#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void ReadFromFile(){

}
void ShowOnScreen(){

}

void WriteToFile(const vector<string>& actors, const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const auto& actor : actors) {
            file << actor << endl;
        }
        file.close();
        cout << "Infomation write to file: " << filename << endl;
    } else {
        cout << "Error: " << filename << endl;
    }
}

int main()
{



    const string outputFile = "actors_output.txt";

    ReadFromFile();
    ShowOnScreen();

    cout << "Hello world!" << endl;
    return 0;
}
