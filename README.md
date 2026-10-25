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
My biggest challenge was making the game continue without using loops. I used recursion so the game could repeat each turn until there was a winner or loser.

## Sources
- Class assignment instructions.
- OpenAI ChatGPT, used for coding assistance.
