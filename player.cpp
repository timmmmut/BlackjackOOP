#include "player.h"
void Player::play(Deck& fDeck) {
    char choice = 'y';
    //currentCard = 0;
    //int sumOfRankPlayer1 = 0;
    while (choice != 'n') {
        //взять карту из колоды в руку
        takeOneCard(fDeck);
        //printCard(deck[currentCard]);
        //печатаем руку
        printHand();
        //sumOfRankPlayer1 += getRank(deck[currentCard]);
        //выводим счет и просим пользователя принять решение о ходе игры
        std::cout << "Your score is " << calculateScore << std::endl;
        std::cout << "Do you want another card?";
        std::cout << " (enter your choice, y - yes, n - no) ";
        //считываем выбор пользователя
        std::cin >> choice;
        //currentCard++;

    }
}