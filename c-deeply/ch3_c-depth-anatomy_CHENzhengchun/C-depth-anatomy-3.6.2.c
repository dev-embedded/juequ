// 默认情况下,函数被存放在.text节中
void func1()       // stored in .text
{
	......
}

// 将函数存放在.my_data1节中
#pragma code_seg(".my_data1")
void func2()       // stored in my_data1
{
	......
}

// r1为标识符,将函数放入.my_data2节中
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
