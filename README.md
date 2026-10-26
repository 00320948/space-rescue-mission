# space-rescue-mission
A simple C text-based space rescue game.
# Space Rescue Mission

Erica Freeman
Student ID:00320948

## Game Rules
The goal is to destroy the enemy drone before it destroys your ship. The player starts with 50 shields, and the enemy has 40 health. Choose A to attack or R to repair the ship using a repair kit. The drone attacks for 10 damage after each turn, and the game ends when the player wins or loses.

## Recursion
The recursive function is `game()`. It calls itself after each turn to continue the game. It stops when the enemy health or ship shields reach zero.

## Biggest Challenge
My biggest challenge was getting the recursive `game()` function to work correctly and making sure the game stopped when someone won or lost. At first, I had trouble making sure the function was in the right place and that the final score displayed correctly. I checked the braces and moved the `calculateScore()` function outside of `game()`. Then I tested the game in OnlineGDB by attacking and repairing to make sure the choices, score, and win message worked.

## Assistance
I used ChatGPT for help understanding and fixing my C code. It helped me work through the recursive game function, check the final score calculation, and test the attack and repair options. I also used OnlineGDB to run the program and make sure it worked.

## Sources
- Class assignment instructions — Used to understand the required game features and submission requirements.
- OpenAI ChatGPT — Used for coding assistance, understanding recursion, troubleshooting the score function, and testing the game logic.
- OnlineGDB — Used to compile, run, and test the game.
- GNU C Reference Manual — Reference for understanding C functions and recursion. (Include only if consulted.)
- cppreference — Reference for C syntax, data types, and conditional statements. (Include only if consulted.)
- W3Schools C Tutorial — Reference for beginner C programming concepts. (Include only if consulted.)
