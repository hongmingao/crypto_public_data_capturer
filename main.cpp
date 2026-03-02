#include <iostream>
#include <format>
#include <string>
#include <thread>

void work(int i) {
    std::cout << std::format("Hello from thread {}", i) << std::endl;
}

int main(int, char**){
    std::cout << "Start practicing threads!\n";
    std::thread threadOne(work, 0);
    threadOne.join();
}
