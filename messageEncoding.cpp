#include "messageEncoding.hpp"

std::unordered_map<std::string, std::string> Encoding::decodeMessage(std::string message)
{
    std::unordered_map<std::string, std::string> mKeys;

    while (message.find("#(/") != std::string::npos)
    {
        uint32_t beginningKey = message.find("#(/") + 3;
        uint32_t endingKey = message.find(")");
        uint32_t beginningValue = message.find(")") + 1;
        uint32_t endingValue = message.find("(/)");
        
        uint32_t endSentence = message.find("(/)") + 3;

        mKeys[message.substr(beginningKey, endingKey - beginningKey)] = message.substr(beginningValue, endingValue - beginningValue);

        message = message.substr(endSentence);
    }

    return mKeys;
}