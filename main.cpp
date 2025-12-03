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
