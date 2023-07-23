# include <iostream>
# include <vector>

int points = 0; // stores the total points achieved by the user

/// @brief This function allows for automated questioning process
/// @param question The question to be printed
/// @param options All the options for the question
/// @param answer The correct option for the question
void question(std::string question, std::vector<std::string> options, char answer){
    std::string input;
    static int total_questions = 1;
    char option = 'A', inp;
    answer = toupper(answer); // uppercasing the answer for safety

    // printing the question and the all of the options
    std::cout << total_questions << ". " << question << "\n\n";
    for(auto elem : options) std::cout << option++ << ". " << elem << '\n';
    std::cout << ">> ";
    
    // recieving input from user and making it uppercase
    std::cin >> input;
    inp = toupper(input[0]);

    // checking if the given input is equal to the answer
    if(inp == answer) std::cout << "Correct Answer!";
    else std::cout << "Wrong Answer! The correct answer is " << options[answer - 65] << ".";

    // appending static variable
    points += (inp == answer);
    total_questions++;
    std::cout << "\n\n";
}

// execution starts from here
int main(int argc, char** argv){
    std::cout << "WELCOME TO THE DILLUSIONERS TIDE QUIZ.\n\n";

    // asking five questions related to tides to the user
    question(
        "Which Indian city recievied the most amount of tides in 2023?",
        {"Mumbai", "Kolkata", "Chennai", "Bangalore"},
        'a'
    );

    question(
        "How many tides does an average coast recieve in a day?",
        {"One", "Two", "Five", "Eleven"},
        'b'
    );

    question(
        "What causes tides?",
        {"Moon", "Sun", "Earth\'s Rotation", "Earth\'s Revolution"},
        'a'
    );

    question(
        "Which place recieves all-time high tides?",
        {"Indonesia", "Australia", "Canada", "New Zealand"},
        'c'
    );

    question(
        "What is the name of the energy harnessed from these tides?",
        {"Tidal Energy", "Oceanic Energy", "Marine Energy", "Hydel Energy"},
        'a'
    );

    // displaying the total points to the user
    std::cout << "Congrats! You recievied " << points << " points out of five.";
    return 0;
}