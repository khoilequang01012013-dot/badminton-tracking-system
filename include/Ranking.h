#ifndef RANKING_H
#define RANKING_H

#include "Player.h"
#include <vector>
#include <algorithm>

class Ranking {
private:
    std::vector<Player> playerList;
    std::string category; // Nam/Nữ/Đôi

public:
    // Constructor
    Ranking();
    explicit Ranking(const std::string& category);
    
    // Getter methods
    std::vector<Player> getPlayerList() const;
    std::string getCategory() const;
    int getTotalPlayers() const;
    Player getPlayerByRank(int rank) const;
    Player getPlayerByName(const std::string& name) const;
    int getPlayerRank(const std::string& name) const;
    
    // Setter methods
    void setCategory(const std::string& category);
    
    // Methods
    void addPlayer(const Player& player);
    void removePlayer(const std::string& name);
    void updateRanking();
    void updatePlayerStats(const std::string& playerName, int wins, int losses);
    void displayTopPlayers(int count = 10) const;
    void displayAllPlayers() const;
    void displayPlayerInfo(const std::string& name) const;
    void sortByWinRate();
    void sortByRanking();
};

#endif // RANKING_H
