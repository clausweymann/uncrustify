
int foo(int bar)
{
	for (;;)
	{
		break;
	}
	if (a)
	{
		foo();
	}

	if (b)
		if (c)
			bar();
		else
			;

	else
	{
		foo();
	}
	switch (a)
	{
	case 1: break;
	case 2: break;
	default: break;
	}
	while (b-->0)
	{
		bar();
	}
	do
	{
		bar();
	} while (b-->0  );
}

enum FPP {
	FPP_ONE = 1,
	FPP_TWO = 2,
};

struct narg {
	int abc;
	char def;

	const char *ghi;
};
