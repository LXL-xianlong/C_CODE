#define _CRT_SECURE_NO_WARNINGS 1
#include"bigint.h"

typedef enum { ADD, SUB, MUL, DIV, MOD } OPER;

void Data_Handler(BigInt &bt, BigInt &bt1, BigInt &bt2, OPER &op)
{
	bt.clear();
	bt1.clear();
	bt2.clear();

	
	std::string data = "m=41431&n=41431&cmd=1";

	
	int pos = data.find('=');
	const char *p = data.c_str() + pos + 1;
	while (*p >= '0' && *p <= '9')
	{
		bt1.push_front(*p - '0');
		p++;
	}

	pos = data.find('=', pos + 1);
	p = data.c_str() + pos + 1;
	while (*p >= '0' && *p <= '9')
	{
		bt2.push_front(*p - '0');
		p++;
	}

	pos = data.find('=', pos + 1);
	p = data.c_str() + pos + 1;
	if (*p == '1')
		op = ADD;
	if (*p == '2')
		op = SUB;
	if (*p == '3')
		op = MUL;
	if (*p == '4')
		op = DIV;

}


void main()
{
	BigInt bt, bt1, bt2;
	OPER op;
	Data_Handler(bt, bt1, bt2, op);
	cout << "bt1 = " << bt1 << endl;
	cout << "bt2 = " << bt2 << endl;
	cout << "cmd = " << op << endl;
}


//void Test_SeqList()
//{
//	SeqList<unsigned int> list;
//	for (int i = 1; i <= 10; ++i)
//		list.push_back(i);
//	for (int i = 1; i <= 10; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//	list.push_front(20);
//	for (int i = 1; i <= list.size(); ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//	list.pop_back();
//	list.pop_front();
//	for (int i = 1; i <= list.size(); ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//	cout << "back = " << list.back() << endl;
//	cout << "front = " << list.front() << endl;
//
//	list.reverse();
//	for (int i = 1; i <= list.size(); ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//	list.sort();
//	for (int i = 1; i <= list.size(); ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//
//
//void main()
//{
//	Test_SeqList();
//}