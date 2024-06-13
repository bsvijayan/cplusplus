#include <iostream>
#include <string>

std::string encrypt(const std::string& str, int shift) {
    std::string output = str;
    for (char& c : output) {
        if (std::isalpha(c)) {
            char base = std::isupper(c) ? 'A' : 'a';
            c = (c - base + shift) % 26 + base; // Adjusted modulo and shift operation
        }
    }
    return output;
}

std::string decrypt(const std::string& str, int shift) {
    std::string output = str;
    for (char& c : output) {
        if (std::isalpha(c)) {
            char base = std::isupper(c) ? 'A' : 'a';
            c = (c - base - shift + 26) % 26 + base; // Adjusted modulo and shift operation
        }
    }
    return output;
}

int main() {
    std::string original_string = "Hello, World!";
    int shift = 3;
    std::string encrypted_text = encrypt(original_string, shift);
    std::cout << "Encrypted text: " << encrypted_text << std::endl;
    std::string decrypted_text = decrypt(encrypted_text, shift);
    std::cout << "Decrypted text: " << decrypted_text << std::endl;
    return 0;
}
