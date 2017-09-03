// ucwrap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma comment(lib, "rpcrt4.lib")  // UuidCreate - Minimum supported OS Win 2000
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	UUID uuid;
	UuidCreate(&uuid);
	char *str;
	UuidToStringA(&uuid, (RPC_CSTR*)&str);
	cout << str << endl;
	RpcStringFreeA((RPC_CSTR*)&str);
	return 0;
}
