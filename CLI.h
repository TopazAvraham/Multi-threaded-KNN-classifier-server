//Topaz Avraham 206842627
//Yuval Korenfeld 207801887

#include <cstring>
#include "Command.h"
#include <vector>

using namespace std;

// CLI class to chat with user
class CLI {
    //command array to present to the user
    vector<Command*> commands;
    int sock;
public:

    // constructor
    CLI(DefaultIO* dio);

    // starts the char with the user
    void start();

};


