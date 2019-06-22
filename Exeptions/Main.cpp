#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{
	try
	{
		// Some code
		int x = 0;
		int y = 0;
		cin >> x;
		cin >> y;
		if ()
			throw x;
		if (y == 0)
			throw logic_error("Cannot divide by 0");
		int r = x / y;
		cout << r << endl;
	}
	catch (int e)
	{
		cout << "Number is :" << e << endl;
	}
	catch (char e)
	{
		cout << "Character is :" << e << endl;
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "Unknown error occurred" << endl;
	}

	system("pause");
	return 0;
}