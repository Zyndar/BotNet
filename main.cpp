#include <iostream>

#include "messageEncoding.hpp"

std::string testMessage = "#(/Mensaje)Esto es un test(/)#(/Codigo)#2019(/)#(/Clave3)Valor3(/)";

int main(int argc, char** argv)
{
    std::unordered_map<std::string, std::string> mKeys = Encoding::decodeMessage(testMessage);
    std::cout << mKeys["Mensaje"] << std::endl;
    return 0;
}