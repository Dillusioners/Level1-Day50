# include <iostream>
# include <thread>
# include <chrono>

/// @brief Function to clear the terminal
void clear(){
    // if the WIN32 macro exists, run cls command or the clear command
    # ifdef _WIN32
        system("cls");
    # else
        system("clear");
    # endif
}

/// @brief Function to print a tide in the console
/// @param size The size of the tide 
/// @param delay The between two consecutive tides
void printTide(int size, int delay = 50){
    // iterating through the tide size
    for(int i = 0; i < size; i++){
        clear();

        std::cout << "CAN YOU FEEL THE TIDE\n";

        // printing spaces in the terminal
        for(int j = 0; j < i; j++){
            std::cout << " ";
        }

        std::cout << "::::" << std::flush;

        // sleeping for the delay amount of time
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}

int main(int argc, char** argv){
    // stores the size of the tide
    int tide_size;

    // asking user for the size of the tide
    std::cout << "Enter the size of the tide (Recommended is 50): ";
    std::cin >> tide_size;

    // printing the tide
    printTide(tide_size);
    return 0;
}