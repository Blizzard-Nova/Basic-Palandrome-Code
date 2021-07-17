
#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int j ;
	int length = 0;
	string baka = "Superman";
	int flag=0;
	while (baka[i] != 0)
	{
		i++;
	}
	length = i;
	for (j = 0; j < length; j++)
	{
		if (baka[j] != baka[length - j - 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag)
		cout << "Not Palindrome \n";
	else
		cout << "Palindrome \n";
	return 0;
}