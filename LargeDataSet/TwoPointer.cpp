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
    // Example data sizes
    const int nlou = 100000;  // Number of users
    const int nloo = 100000;  // Number of orders

    // Example data arrays (assuming pre-filled or initialized)
    user lou[nlou];  // Array of users
    order loo[nloo]; // Array of orders

    // Example initialization (filling with sample data)
    for (int i = 0; i < nlou; ++i) {
        lou[i] = { i + 1, "User_" + std::to_string(i + 1) };
    }

    for (int i = 0; i < nloo; ++i) {
        loo[i] = { i + 1, (i % nlou) + 1, 100.0 };  // Assign user_id based on modulo to ensure valid user_id
    }

    // Start the two-pointer matching process
    int user_index = 0;
    int order_index = 0;
auto start = std::chrono::high_resolution_clock::now();
    while (user_index < nlou && order_index < nloo) {
        if (lou[user_index].user_id == loo[order_index].user_id) {
            // Match found: Print user name and order amount
           // std::cout << "User Name: " << lou[user_index].name << ", Order Amount: " << loo[order_index].amount << std::endl;
            ++order_index;  // Move order_index forward
        }
        ++user_index;  // Always move user_index forward
    }
    auto end = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}


