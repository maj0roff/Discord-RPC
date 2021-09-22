#pragma once
#include "../DiscordSDK/include/discord_register.h"
#include "../DiscordSDK/include/discord_rpc.h"
#include <windows.h>
#include <string>
#include <iostream>
#include <chrono>

using namespace std;

const char* c_str();

class Discord {
public:
	void Initialize(string publickey);
	void SetupHacker();
	void SetupDog();
	void SetupCat();
	void SetupCPP();
	void SetupChips();
	void SetupEzhik();
};