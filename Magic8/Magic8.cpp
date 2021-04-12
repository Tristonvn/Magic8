#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << "Magic 8-Ball\n";

    srand(time(NULL));
    int answer = std::rand() % 10;

    //Using If Else, the output of the magic 8 ball will be decided based on the random value produce
    if (answer == 0) {
        std::cout << "It is certain.";
    }
    else if (answer == 10) {
        std::cout << "As I see it, yes.";
    }
    else if (answer == 9) {
        std::cout << "Better not tell you now.";
    }
    else if (answer == 8) {
        std::cout << "Concentrate and ask again.";
    }
    else if (answer == 7) {
        std::cout << "Don't count on it.";
    }
    else if (answer == 6) {
        std::cout << "Very doubtfull.";
    }
    else if (answer == 5) {
        std::cout << "Cannot predict now.";
    }
    else if (answer == 4) {
        std::cout << "Most likely.";
    }
    else if (answer == 3) {
        std::cout << "Yes.";
    }
    else if (answer == 2) {
        std::cout << "Outlook not so good.";
    }
    else if (answer == 1) {
        std::cout << "Outlook good.";
    }

}

