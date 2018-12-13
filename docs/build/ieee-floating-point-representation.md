---
title: "IEEE Floating-Point Representation (C++) - Visual Studio"
ms.date: "12/14/2018"
helpviewer_keywords: ["float keyword", "real*8 value", "floating-point numbers, IEEE representation", "double data type, floating-point representation", "IEEE floating point representation", "real*10 value", "long double", "real*4 value"]
ms.assetid: 537833e8-fe05-49fc-8169-55fd0314b195
---
# IEEE Floating-Point Representation

Microsoft Visual C++ is consistent with the IEEE numeric standards. The IEEE-754 standard describes floating-point formats, a way to represent real numbers in hardware. There are at least five internal formats for floating-point numbers that are representable in hardware targeted by the MSVC compiler, but the compiler only uses two of them. The *single-precision* (4-byte) and *double-precision* (8-byte) formats are used in Visual C++. Single-precision is declared using the keyword **float**. Double-precision is declared using the keyword **double**. The IEEE standard also specifies *half-precision* (2-byte) and *quadruple-precision* (16-byte) formats, as well as an *double-extended-precision* (10-byte) format, which some C and C++ compilers implement as the **long double** data type. In the Visual C++ compiler, the **long double** data type is treated as a distinct type, but the storage type maps to **double**. There is, however, intrinsic and assembly language support for computations using the other formats, including the double-extended-precision (10-byte) format, where supported by hardware.

The values are stored as follows:

|Value|Stored as|
|-----------|---------------|
|single-precision|sign bit, 8-bit exponent, 23-bit significand|
|double-precision|sign bit, 11-bit exponent, 52-bit significand|
|double-extended-precision|sign bit, 15-bit exponent, 64-bit significand|

In single-precision and double-precision formats, there is an assumed leading 1 in the fractional part, called the *significand* (and sometimes referred to as the *mantissa*), that is not stored in memory, so the significands are actually 24 or 53 bits, even though only 23 or 52 bits are stored. The double-extended-precision format actually stores this bit.

The exponents are biased by half of their possible value. This means you subtract this bias from the stored exponent to get the actual exponent. If the stored exponent is less than the bias, it is actually a negative exponent.

The exponents are biased as follows:

|Exponent|Biased by|
|--------------|---------------|
|8-bit (single-precision)|127|
|11-bit (double-precision)|1023|
|15-bit (double-extended-precision)|16383|

These exponents are not powers of ten; they are powers of two. That is, 8-bit stored exponents can range from -127 to 127, stored as 0 to 254. The value 2<sup>127</sup> is roughly equivalent to 10<sup>38</sup>, which is the actual limit of single-precision.

The significand is stored as a binary fraction of the form 1.XXX... . This fraction has a value greater than or equal to 1 and less than 2. Note that real numbers are always stored in *normalized form*; that is, the significand is left-shifted such that the high-order bit of the significand is always 1. Because this bit is always 1, it is assumed (not stored) in the single-precision and double-precision formats. The binary (not decimal) point is assumed to be just to the right of the leading 1.

The format, then, for the various sizes is as follows:

|Format|byte 1|byte 2|byte 3|byte 4|...|byte n|
|------------|------------|------------|------------|------------|---------|------------|
|single-precision| `SXXXXXXX`|`XMMMMMMM`|`MMMMMMMM`|`MMMMMMMM`|||
|double-precision|`SXXXXXXX`|`XXXXMMMM`|`MMMMMMMM`|`MMMMMMMM`|...|`MMMMMMMM`|
|double-extended-precision|`SXXXXXXX`|`XXXXXXXX`|`1MMMMMMM`|`MMMMMMMM`|...|`MMMMMMMM`|

`S` represents the sign bit, the `X`'s are the biased exponent bits, and the `M`'s are the significand bits. Note that the leftmost bit is assumed in single-precision and double-precision formats, but is present as "1" in byte 3 of the double-extended-precision format.

To shift the binary point properly, you first unbias the exponent and then move the binary point to the right or left the appropriate number of bits.

## Special values

The floating-point formats include some values that are treated specially.

### Zero

Zero cannot be normalized, which makes it unrepresentable in the normalized form of a single-precision or double-precision value. A special bit pattern of all zeroes represents 0. It's also possible to represent -0 as zero with the sign bit set, but -0 and 0 always compare as equal.

### Infinities

The +∞ and −∞ values are represented by an exponent of all ones and a significand of all zeroes. Both positive and negative infinities can be represented by using the sign bit.

### Subnormals

It's possible to represent numbers of smaller magnitude than the smallest normalized number. These numbers are known as *subnormal* or *denormal* numbers. If the exponent is all zeroes and the significand is non-zero, then implicit leading bit of the significand is considered to be zero, not one. The precision of subnormal numbers goes down as the number of leading zeroes in the significand goes up.

