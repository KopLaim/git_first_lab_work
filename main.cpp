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
    for (const auto& actor : actors){
        cout << actor << endl;
    };
    cout <<"----------------------------------" << endl;
}

void WriteToFile(){

}

int main()
{
vector <string> actor;
    ReadFromFile();
    ShowOnScreen(actor);
    WriteToFile();

    cout << "Hello world!" << endl;
    return 0;
}
