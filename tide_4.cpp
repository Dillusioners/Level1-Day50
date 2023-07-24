# include <iostream>
# include <chrono>
# include <thread>


/// @brief Slowly print text to the terminal
/// @param text the text to print
/// @param delay the time difference between two consecutive text characters
void slowPrint(std::string text, int delay = 50){
    // iterating through the characters
    for(auto elem : text){
        // printing the text, flushing the stream and stopping for the delay
        std::cout << elem << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}

// main method of the program
int main(int argc, char** argv){
    slowPrint("What is TIDE??????");
    slowPrint("BABY DONT TIDE ME, DONT TIDE ME");
    slowPrint("Za Taido Za Pinto");
    return 0;
}