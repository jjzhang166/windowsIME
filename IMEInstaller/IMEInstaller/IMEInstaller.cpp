// IMEInstaller.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
#include "Imm.h"
#pragma comment(lib,"imm32.lib")
int _tmain(int argc, _TCHAR* argv[])
{
	HKL IME = ImmInstallIME(L"imesample.ime", L"我的输入法");
	if(IME==0)
	{
		printf("注册输入法失败，请注销（或重启）计算机再试验！\n");
	}
	else
	{
		printf("注册输入法成功！\n");
	}
	printf("按任意键退出!\n");
	getchar();
	return 0;
}