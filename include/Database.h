#ifndef DATABASE_H
#define DATABASE_H

#include "Player.h"
#include "Match.h"
#include "Ranking.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

class Database {
private:
    std::vector<Player> allPlayers;
    std::vector<Match> allMatches;
    std::vector<Ranking> allRankings;
    std::string dataDirectory;

public:
    // Constructor
    Database();
    
    // Getter methods
    std::vector<Player> getAllPlayers() const;
    std::vector<Match> getAllMatches() const;
    std::vector<Ranking> getAllRankings() const;
    
    // Player management
    void addPlayer(const Player& player);
    void removePlayer(const std::string& playerName);
    Player findPlayerByName(const std::string& name) const;
    Player findPlayerById(int id) const;
    bool playerExists(const std::string& name) const;
    
    // Match management
    void saveMatch(const Match& match);
    void removeMatch(int matchId);
    std::vector<Match> getPlayerMatches(const std::string& playerName) const;
    
    // Ranking management
    void addRanking(const Ranking& ranking);
    Ranking getRankingByCategory(const std::string& category) const;
    void updateRanking(const std::string& category, const Ranking& ranking);
    
    // File I/O
    void loadPlayersFromFile(const std::string& filename);
    void savePlayersToFile(const std::string& filename) const;
    void loadMatchesFromFile(const std::string& filename);
    void saveMatchesToFile(const std::string& filename) const;
    void initializeSampleData();
    
    // Display methods
    void displayAllPlayers() const;
    void displayAllMatches() const;
};

#endif // DATABASE_H
