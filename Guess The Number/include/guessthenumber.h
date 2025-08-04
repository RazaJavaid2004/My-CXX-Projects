class GuessTheNumber {
    public:
    void setColor(int color);
    void welcomeScreen();
    void updateLeaderBoard(int attempts, double duration);
    void selectDifficulty(int& low, int& high);
    void giveHint(int target);
    void playGame(int& low, int& high);
};
