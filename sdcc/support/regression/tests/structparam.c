/*  Test struct / union parameters

    type: int, long, long long

 */

#include <testfwk.h>

struct s
{
	{type} a;
	{type} b;
};

// Callee
{type} f(struct s s)
{
	return s.a + s.b;
}

// Caller
{type} g({type} i, {type} j)
{
	struct s s = {i, j};
	return f(s);
}

void testParam (void)
{
	ASSERT (g(23, 42) == 23 + 42);
}

