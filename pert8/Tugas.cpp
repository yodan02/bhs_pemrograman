#include <iostream>
#include <vector>
#include <string>
#include <map>

class User {
public:
    std::string username;
    std::string email;
    std::string password;

    User(std::string u, std::string e, std::string p) : username(u), email(e), password(p) {}
};

class Product {
public:
    std::string name;
    std::string description;
    double price;
    User* seller;

    Product(std::string n, std::string d, double p, User* s) : name(n), description(d), price(p), seller(s) {}
};

class Marketplace {
private:
    std::vector<User> users;
    std::vector<Product> products;
    User* currentUser;

public:
    Marketplace() : currentUser(nullptr) {}

    void registerUser(std::string username, std::string email, std::string password) {
        users.emplace_back(username, email, password);
        std::cout << "User registered successfully!\n";
    }

    void loginUser(std::string email, std::string password) {
        for (auto& user : users) {
            if (user.email == email && user.password == password) {
                currentUser = &user;
                std::cout << "Login successful!\n";
                return;
            }
        }
        std::cout << "Invalid credentials!\n";
    }

    void addProduct(std::string name, std::string description, double price) {
        if (currentUser) {
            products.emplace_back(name, description, price, currentUser);
            std::cout << "Product added successfully!\n";
        } else {
            std::cout << "Please login to add products.\n";
        }
    }

    void viewProducts() {
        for (auto& product : products) {
            std::cout << "Product Name: " << product.name << "\n"
                      << "Description: " << product.description << "\n"
                      << "Price: " << product.price << "\n"
                      << "Seller: " << product.seller->username << "\n\n";
        }
    }
};

int main() {
    Marketplace marketplace;

    marketplace.registerUser("john_doe", "john@example.com", "password123");
    marketplace.registerUser("jane_doe", "jane@example.com", "password456");

    marketplace.loginUser("john@example.com", "password123");
    marketplace.addProduct("Handmade Necklace", "Beautiful handmade necklace", 49.99);
    marketplace.addProduct("Handmade Bracelet", "Beautiful handmade bracelet", 29.99);

    marketplace.viewProducts();

    return 0;
}
