#ifndef MESSAGE_ENCODING_H
#define MESSAGE_ENCODING_H

#include <iostream>
#include <unordered_map>

namespace Encoding
{
    std::unordered_map<std::string, std::string> decodeMessage(std::string message);
}


#endif