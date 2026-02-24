# Tic-Tac-Toe in C (User vs Computer) 🎮

A classic terminal-based Tic-Tac-Toe game written in C, featuring a smart rule-based AI opponent. 

## 🌟 Features
- **Single Player Mode**: Play against the computer.
- **Smart AI**: The computer evaluates the board to win or block your winning moves. It logically prioritizes the center, then corners, and finally edges.
- **Simple CLI**: Clean and easy-to-use command-line interface.

## 🕹️ How to Play
The game board is represented by numbers from 1 to 9, corresponding to the grid below:

  1  !  2  !  3  
----- ----- -----
  4  !  5  !  6  
----- ----- -----
  7  !  8  !  9  

- You play as **X** and the computer plays as **O**.
- When it's your turn, simply enter a number between $1$ and $9$ to place your **X** in the corresponding empty cell.
- The first player to get 3 of their marks in a row (up, down, across, or diagonally) wins the game!

## 🚀 How to Run
To compile and run this game on your machine, you need a C compiler (like GCC installed).

1. Compile the code using terminal/command prompt:
   `gcc Tic-tac-toe.c -o tictactoe`

2. Run the executable:
   - On Linux/macOS: `./tictactoe`
   - On Windows: `tictactoe.exe`

## 🧠 AI Logic
The computer plays using a straightforward but highly effective rule-based algorithm:
1. **Win**: If it has two 'O's in a row, it places the third to win.
2. **Block**: If the player has two 'X's in a row, it blocks the winning move.
3. **Center**: Takes the center space if it is empty.
4. **Corners & Edges**: Takes available corners first, then moving on to the edges.
