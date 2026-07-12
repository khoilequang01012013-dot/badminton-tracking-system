#ifndef CHALLENGE_SYSTEM_H
#define CHALLENGE_SYSTEM_H

#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

enum class ChallengeResult {
    ACCEPTED,   // Thách thức được chấp nhận
    REJECTED,   // Thách thức bị từ chối
    SUCCESSFUL, // Thách thức thành công
    FAILED      // Thách thức thất bại
};

struct Challenge {
    int challengeId;
    std::string playerName;
    std::string reason;     // Lý do thách thức (Out, In, Net, etc.)
    ChallengeResult result;
    std::string timestamp;
};

class ChallengeSystem {
private:
    static const int CHALLENGES_PER_PLAYER = 3;
    std::vector<Challenge> challengeHistory;
    int totalChallenges;

public:
    // Constructor
    ChallengeSystem();
    
    // Getter methods
    std::vector<Challenge> getChallengeHistory() const;
    int getTotalChallenges() const;
    
    // Methods
    ChallengeResult simulateChallenge(const std::string& reason);
    void recordChallenge(const std::string& playerName, const std::string& reason, ChallengeResult result);
    void displayChallengeHistory() const;
    void displayChallenge(const Challenge& challenge) const;
    double getSuccessRate() const;
    int getRemainingChallenges(int usedChallenges) const;
    std::string getResultString(ChallengeResult result) const;
};

#endif // CHALLENGE_SYSTEM_H
