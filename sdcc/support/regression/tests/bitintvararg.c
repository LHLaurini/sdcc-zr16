/** bit-precise integers as variable parameters

    width: 6, 8, 9, 15, 16, 17, 24, 32, 33, 40, 48, 63, 64, 65
*/

#include <testfwk.h>

#include <limits.h>
#include <stdarg.h>

// clang 11 supports bit-precise types, but deviates a bit from C23.
#if __clang_major__ == 11
#define __SDCC_BITINT_MAXWIDTH 128
#define _BitInt _ExtInt
#endif

#if __SDCC_BITINT_MAXWIDTH >= {width} // TODO: When we can regression-test in --std-c23 mode, use the standard macro from limits.h instead!

typedef unsigned _BitInt({width}) bitinttype;

static bitinttype
returnFirstArg(int marker, ...)
{
    va_list ap;
    bitinttype i;

    va_start(ap, marker);
    i = va_arg(ap, bitinttype);

    va_end(ap);

    return i;
}

static bitinttype
returnSecondArg(int marker, ...)
{
    va_list ap;
    bitinttype i;

    va_start(ap, marker);
    UNUSED(va_arg(ap, bitinttype));
    i = va_arg(ap, bitinttype);

    va_end(ap);

    return i;
}
#endif

void
testBitIntVarArg(void)
{
#if __SDCC_BITINT_MAXWIDTH >= {width} // TODO: When we can regression-test in --std-c23 mode, use the standard macro from limits.h instead!
#if !defined(__SDCC_mcs51) || {width} != 33 // Bug #3363
    int marker = 12;

    ASSERT(returnFirstArg(marker, (bitinttype)0xaaaaaaaaaaaaaaaaull, (bitinttype)0x5555555555555555ull) == (bitinttype)0xaaaaaaaaaaaaaaaaull);
    ASSERT(returnSecondArg(marker, (bitinttype)0xaaaaaaaaaaaaaaaaull, (bitinttype)0x5555555555555555ull) == (bitinttype)0x5555555555555555ull);
#endif
#endif
}

