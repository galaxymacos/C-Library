#include "STRING.h"
#include <cstdio>
#include <iostream>

STRING::STRING() = default;

void STRING::t_strchr()
{
	char str[] = "This is a sample string";
	printf("Looking for the 's' character in \"%s\"...\n", str);
	char* pch = strchr(str, 's');
	while (pch != nullptr)
	{
		printf("found at %d\n", pch - str + 1);
		pch = strchr(pch + 1, 's');
	}
}


STRING::~STRING() = default;
