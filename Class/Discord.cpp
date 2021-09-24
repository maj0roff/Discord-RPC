#include "Discord.h"

bool FileIsExist(std::string filePath)
{
	bool isExist = false;
	std::ifstream fin(filePath.c_str());

	if (fin.is_open())
		isExist = true;

	fin.close();
	return isExist;
}

void Discord::Initialize(string publickey)
{
	DiscordEventHandlers Handle;
	memset(&Handle, 0, sizeof(Handle));
	Discord_Initialize(publickey.c_str(), &Handle, 1, NULL);

}

void Discord::SetupHacker()
{

	static int64_t StartTime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.details = u8"Linux Gang";
	discordPresence.state = u8"Точно не девственик";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "1386-1250x781";
	discordPresence.largeImageText = "Matrix";
	discordPresence.smallImageKey = "1386-1250x781";
	discordPresence.smallImageText = "Discord RPC By maj0r";
	discordPresence.instance = 1;
    
    
    Discord_UpdatePresence(&discordPresence);
}

void Discord::SetupDog()
{

	static int64_t StartTime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.details = u8"Siba Inu - Если что ;)";
	discordPresence.state = u8"Это ведь милый песёль ;)";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "zdorove-sibainu";
	discordPresence.largeImageText = "Собачка";
	discordPresence.smallImageKey = "zdorove-sibainu";
	discordPresence.smallImageText = "Discord RPC By maj0r";
	discordPresence.instance = 1;


	Discord_UpdatePresence(&discordPresence);
}
