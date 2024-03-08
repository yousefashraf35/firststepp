#include <iostream>
#include <vector>

int main()
{
    std::cout << "Each player takes turns picking a number from 1 to 9.\n"
                 "Once a number is picked, it cannot be picked again.\n"
                 "Whoever gets 3 numbers with a sum of 15 first wins.\n\n";

    std::vector<int> mylist = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> listplayer1;
    std::vector<int> listplayer2;

    while (mylist.size() > 1)
    {
        while (true)
        {
            std::cout << "Player 1, please enter a number from the list: ";
            int player1list;
            std::cin >> player1list;

            if (player1list >= 1 && player1list <= 9 &&
                find(mylist.begin(), mylist.end(), player1list) != mylist.end())
            {
                listplayer1.push_back(player1list);
                mylist.erase(std::remove(mylist.begin(), mylist.end(), player1list), mylist.end());
                std::cout << "Player 1's list: ";
                for (int num : listplayer1)
                {
                    std::cout << num << ' ';
                }
                std::cout << std::endl;
                break;
            }
            else
            {
                std::cout << "Invalid input. Please enter a valid number.\n";
            }
        }

        while (true)
        {
            std::cout << "Player 2, please enter a number from the list: ";
            int player2list;
            std::cin >> player2list;

            if (player2list >= 1 && player2list <= 9 &&
                std::find(mylist.begin(), mylist.end(), player2list) != mylist.end())
            {
                listplayer2.push_back(player2list);
                mylist.erase(std::remove(mylist.begin(), mylist.end(), player2list), mylist.end());
                std::cout << "Player 2's list: ";
                for (int num : listplayer2)
                {
                    std::cout << num << ' ';
                }
                std::cout << std::endl;
                break;
            }
            else
            {
                std::cout << "Invalid input. Please enter a valid number.\n";
            }
        }
    }

    // Check for the winner
    // ... (remaining code for checking the winner)

    return 0;
}
