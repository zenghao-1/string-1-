#include <iostream>
using namespace std;
#include <string>

int main()
{
	string MyString;

	MyString = "My son is:";
	string first = "�ϴ�";
	string second = "�϶�";
	string thrid = "����";
	string No = "��ûѡ�񵽺���";

	int x, y;

	cout << "����������ѡ�����������ӡ�" << endl << "��һ�������ǣ�";
	cin >> x;
	cout << "�ڶ��������ǣ�";
	cin >> y;

	if (x + y < 50 || x * y < 100 )
	{
		MyString = MyString + first;
		cout << "���ѡ�����ǣ�" << MyString << endl;
	}

	else if ((x + y > 50 && x + y < 90) || (x * y > 100 && x * y < 1000) )
	{
		MyString = MyString + second;
		cout << "���ѡ�����ǣ�" << MyString << endl;
	}

	else if (x + y > 90 && x + y < 100)
	{
		MyString = MyString + thrid;
		cout << "���ѡ�����ǣ�" << MyString << endl;
	}

	else
	{
		MyString = MyString + No;
		cout << "���ѡ�����ǣ�" << MyString << endl;
	}

}