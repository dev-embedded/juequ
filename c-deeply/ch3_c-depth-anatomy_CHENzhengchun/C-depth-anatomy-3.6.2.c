// Ĭ�������,�����������.text����
void func1()       // stored in .text
{
	......
}

// �����������.my_data1����
#pragma code_seg(".my_data1")
void func2()       // stored in my_data1
{
	......
}

// r1Ϊ��ʶ��,����������.my_data2����
#pragma code_seg(push, r1, ".my_data2")
void func3()       // stored in my_data2
{
	......
}

int main()
{
	......
}

/* $readelf -a a.out for check which section it's placed. */
