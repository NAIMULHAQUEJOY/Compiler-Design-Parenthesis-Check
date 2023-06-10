///1. ab+a

                                                             /// MOHAMMAD NAIMUL HAQUE 21-44387-1 sec-D
#include <iostream>
#include <string>

int main() {
    bool match = false;
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    int i = 1;

    if (str[0] == 'a' && str[str.length()-1] == 'a') {
        match = true;
    }

    while (i < str.length()-1) {
        if (str[i] != 'b') {
            match = false;
            break;
        }
        i++;
    }

    if (match) {
        std::cout << "Match found!" << std::endl;
    }
    else {
        std::cout << "No match found." << std::endl;
    }

    return 0;
}

