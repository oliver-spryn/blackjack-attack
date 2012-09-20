#include <string>
#include <vector>

#include "Config.h"

using std::string;
using std::vector;

const string Config::GAME_NAME = "  ____  _            _    _            _    \n"
" |  _ \\| |          | |  (_)          | |   \n"
" | |_) | | __ _  ___| | ___  __ _  ___| | __\n"
" |  _ <| |/ _` |/ __| |/ / |/ _` |/ __| |/ /\n"
" | |_) | | (_| | (__|   <| | (_| | (__|   < \n"
" |____/|_|\\__,_|\\___|_|\\_\\ |\\__,_|\\___|_|\\_\\\n"
"     /\\  | | | |        _/ | |              \n"
"    /  \\ | |_| |_ __ _ |__/| | __           \n"
"   / /\\ \\| __| __/ _` |/ __| |/ /           \n"
"  / ____ \\ |_| || (_| | (__|   <            \n"
" /_/    \\_\\__|\\__\\__,_|\\___|_|\\_\\           \n"
"                                            \n"
"                                            \n";

int values[] = {5, 25, 100};
const vector<int> MINIMUM_BETTING_VALUE(values, values + sizeof(values) / sizeof(int));
const string Config::WELCOME_STRING = "Welcome to your doom. Enter a number to select a minimium betting price: ";