#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

class Player {
private:
    int id;
    std::string name;
    std::string country;
    int ranking;
    std::string category; // Nam/Nữ/Đôi
    int wins;
    int losses;
    double winRate;
    std::string birthDate;
    std::string club;

public:
    // Constructor
    Player();
    Player(int id, const std::string& name, const std::string& country, int ranking, const std::string& category);
    
    // Getter methods
    int getId() const;
    std::string getName() const;
    std::string getCountry() const;
    int getRanking() const;
    std::string getCategory() const;
    int getWins() const;
    int getLosses() const;
    double getWinRate() const;
    std::string getBirthDate() const;
    std::string getClub() const;
    
    // Setter methods
    void setId(int id);
    void setName(const std::string& name);
    void setCountry(const std::string& country);
    void setRanking(int ranking);
    void setCategory(const std::string& category);
    void setBirthDate(const std::string& date);
    void setClub(const std::string& club);
    
    // Methods
    void addWin();
    void addLoss();
    void updateWinRate();
    void displayInfo() const;
    void resetStats();
    
    // Comparison
    bool operator<(const Player& other) const; // So sánh theo ranking
};

#endif // PLAYER_H
