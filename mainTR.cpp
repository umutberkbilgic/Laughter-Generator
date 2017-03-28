#include <iostream>
#include <string>

using namespace std;

int r(int min, int max) // generate number between "min" and "max" inclusively
{
	return (rand() % (max - min + 1) + min);
}

int main()
{
	const int cykaSize = 13;

	// for 3 and 4 intensity
	char salt[4] = {'a', 'a' ,'e', 'o'};
	char meat[6] = {'s', 'd', 'q', 'f', 'g', 'h'};
	string cyka[cykaSize] = {"cyka ", "blyad ", "kurwa ", "go ",
					   "fest ", "men ", "))))) ", "give ", 
					   "no scam ", "paypal ", ":)) ", "cyka blyad ", "bro "};

	// _init_
	string user = "";
	cout << "Select laughter density: \n[1] Komik\n[2] qomiq\n[3] olm cok iyi lan\n[4] yarildim aq\n" << endl;

	// main loop
	while (user != "exit")
	{
		// user input
		cout << endl;
		cin >> user;
		cout << endl;

		// 1 // just a random number of "ha"s
		if (user == "1")
		{
			for (int i = 0; i < r(2, 5); i++)
			{
				cout << "ha";
			}   cout << endl;
		}
		// 2 // "ha" and "ah" with random occurence and capitalization
		else if (user == "2")
		{
			for (int i = 0; i < r(4, 8); i++)
			{
				int hahaSel = r(1, 4);
				int capsSel = r(0, 5);

				if (hahaSel == 1)
				{
					if (capsSel < 2)
						cout << "ah";
					else if (capsSel == 3)
						cout << "AH";
					else if (capsSel == 4)
						cout << "aH";
					else
						cout << "Ah";
				}
				else
				{
					if (capsSel < 2)
						cout << "ha";
					else if (capsSel == 3)
						cout << "HA";
					else if (capsSel == 4)
						cout << "hA";
					else
						cout << "Ha";
				}
			} cout << endl;
		}
		// 3 // only 'a' or 'e' followed by one or two meat
		else if (user == "3")
		{
			for (int i = 0; i < r(4, 11); i++)
			{
				int saltSel = r(0, 3);
				int meatCountSel = r(1,2);

				cout << salt[saltSel];

				for (int j = 0; j < meatCountSel; j++)
				{
					int meatSel = r(0, 5);
					cout << meat[meatSel];
				}
				
			} cout << endl;
		}
		// 4 // one salt followed by 1,5 meat with caps randomization
		else if (user == "4")
		{
			for (int i = 0; i < r(4, 20); i++)
			{
				int saltSel = r(0,3);
				bool capsSel = r(0,1);
				int meatCountSel = r(0,6);

				if (capsSel == 0)
					cout << salt[saltSel];
				else
				{
					char c = toupper(salt[saltSel]);
					cout << c;
				}
				
				for (int j = 0; j < meatCountSel; j++)
				{
					int meatSel = r(0,5);

					if (capsSel == 0)
						cout << meat[meatSel];					
					else
					{
						char c = toupper(meat[meatSel]);
						cout << c;
					}

				}
			} cout << endl;
		}
		else if (user == "0")
		{
			for (int i = 0; i < r(10, 20); i++)
				cout << cyka[r(0, cykaSize - 1)];
			cout << endl;
		}
	}

	return 0;
}
