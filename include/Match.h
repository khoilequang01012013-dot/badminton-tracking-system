#ifndef MATCH_H
#define MATCH_H

#include "Player.h"
#include <string>
#include <vector>
#include <ctime>

struct Set {
    int player1Score;
    int player2Score;
    Set() : player1Score(0), player2Score(0) {}
};

class Match {
private:
    int matchId;
    Player player1;
    Player player2;
    std::vector<Set> sets;
    int currentSet;
    std::string matchDate;
    std::string tournament;
    std::string court;
    bool isLive;
    int challengesLeft1; // Challenge còn lại cho player 1
    int challengesLeft2; // Challenge còn lại cho player 2
    std::string winner; // Tên người thắng
    std::vector<std::string> matchHistory; // Lịch sử từng điểm

public:
    // Constructor
    Match();
    Match(int id, const Player& p1, const Player& p2, const std::string& tournament);
    
    // Getter methods
    int getMatchId() const;
    Player getPlayer1() const;
    Player getPlayer2() const;
    int getCurrentSet() const;
    int getPlayer1SetWins() const;
    int getPlayer2SetWins() const;
    int getPlayer1CurrentScore() const;
    int getPlayer2CurrentScore() const;
    std::string getMatchDate() const;
    std::string getTournament() const;
    std::string getCourt() const;
    bool getIsLive() const;
    int getChallengesLeft1() const;
    int getChallengesLeft2() const;
    std::string getWinner() const;
    std::vector<std::string> getMatchHistory() const;
    
    // Setter methods
    void setMatchDate(const std::string& date);
    void setTournament(const std::string& tournament);
    void setCourt(const std::string& court);
    void setIsLive(bool live);
    
    // Methods
    void startMatch();
    void addPointToPlayer1();
    void addPointToPlayer2();
    void undoLastPoint();
    void checkSetWin();
    void checkMatchWin();
    void resetSetScores();
    void endMatch();
    void displayMatchStatus() const;
    void displaySetHistory() const;
    void displayMatchSummary() const;
    bool isMatchEnded() const;
    
    // Challenge methods
    int useChallenge1();
    int useChallenge2();
};

#endif // MATCH_H
