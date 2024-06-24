#include <iostream>
#include <chrono>

struct user {
    int user_id;
    std::string name;
};

struct order {
    int order_id;
    int user_id;
    double amount;
};

int main() {

    const int nlou = 100000; 
    const int nloo = 100000; 


    user lou[nlou];  // Array of users
    order loo[nloo]; // Array of orders


    for (int index = 0; index < nlou; ++index) {
        lou[index] = { index + 1, "User_" + std::to_string(index + 1) };
    }

    for (int index = 0; index < nloo; ++index) {
        loo[index] = { index + 1, (index % nlou) + 1, 100.0 };   
    }

    // Start measuring time
    auto start = std::chrono::high_resolution_clock::now();

    // Normal O(N^2) timing
    for (int i = 0; i < nlou; ++i) {
        for (int j = 0; j < nloo; ++j) {
            if (lou[i].user_id == loo[j].user_id) {
                // Match found: Print user name and order amount
                // std::cout << "User Name: " << lou[i].name << ", Order Amount: " << loo[j].amount << std::endl;
            }
        }
    }

    // End measuring time
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate duration
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
