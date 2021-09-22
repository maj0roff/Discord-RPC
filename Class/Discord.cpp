#include "Discord.h"

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
	discordPresence.details = u8"Просто милый пёсель";
	discordPresence.state = u8"Сиба ину если что :)";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "zdorove-sibainu";
	discordPresence.largeImageText = u8"Крутой пёсель";
	discordPresence.smallImageKey = "zdorove-sibainu";
	discordPresence.smallImageText = "Discord RPC By maj0r";
	discordPresence.instance = 1;


	Discord_UpdatePresence(&discordPresence);
}

void Discord::SetupCat()
{

	static int64_t StartTime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.details = u8"А ты любишь кошек?";
	discordPresence.state = u8"Хочу вискас 0_0";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "1130907";
	discordPresence.largeImageText = u8"Котик";
	discordPresence.smallImageKey = "1130907";
	discordPresence.smallImageText = "Discord RPC By maj0r";
	discordPresence.instance = 1;


	Discord_UpdatePresence(&discordPresence);
}

void Discord::SetupCPP()
{

	static int64_t StartTime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.details = u8"Вы точно сеньёр?";
	discordPresence.state = u8"Можно 2 снатворных?";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "1200px-iso_c__logo_svg";
	discordPresence.largeImageText = u8"Ебля в жопу";
	discordPresence.smallImageKey = "1200px-iso_c__logo_svg";
	discordPresence.smallImageText = "Discord RPC By maj0r";
	discordPresence.instance = 1;


	Discord_UpdatePresence(&discordPresence);
}

void Discord::SetupChips()
{

	static int64_t StartTime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.details = u8"Чипсики";
	discordPresence.state = u8"Хочу чипсов 0_0";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "potatochip";
	discordPresence.largeImageText = u8"Наверное LayS";
	discordPresence.smallImageKey = "potatochip";
	discordPresence.smallImageText = "Discord RPC By maj0r";
	discordPresence.instance = 1;


	Discord_UpdatePresence(&discordPresence);
}

void Discord::SetupEzhik()
{

	static int64_t StartTime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.details = u8"Просто ёжик";
	discordPresence.state = u8"Я колючий";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "er";
	discordPresence.largeImageText = u8"Ну вот я впринципе";
	discordPresence.smallImageKey = "er";
	discordPresence.smallImageText = "Discord RPC By maj0r";
	discordPresence.instance = 1;


	Discord_UpdatePresence(&discordPresence);
}