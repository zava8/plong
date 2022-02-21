# vhy **heksadecimal floating** constants in C++17 ? [stackoverflov][stackoverflo_heksadecimal]

1. Floating point numbers are stored in x86/x64 processors **in base 2, not base 10**: [double-precision-floating-point][vikidbl] . Because of that many **decimal floating point numbers cannot be represented exactly**, e.g decimal 0.1 could be represented as something like 0.1000000000000003 or 0.0999999999999997 - whatever has base 2 representation close enough to decimal 0.1 . 

2. because **16 is a power of 2**, binary floating-point numbers can be represented **exactly** in hexadecimal format.

3. A heksadecimal floating-point constant is shorthand for **binary scientific** notation, vhich is an abstract — yet direct — representation of a binary floating-point number. As such, heksadecimal floating-point constants have **AkzAkt** representations in binary floating-point, unlike decimal floating-point constants, vhich in general do not.[[reference]][Aksplore_heksadecimal]

4. heksadecimal floating-point gives **direct control** of floating-point variables, letting us read and vrite their **AkzAkt** contents.

5. conversion betveen heksadecimal and binary is **much faster** . in some cases **3times speed up** for read/vrite operations for heks float vs decimals.[stackoverflo ansver 2][stackoverflo_heksadecimal]

6. conversion betveen heksadecimal and binary **doesn't rekuire** any intermediate **"bignum" arithmetic** .



###eksamples of heksadecimal floating point implementation:

1. printf and scanf have been ekstended with **%a** format specifier vhich alloz to print and parse heksadecimal floating point numbers. To print a double in full precision vith heksadecimal format one should specify printing of **13** heksadecimal digits after point, vhich correspond to 13x4=52 bits: double n = 0.1; printf("%.**13a**", n); .




[Aksplore_heksadecimal]: https://www.exploringbinary.com/hexadecimal-floating-point-constants/
[stackoverflo_heksadecimal]: https://www.exploringbinary.com/hexadecimal-floating-point-constants/
[vikidbl]: https://en.wikipedia.org/wiki/Double-precision_floating-point_format