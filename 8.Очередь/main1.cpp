#include <iostream>

#include "Queue2.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	Queue2 <int> st;

	st.Push(2);
	st.Push(12);
	st.Push(26);
	st.Push(32);
	st.Push(1);
	st.Push(3545);

	
	try
	{
		cout << st.Pop() << endl;
		cout << st.Pop() << endl;
		cout << st.Pop() << endl;
		cout << st.Pop() << endl;
		cout << st.Pop() << endl;
		cout << st.Pop() << endl;
	}
catch (const char*message)
	{
		cout << "Error:" << message << endl;
	}
	return 0;
}