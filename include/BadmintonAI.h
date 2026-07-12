#ifndef BADMINTON_AI_H
#define BADMINTON_AI_H

#include "Match.h"
#include <string>
#include <vector>
#include <map>

class BadmintonAI {
private:
    std::map<std::string, std::string> knowledgeBase;
    Match* currentMatch;
    int conversationCount;
    
    // Methods
    std::string toLowerCase(const std::string& str) const;
    bool containsKeyword(const std::string& text, const std::string& keyword) const;
    std::string generateResponse(const std::string& question);
    void initializeKnowledgeBase();

public:
    // Constructor
    BadmintonAI();
    
    // Methods
    void setCurrentMatch(Match* match);
    std::string chat(const std::string& userQuestion);
    void displayAIIntro() const;
    void displayAIInfo() const;
    
    // Knowledge base methods
    std::string answerRulesQuestion(const std::string& question) const;
    std::string answerTechniquesQuestion(const std::string& question) const;
    std::string answerMatchQuestion(const std::string& question) const;
    std::string answerChallengeQuestion(const std::string& question) const;
    std::string answerGeneralQuestion(const std::string& question) const;
};

#endif // BADMINTON_AI_H
