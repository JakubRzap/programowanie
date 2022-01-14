#include <iostream>

#include <conio.h>

using namespace std;

void printBoard();
int addMark();
int check();

char board[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
int turn = 1;
char mark = 'x';
int input;

int main() {
  int won = 0;
  int validInput = 0;

  for (int i = 0; i < 9; i++) {
    system("cls");
    printBoard();
    if (turn) cout << "Ruch wykonuje Gracz 1" << endl;
    else cout << "Ruch wykonuje Gracz 2" << endl;
    cin >> input;
    while (input < 0 || input > 9) {
      cout << "Prosze wprowadzic liczbe od 1 do 9: ";
      cin >> input;
    }
    if (turn) mark = 'x';
    else mark = 'o';

    validInput = addMark();
    if (!validInput) {
      i--;
      continue;
    }
    won = check();
    if (won) {
      system("cls");
      printBoard();
      if (turn) cout << endl << "Wygrywa Gracz 1";
      else cout << endl << "Wygrywa Gracz 2";
      getch();
      break;
    }
    if (i == 8) {
      system("cls");
      printBoard();
      cout << endl << "Remis";
    }

    turn = !turn;
  }

  return 0;
}
void printBoard() {
  cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << endl;
  cout << "------------" << endl;
  cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << endl;
  cout << "------------" << endl;
  cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << endl;
}
int addMark() {
  for (int i = 0, k = 1; i < 3; i++) {
    for (int j = 0; j < 3; j++, k++) {
      if (k == input)
        if (board[i][j] == ' ') {
          board[i][j] = mark;
          return 1;
        }
      else {
        cout << "To miejsce jest zajete";
        getch();
        return 0;
      }
    }
  }
}
int check() {
  if (board[0][0] == mark && board[0][1] == mark && board[0][2] == mark)
    return 1;
  if (board[1][0] == mark && board[1][1] == mark && board[1][2] == mark)
    return 1;
  if (board[2][0] == mark && board[2][1] == mark && board[2][2] == mark)
    return 1;
  if (board[0][0] == mark && board[1][0] == mark && board[2][0] == mark)
    return 1;
  if (board[0][1] == mark && board[1][1] == mark && board[2][1] == mark)
    return 1;
  if (board[0][2] == mark && board[1][2] == mark && board[2][2] == mark)
    return 1;
  if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark)
    return 1;
  if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark)
    return 1;

  return 0;
}
