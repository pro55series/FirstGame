#include <iostream>
#include <string>
#include "Enemies.h"
#include "Engine.h"
#include "Player.h"
#include "Items.h"
#include <cstdlib>

void clear_screen()
{
#ifdef WINDOWS
    std::system("cls");
#else
    // Assume POSIX
    std::system ("clear");
#endif
}

void classPlayer::createCharacter(int newHealth, int newMana, int newStrength, int newDexterity, int newStamina, std::string newPlayerName){
  health = newHealth;
  mana = newMana;
  strength = newStrength;
  dexterity = newDexterity;
  stamina = newStamina;
  playerName = newPlayerName;


}

void newGame(){
  classPlayer player;
  std::string playerName;
  std::cout << "Please enter your playername" << '\n';
  std::cin >> playerName;
  clear_screen();
  player.createCharacter(50, 0, 5, 5, 10, playerName);
  std::cout << "New player " << player.showPlayerName() << " created." << "\nHave fun!" << '\n';
  std::cin.ignore();
  std::cin.ignore();
  clear_screen();
}


int main(int argc, char const *argv[]) {

  newGame();

  return 0;
}