### NaN - Not a Number

It's possible to represent values that are not a real number, such as 0 / 0, in the IEEE floating-point format. A value of this kind is called a *NaN*. A NaN is represented by an exponent of all ones and a non-zero significand. There are two kinds of NaNs, *quiet* NaNs, or QNaNs, and *signalling* NaNs, or SNaNs. Quiet NaNs have a leading one in the significand, and are generally propagated through an expression. They represent an indeterminate value, such as the result of dividing by infinity, or multiplying an infinity by zero. Signalling NaNs have a leading zero in the significand. These are used for operations that are not valid, to signal a floating-point hardware exception.

## Examples

The following are some examples in single-precision format:

- For the value 2, the sign bit is zero, and the stored exponent is 128, or 1000 0000 in binary, which is 127 plus 1. The stored binary significand is (1.) 000 0000 0000 0000 0000 0000, which has an implied leading 1 and binary point, so the actual significand is one.

   |Value|Formula|Binary representation|Hexadecimal|
   |-|-|-|-|
   |2|1 * 2<sup>1</sup>|0100 0000 0000 0000 0000 0000 0000 0000|0x40000000|

- The value -2. Same as +2 except that the sign bit is set. This is true for the negative of all IEEE format floating-point numbers.

   |Value|Formula|Binary representation|Hexadecimal|
   |-|-|-|-|
   |-2|-1 * 2<sup>1</sup>|1100 0000 0000 0000 0000 0000 0000 0000|0xC0000000|

- The value 4. Same significand, exponent increases by one (biased value is 129, or 100 0000 1 in binary.

   |Value|Formula|Binary representation|Hexadecimal|
   |-|-|-|-|
   |4|1 * 2<sup>2</sup>|0100 0000 1000 0000 0000 0000 0000 0000|0x40800000|

- The value 6. Same exponent, significand is larger by half — it's (1.) 100 0000 ... 0000 0000, which, since this is a binary fraction, is 1 1/2 because the values of the fractional digits are 1/2, 1/4, 1/8, and so forth.

   |Value|Formula|Binary representation|Hexadecimal|
   |-|-|-|-|
   |6|1.5 * 2<sup>2</sup>|0100 0000 1100 0000 0000 0000 0000 0000|0x40C00000|

- The value 1. Same significand as other powers of two, the biased exponent is one less than two at 127, or 011 1111 1 in binary.

   |Value|Formula|Binary representation|Hexadecimal|
   |-|-|-|-|
   |1|1 * 2<sup>0</sup>|0011 1111 1000 0000 0000 0000 0000 0000|0x3F800000|

- The value 0.75. The biased exponent is 126, 011 1111 0 in binary, and the significand is (1.) 100 0000 ... 0000 0000, which is 1 1/2.

   |Value|Formula|Binary representation|Hexadecimal|
   |-|-|-|-|
   |0.75|1.5 * 2<sup>-1</sup>|0011 1111 0100 0000 0000 0000 0000 0000|0x3F400000|

- The value 2.5. Exactly the same as two except that the bit that represents 1/4 is set in the significand.

   |Value|Formula|Binary representation|Hexadecimal|
   |-|-|-|-|
   |2.5|1.25 * 2<sup>1</sup>|0100 0000 0010 0000 0000 0000 0000 0000|0x40200000|

- 1/10 is a repeating fraction in binary. The significand is just shy of 1.6, and the biased exponent says that 1.6 is to be divided by 16 (it is 011 1101 1 in binary, which is 123 in decimal). The true exponent is 123 - 127 = -4, which means that the factor by which to multiply is 2<sup>-4</sup> = 1/16. Note that the stored significand is rounded up in the last bit — an attempt to represent the unrepresentable number as accurately as possible. (The reason that 1/10 and 1/100 are not exactly representable in binary is similar to the reason that 1/3 is not exactly representable in decimal.)

   |Value|Formula|Binary representation|Hexadecimal|
   |-|-|-|-|
   |0.1|1.6 * 2<sup>-4</sup>|0011 1101 1100 1100 1100 1100 1100 1101|0x3DCCCCCD|

- Zero is a special case that uses the formula for the minimum possible representable positive value, which is all zeroes.

   |Value|Formula|Binary representation|Hexadecimal|
   |-|-|-|-|
   |0|1 * 2<sup>-128</sup>|0000 0000 0000 0000 0000 0000 0000 0000|0x00000000|

## See also

[Why Floating-Point Numbers May Lose Precision](why-floating-point-numbers-may-lose-precision.md)