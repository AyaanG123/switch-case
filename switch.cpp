using namespace std;
#include <iostream>

int main() {
    int x = 5;
    std::cout << "Enter your emotion\n1. Happy\n2. Sad\n3. Mad\n4. Rizzy\n5. Sigma\n";
    cin >> x;
    
    switch (x) {
    case 1:
        cout << "yayyy";
        break;
    case 2:
        cout << "boooo";
        break;
    case 3:
        cout << "dont crashout";
        break;
    case 4:
        cout << "what the rizz";
        break;
    case 5:
        cout << "what the sigma";
        break;
    default:
        cout << "That is not a valid emotion";
        break;
    }

    return 0;
}
