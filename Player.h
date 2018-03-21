

class classPlayer {
private:
  int health, mana, strength, dexterity, stamina;
  std::string playerName;
public:
  void createCharacter(int, int, int, int, int, std::string);
  void setHealth(int);
  void setMana(int);
  void setStrength(int);
  void setDexterity(int);
  void setStamina(int);
  int showHealth(){return health; }
  int showMana(){return mana; }
  int showStrength(){return strength; }
  int showDexterity(){return dexterity; }
  int showStamina(){return stamina; }
  std::string showPlayerName() {return playerName; }
  int addHealth();
  int addMana();
  int addStrength();
  int addDexterity();
  int addStamina();
  int getAll(){return health, mana, strength, dexterity, stamina;};
};
