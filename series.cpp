# include <iostream>

/// @brief Function to print fibonacci numbers from 0 to n
/// @param n the number of fibnoacci numbers to print
void fibonacci(int n){
    std::pair<int, int> terms = std::pair(0, 1); // pair storing the last two fibonacci numbers

    // iterating for the given amount of times
    for(int i = 0; i < n - 1; i++){
        // printing the latest terms from the pair
        if(i == 0) std::cout << terms.first << " ";
        std::cout << terms.second << " ";

        // updating the terms in the same fashion that the fibonacci series work
        int temp = terms.second;
        terms.second += terms.first;
        terms.first = temp;
    }
}

/// @brief The main function of the program
/// @param argc Number of arguments passed
/// @param argv String array of all the arguments
/// @return System codes based on the execution of the command
int main(int argc, char** argv){
    int terms;

    // printing to the user about the terms
    std::cout << "WELCOME TO DILLUSIONERS FIBONACCI SERIES PRINTER\n\nEnter the number of terms: ";
    std::cin >> terms;

    // printing the fibonacci series for the given terms
    std::cout << "\nThe first " << terms << " terms of the series are as follows:\n";
    fibonacci(terms);
    return 0;
}