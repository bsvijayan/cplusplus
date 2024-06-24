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
bool compareUsers(const user& u1, const user& u2) {
    return u1.user_id < u2.user_id;
}
int main() {
    // Example data sizes
    const int nlou = 100000;   
    const int nloo = 100000;   

    
    user lou[nlou];   
    order loo[nloo];  

    
    for (int i = 0; i < nlou; ++i) {
        lou[i] = { i + 1, "User_" + std::to_string(i + 1) };
    }

    for (int i = 0; i < nloo; ++i) {
        loo[i] = { i + 1, (i % nlou) + 1, 100.0 };   
    }
     std::sort(lou, lou + nlou, compareUsers);
     

std::sort(loo, loo + nloo, [](const order& o1, const order& o2) {
        return o1.user_id < o2.user_id;
    });
    // Start the two-pointer matching process
    int user_index = 0;
    int order_index = 0;
    auto start = std::chrono::high_resolution_clock::now();
    // user_index and order_index and traversed.
    while (user_index < nlou && order_index < nloo) {
        if (lou[user_index].user_id == loo[order_index].user_id) {
            // Match found: Print user name and order amount
           // std::cout << "User Name: " << lou[user_index].name << ", Order Amount: " << loo[order_index].amount << std::endl;
            ++order_index; 
        }
        ++user_index;  
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
