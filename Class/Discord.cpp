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
	discordPresence.state = u8"����� �� ����������";
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
	discordPresence.details = u8"������ ����� �����";
	discordPresence.state = u8"���� ��� ���� ��� :)";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "zdorove-sibainu";
	discordPresence.largeImageText = u8"������ �����";
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
	discordPresence.details = u8"� �� ������ �����?";
	discordPresence.state = u8"���� ������ 0_0";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "1130907";
	discordPresence.largeImageText = u8"�����";
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
	discordPresence.details = u8"�� ����� ������?";
	discordPresence.state = u8"����� 2 ����������?";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "1200px-iso_c__logo_svg";
	discordPresence.largeImageText = u8"���� � ����";
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
	discordPresence.details = u8"�������";
	discordPresence.state = u8"���� ������ 0_0";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "potatochip";
	discordPresence.largeImageText = u8"�������� LayS";
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
	discordPresence.details = u8"������ ����";
	discordPresence.state = u8"� �������";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "er";
	discordPresence.largeImageText = u8"�� ��� � ���������";
	discordPresence.smallImageKey = "er";
	discordPresence.smallImageText = "Discord RPC By maj0r";
	discordPresence.instance = 1;


	Discord_UpdatePresence(&discordPresence);
}