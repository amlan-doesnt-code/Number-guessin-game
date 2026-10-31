# Number Guessing Game in C 🎯

A simple command-line number guessing game written in C as part of my journey into learning C programming.

The computer generates a random number between 1 and 100, and the player gets 7 attempts to guess it correctly.

## Features

- Random number generation.
- Limited guessing attempts (7 chances).
- Hints when the guess is too high or too low.
- Custom integer input function using `getch()`.
- Character-by-character input.
- Backspace support.
- Input validation (1–100).
- Win/Loss detection.

## Concepts Practiced

- Variables and data types.
- Conditional statements (`if-else`).
- Loops (`for` and `while`).
- Functions.
- Random number generation (`rand()` and `srand()`).
- Basic input handling.
- Recursion and input validation concepts.

## How to Run

**Requirements:**
- GCC-compatible C compiler.
- Windows environment with support for `conio.h`.

Compile:

```bash
gcc guessing_game.c -o guessing_game
```

Run:

```bash
guessing_game.exe
```

## Version History

- **v1.0** – Basic number guessing game with limited attempts.
- **v2.0** – Added custom integer input, character-by-character input, Backspace support and range validation.

## Future Improvements

- Better input handling.
- Prevent integer overflow.
- Make input handling portable across operating systems.
- Add difficulty levels and score tracking.

## Author

Built while learning C programming and exploring problem-solving through small projects.

Thanks for checking out my project!
