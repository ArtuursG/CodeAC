#include <iostream>
#include <vector>
#include <string>

// Global variables
std::vector<char> board(9, ' ');
char current_player = 'X';
int x_wins = 0;
int o_wins = 0;

// Function prototypes
void draw();
void introduction();
void take_turn();
void set_position();
bool is_winner();
bool filled_up();
void change_player();
void end_game();
void reset_board();

int main() {
    introduction();

    char player1_symbol, player2_symbol;
    std::cout << "Player 1, choose your symbol (X or O): ";
    std::cin >> player1_symbol;
    player1_symbol = toupper(player1_symbol);

    while (player1_symbol != 'X' && player1_symbol != 'O') {
        std::cout << "Invalid input. Please choose X or O: ";
        std::cin >> player1_symbol;
        player1_symbol = toupper(player1_symbol);
    }

    player2_symbol = (player1_symbol == 'X') ? 'O' : 'X';
    current_player = player1_symbol;

    int rounds = 0;

    while (rounds < 3) {
        std::cout << "Starting Round " << rounds + 1 << "!\n\n";
        reset_board();
        current_player = (rounds % 2 == 0) ? player1_symbol : player2_symbol;
        bool game_over = false;

        while (!game_over) {
            draw();
            take_turn();
            game_over = is_winner() || filled_up();

            if (!game_over) {
                change_player();
            }
        }

        draw();
        end_game();

        rounds++;
        std::cout << "\nRound " << rounds << " completed.\n";
        std::cout << "Score: X Wins = " << x_wins << ", O Wins = " << o_wins << "\n\n";
    }

    std::cout << "Final Score: X Wins = " << x_wins << ", O Wins = " << o_wins << "\n";
    if (x_wins > o_wins) {
        std::cout << "Player X is the overall winner!\n";
    } else if (o_wins > x_wins) {
        std::cout << "Player O is the overall winner!\n";
    } else {
        std::cout << "The game ends in a tie!\n";
    }

    return 0;
}

void introduction() {
    std::cout << "Welcome to Tic Tac Toe!\n";
    std::cout << "Players take turns placing their marks (X or O) on the board.\n";
    std::cout << "First player to align 3 marks wins the round.\n";
    std::cout << "Best of 3 rounds will decide the overall winner!\n\n";
}

void draw() {
    std::cout << "     |     |      \n";
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n\n";
}

void take_turn() {
    std::cout << "Player " << current_player << "'s turn. Enter position (1-9): ";
    set_position();
}

void set_position() {
    int position;
    while (true) {
        std::cin >> position;
        if (std::cin.fail() || position < 1 || position > 9) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input, enter a number between 1-9: ";
        } else if (board[position - 1] != ' ') {
            std::cout << "That spot is already taken. Try another: ";
        } else {
            board[position - 1] = current_player;
            break;
        }
    }
}

bool is_winner() {
    const std::vector<std::vector<int>> winning_combinations = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };

    for (const auto& combo : winning_combinations) {
        if (board[combo[0]] == current_player &&
            board[combo[1]] == current_player &&
            board[combo[2]] == current_player) {
            return true;
        }
    }
    return false;
}

bool filled_up() {
    for (char square : board) {
        if (square == ' ') return false;
    }
    return true;
}

void change_player() {
    current_player = (current_player == 'X') ? 'O' : 'X';
}

void end_game() {
    if (is_winner()) {
        std::cout << "Player " << current_player << " wins this round!\n";
        if (current_player == 'X') x_wins++;
        else o_wins++;
    } else {
        std::cout << "It's a tie!\n";
    }
}

void reset_board() {
    board.assign(9, ' ');
}