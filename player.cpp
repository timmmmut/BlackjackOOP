#include "player.h"
void Player::play(Deck& fDeck) {
    char choice = 'y';
    //currentCard = 0;
    //int sumOfRankPlayer1 = 0;
    while (choice != 'n') {
        //����� ����� �� ������ � ����
        takeOneCard(fDeck);
        //printCard(deck[currentCard]);
        //�������� ����
        printHand();
        //sumOfRankPlayer1 += getRank(deck[currentCard]);
        //������� ���� � ������ ������������ ������� ������� � ���� ����
        std::cout << "Your score is " << calculateScore << std::endl;
        std::cout << "Do you want another card?";
        std::cout << " (enter your choice, y - yes, n - no) ";
        //��������� ����� ������������
        std::cin >> choice;
        //currentCard++;

    }
}