#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>

using namespace std;
string txtpass = "QWERTYUIOPASDFGHJKLZXCVBNM"
"qwertyuiopasdfghjklzxcvbnm"
"1234567890"
"_-";
string txtlog = "qwertyuiopasdfghjklzxcvbnm";
string ans="no", login, password;
int lenpass;

int main()
{
	srand(time(NULL));
	while (true)
	{
		int lenlog = rand() % 6 + 4;
		do
		{
			cout << "Enter len pass: ";
			cin >> lenpass;
			for (int i = 0; i < lenlog; i++)
				login += txtlog[rand() % 26];
			for (int i = 0; i < lenpass; i++)
				password += txtpass[rand() % 64];

			cout << endl << "Your login: " << login << endl << "Your pass: " << password << endl;
			cout << "Do you want to change password? yes/no: ";
			cin >> ans;
			if (ans != "yes" || ans != "Yes" || ans != "YES")
				system("cls");
			if (ans == "no" || ans == "No" || ans == "NO")
				break;

		} while (ans != "yes" || ans != "Yes" || ans != "YES");

		cout << "Press any key to confirm action" << endl;
		_getch();
		system("cls");
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(50);
		cout << '-';
		Sleep(100);
		cout << endl << "Close the window? yes/no: ";
		cin >> ans;
		system("cls");
		if (ans == "yes" || ans == "Yes" || ans == "YES")
			break;
	}
	system("cls");
	cout << "Press ENTER to continue ..." << endl << endl;
	return 0;
}