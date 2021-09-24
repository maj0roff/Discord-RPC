#pragma once
#include "../DiscordSDK/include/discord_register.h"
#include "../DiscordSDK/include/discord_rpc.h"
#include <windows.h>
#include <string>
#include <iostream>
#include <chrono>
#include <fstream>

using namespace std;

const char* c_str();

bool FileIsExist(std::string filePath);

class Discord {
public:
	void Initialize(string publickey);
	void SetupHacker();
	void SetupDog();
};
