#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main()
{
    int FirstFace, SecondFace;
    char Repeat;
    do {
        srand(time(0));
        FirstFace = 1 + rand() % 6;
        SecondFace = 1 + rand() % 6;

        cout << "first face: " << FirstFace << endl << "second face" << SecondFace << endl;
        cout << "want to do it again(y/n)\n";
        cin >> Repeat;
        while (true) {
            if (Repeat  == 'y' ||  Repeat == 'n') {
                break;
            }
            else {
                cin.clear();


                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "please chose y or n \n";
            }
        }
    }
        while (Repeat == 'y');
    cout << "have a good time :)";

    return 0; 
}