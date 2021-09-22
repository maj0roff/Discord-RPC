#include "Class/Discord.h"
#include "Class/cel.h"

Discord* g_Discord;


int main()
{
	// Locales
	string publickey;

	int start;
	int uin;

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cel::print("         _nnnn_", color_green);
	cel::print("        dGGGGMMb", color_green);
	cel::print("       @p~qp~~qMb", color_green);
	cel::print("       M|@||@) M|", color_green);
	cel::print("       @,----.JM|", color_green);
	cel::print("      JS^\__/  qKL", color_green);
	cel::print("     dZP        qKRb", color_green);
	cel::print("    dZP          qKKb", color_green);
	cel::print("   fZP            SMMb", color_green);
	cel::print("   HZM            MMMM", color_green);
	cel::print("   FqM            MMMM", color_green);
	cel::print("      Discord RPC", color_green);
	cel::print("     Author : maj0r", color_green);
	cel::spacing();
	cel::printbracket("1", "Помощь", color_red);
	cel::printbracket("2", "Использовать программу", color_red);
	cel::printonline("Выбор : ", color_gray);
	cin >> start;
	if (start == 1)
	{
		system("start https://github.com/maj0roff/DiscordRPC/blob/main/README.md");
	}
	else if (start == 2)
	{
		cel::printonline("Public Key вашего приложения : ", color_green);
		cin >> publickey;
		cel::print("\n", color_white);

		g_Discord->Initialize(publickey);

		cel::printbracket("1", "Хакер", color_green);
		cel::printbracket("2", "Собачка", color_green);
		cel::printbracket("3", "Кошечка", color_green);
		cel::printbracket("4", "C++", color_green);
		cel::printbracket("5", "Чипсы", color_green);
		cel::printbracket("6", "Ёж", color_green);
		cel::printonline("Ваш выбор : ", color_gray);
		cin >> uin;

		if (uin == 1)
		{
			g_Discord->SetupHacker();
			cel::print("Успешно активировано!", color_green);
			cel::print("Не выходите из програмы для продолжения работы", color_gray);
		}
		else if (uin == 2)
		{
			g_Discord->SetupDog();
			cel::print("Успешно активировано!", color_green);
			cel::print("Не выходите из програмы для продолжения работы", color_gray);
		}
		else if (uin == 3)
		{
			g_Discord->SetupCat();
			cel::print("Успешно активировано!", color_green);
			cel::print("Не выходите из програмы для продолжения работы", color_gray);
		}
		else if (uin == 4)
		{
			g_Discord->SetupCPP();
			cel::print("Успешно активировано!", color_green);
			cel::print("Не выходите из програмы для продолжения работы", color_gray);
		}
		else if (uin == 5)
		{
			g_Discord->SetupChips();
			cel::print("Успешно активировано!", color_green);
			cel::print("Не выходите из програмы для продолжения работы", color_gray);
		}
		else if (uin == 6)
		{
			g_Discord->SetupEzhik();
			cel::print("Успешно активировано!", color_green);
			cel::print("Не выходите из програмы для продолжения работы", color_gray);
		}
		else
		{
			cel::print("Invalid input", color_red);
			Sleep(1500);
			system("exit");
		}

		system("pause");

	}
	else
	{
		cel::print("Invalid input", color_red);
		Sleep(1500);
		system("exit");
	}
	
}
