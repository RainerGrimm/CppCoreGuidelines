#include <iostream>
#include <string>
 
class Device {
 public:
    Device(const std::string& res):resource(res) {
        std::cout << "\nINIT: " << resource << ".\n";
    }
    void work() const {
        std::cout << "WORKING: " << resource << '\n';
    }
    ~Device() {
        std::cout << "SHUT DOWN: "<< resource << ".\n\n";
    }
 private:
    const std::string resource;
};
 
int main() {
 
    Device resGuard1{"DEVICE 1"};
    resGuard1.work();
 
    {
        Device resGuard2{"DEVICE 2"};
        resGuard2.work();
    }
    resGuard1.work();
 
}  
