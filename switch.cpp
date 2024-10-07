//Ayaan Gill
//10/7/24
//Switch Case
//Extra: Extra emotion
using namespace std;
#include <iostream>

int main() {
    int x = 5;
    std::cout << "Enter your emotion\n1. Happy\n2. Sad\n3. Mad\n4. Rizzy\n5. Sigma\n6. Change your emotion to happy\n";
    cin >> x;//user input
    
    switch (x) {
    case 1:
        cout << "yayyy";
        break;
    case 2:
        cout << "boooo";
        break;//depending on the input a different thing prints
    case 3:
        cout << "dont crashout";
        break;
    case 4:
        cout << "what the rizz";
        break;
    case 5:
        cout << "what the sigma";
        break;
    case 6:
        cout << "ur emotion changed to happy";
        break;
    default:
        cout << "That is not a valid emotion";
        break;//if input does not match anything, this prints
    }

    return 0;
}
