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
void ShowOnScreen(const vector <string>& actors){
    cout << "List of male actors in their file" << endl;
    cout << "---------------------------------" << endl;
    for (size_t i = 0; i < actors.size(); i++) {
        cout << i + 1 << ". " << actors[i] << endl;
    }
    cout << "-------------------------------" << endl;
    cout << "All actors:" << actors.size() << endl;


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
    ReadFromFile();
    ShowOnScreen(actors);
    WriteToFile();

    vector<string> actors = ReadFromFile("file.txt");


    vector <string> actors;

    const string outputFile = "actors_output.txt";

    ReadFromFile();

    ShowOnScreen();

    WriteToFile(actors, outputFile);

    cout << "End of programm!" << endl;
    return 0;
}
