#include "Class/Discord.h"
#include "Class/cel.h"

Discord* g_Discord;

void wronginput()
{
	cel::print("Неверный ввод", color_red);
	Sleep(1500);
	system("exit");
}

void logo(int color)
{
	cel::print("         _nnnn_", color);
	cel::print("        dGGGGMMb", color);
	cel::print("       @p~qp~~qMb", color);
	cel::print("       M|@||@) M|", color);
	cel::print("       @,----.JM|", color);
	cel::print("      JS^\__/  qKL", color);
	cel::print("     dZP        qKRb", color);
	cel::print("    dZP          qKKb", color);
	cel::print("   fZP            SMMb", color);
	cel::print("   HZM            MMMM", color);
	cel::print("   FqM            MMMM", color);
	cel::print("   8D7____________JHE8", color);
	cel::print("", color);
	cel::print("      Discord RPC", color_white);
	cel::print("     Author : maj0r", color_white);
	cel::spacing();
}

void mainmenu()
{
	int userin;

	cel::spacing();
	cel::print("Выбор стиля", color_blue);
	cel::spacing();
	cel::printbracket("1", "Хакер", color_blue);
	cel::printbracket("2", "Собачка", color_blue);
	cel::spacing();
	cel::printonline("Консоль : ", color_blue);
	cin >> userin;
	if (userin == 1)
	{
		g_Discord->SetupHacker();
	}
	else if (userin == 2)
	{
		g_Discord->SetupDog();
	}
	else
	{
		wronginput();
	}
}

void initializing()
{
	ifstream readdata("RPCData.txt");
	string appid;
	int saveyn;
	
	
	if (!FileIsExist("RPCData.txt"))
	{
		cel::spacing();
		cel::print("Введите AppId", color_blue);
		cel::spacing();
		cel::printonline("Консоль : ", color_blue);
		cin >> appid;
		cel::spacing();
		cel::print("Сохранить AppId для последуещего использования?", color_blue);
		cel::spacing();
		cel::printbracket("1", "Да", color_blue);
		cel::spacing();
		cel::printbracket("2", "Нет", color_blue);
		cel::spacing();
		cel::printonline("Консоль : ", color_blue);

		cin >> saveyn;

		if (saveyn == 1)
		{
			ofstream datasystem;

			datasystem.open("RPCData.txt");
			datasystem << appid;
			datasystem.close();


			if (FileIsExist("RPCData.txt"))
			{
				cel::print("Успешно сохранено!", color_green);
				mainmenu();
			}
			else if (!FileIsExist("RPCData.txt"))
			{
				cel::print("Ошибка сохранения!", color_green);
				Sleep(1000);
				system("exit");
			}

			

		}
		else if (saveyn == 2)
		{
			mainmenu();
		}
		else
		{
			wronginput();
		}
	}

	else if (FileIsExist("RPCData.txt"))
	{
		readdata >> appid;
		readdata.close();

		cel::spacing();
		cel::print(("Успешно загружено из файла! " + appid), color_green);
		// Загрузка из файла, пока что просто переводит на mainmenu (Пофиксил строчками выше :) )
		mainmenu();
	}


	g_Discord->Initialize(appid);

}

void starting()
{
	int yesno;

	cel::spacing();
	cel::print("Пройти обучение?", color_blue);
	cel::spacing();
	cel::printbracket("1", "Да", color_green);
	cel::printbracket("2", "Нет", color_green);
	cel::spacing();
	cel::printonline("Консоль : ", color_blue);
	cin >> yesno;
	if (yesno == 1)
	{
		system("start https://github.com/maj0roff/Discord-RPC/blob/master/README.md");
	}
	else if (yesno == 2)
	{
		initializing();
	}
	else
	{
		wronginput();
	}
	cel::spacing();

}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	logo(color_blue);
	
	starting();


	cel::print("Для выхода нажмите любую клавишу", color_red);
	system("pause");
}
