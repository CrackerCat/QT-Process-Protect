// Protect_Process_Test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>

typedef int(*Protect)(int pid);

int main()
{
	/*
	Protect temp1 = (Protect)GetProcAddress(GetModuleHandleA("Protect_Process_Ring3.dll"), "Protect");
	temp1(300);
	getchar();*/
	LoadLibraryA("Protect_Process_Ring3.dll");
	PROC temp2 = GetProcAddress(GetModuleHandleA("Protect_Process_Ring3.dll"), "RE_Protect");
	temp2();

    return 0;
}

