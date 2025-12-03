#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

vector<string> ReadFromFile(const string& filename) {
    vector<string> actors;
    ifstream file(filename); // Используем переданное имя файла

    if (file.is_open()) {
        string actorName;
        while (getline(file, actorName)) {
            actors.push_back(actorName);
        }
        file.close();
        cout << "\n=== Info from vector ===" << endl;
        for (size_t i = 0; i < actors.size(); i++) {
            cout << "actors[" << i << "] = \"" << actors[i] << "\"" << endl;
        }
        cout << "Elements: " << actors.size() << endl;
        cout << "============================================\n" << endl;
    } else {
        cout << "ERROR: " << filename << endl;
        }


    return actors;
}


void ShowOnScreen(){

}

void WriteToFile(){

}

int main()
{
    vector<string> actors = ReadFromFile("file.txt");


    ShowOnScreen();
    WriteToFile();

    cout << "Hello world!" << endl;
    return 0;
}
