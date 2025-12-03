#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void ReadFromFile(){

}
void ShowOnScreen(const vector <string>& actors){
    cout << "List of male actors in their file" << endl;
    cout << "---------------------------------" << endl;
    for (size_t i = 0; i < actors.size(); i++) {
        cout << i + 1 << ". " << actors[i] << endl;
    }
    cout << "-------------------------------" << endl;
    cout << "All actors:" << actors.size() << endl;
}

void WriteToFile(){

}

int main()
{
    ReadFromFile();
    ShowOnScreen(actors);
    WriteToFile();

    return 0;
}
