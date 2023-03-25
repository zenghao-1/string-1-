#include <iostream>
using namespace std;
#include <string>

int main()
{
	string MyString;

	MyString = "My son is:";
	string first = "老大";
	string second = "老二";
	string thrid = "老三";
	string No = "你没选择到孩子";

	int x, y;

	cout << "输入数字来选择你的随机孩子。" << endl << "第一个数字是：";
	cin >> x;
	cout << "第二个数字是：";
	cin >> y;

	if (x + y < 50 || x * y < 100 )
	{
		MyString = MyString + first;
		cout << "你的选择结果是：" << MyString << endl;
	}

	else if ((x + y > 50 && x + y < 90) || (x * y > 100 && x * y < 1000) )
	{
		MyString = MyString + second;
		cout << "你的选择结果是：" << MyString << endl;
	}

	else if (x + y > 90 && x + y < 100)
	{
		MyString = MyString + thrid;
		cout << "你的选择结果是：" << MyString << endl;
	}

	else
	{
		MyString = MyString + No;
		cout << "你的选择结果是：" << MyString << endl;
	}

}