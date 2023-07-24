# include <iostream>
# include <thread>
# include <chrono>
# include <random>

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

// function to input text from the terminal
void input(std::string prompt){
    std::string choice;
    slowPrint(prompt + " ");
    std::cin >> choice;
    std::cout << std::endl;
}

// main function of the program
int main(int argc, char** argv){
    std::random_device rd;
    std::mt19937 mt(rd());
    
    // welcoming text
    slowPrint("Are you TIDE enough?\n\nAnswer the questions and know how much TIDE you are.\n\n");

    // asking user for sme details
    input("What color is your buggati?");
    input("What is the capital of Ohio?");
    input("Why is James Charles gay?");
    input("What is love?");

    // printing the determination statement
    std::cout << "Determining your tide % tile";
    slowPrint("............", 250);
    std::cout << std::endl;

    // printing the generated percentile
    slowPrint("The percentage is " + std::to_string(mt() % 100) + "%");

    return 0;
}