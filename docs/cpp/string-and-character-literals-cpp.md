---
title: "String and character literals (C++)"
description: "How to declare and define string and character literals in C++."
ms.date: 07/01/2026
f1_keywords: ["R", "L", "u", "u8", "LR", "uR", "u8R"]
helpviewer_keywords: ["literal strings [C++]", "string literals [C++]"]
---
# String and character literals (C++)

C++ supports various string and character types, and provides ways to express literal values of each of these types. In your source code, you express the content of your character and string literals using a character set. Universal character names and escape characters allow you to express any string using only the basic source character set. A raw string literal enables you to avoid using escape characters, and can be used to express all types of string literals. You can also create `std::string` literals without having to perform extra construction or conversion steps.

```cpp
#include <string>
using namespace std::string_literals; // enables s-suffix for std::string literals

int main()
{
    // Character literals
    auto c0 =   'A'; // char
    auto c1 = u8'A'; // char
    auto c2 =  L'A'; // wchar_t
    auto c3 =  u'A'; // char16_t
    auto c4 =  U'A'; // char32_t

    // Multicharacter literals
    auto m0 = 'abcd'; // int, value 0x61626364

    // String literals
    auto s0 =   "hello"; // const char*
    auto s1 = u8"hello"; // const char* before C++20, encoded as UTF-8,
                         // const char8_t* in C++20
    auto s2 =  L"hello"; // const wchar_t*
    auto s3 =  u"hello"; // const char16_t*, encoded as UTF-16
    auto s4 =  U"hello"; // const char32_t*, encoded as UTF-32

    // Raw string literals containing unescaped \ and "
    auto R0 =   R"("Hello \ world")"; // const char*
    auto R1 = u8R"("Hello \ world")"; // const char* before C++20, encoded as UTF-8,
                                      // const char8_t* in C++20
    auto R2 =  LR"("Hello \ world")"; // const wchar_t*
    auto R3 =  uR"("Hello \ world")"; // const char16_t*, encoded as UTF-16
    auto R4 =  UR"("Hello \ world")"; // const char32_t*, encoded as UTF-32

    // Combining string literals with standard s-suffix
    auto S0 =   "hello"s; // std::string
    auto S1 = u8"hello"s; // std::string before C++20, std::u8string in C++20
    auto S2 =  L"hello"s; // std::wstring
    auto S3 =  u"hello"s; // std::u16string
    auto S4 =  U"hello"s; // std::u32string

    // Combining raw string literals with standard s-suffix
    auto S5 =   R"("Hello \ world")"s; // std::string from a raw const char*
    auto S6 = u8R"("Hello \ world")"s; // std::string from a raw const char* before C++20, encoded as UTF-8,
                                       // std::u8string in C++20
    auto S7 =  LR"("Hello \ world")"s; // std::wstring from a raw const wchar_t*
    auto S8 =  uR"("Hello \ world")"s; // std::u16string from a raw const char16_t*, encoded as UTF-16
    auto S9 =  UR"("Hello \ world")"s; // std::u32string from a raw const char32_t*, encoded as UTF-32
}
```

String literals can have no prefix, or `u8`, `L`, `u`, and `U` prefixes to denote narrow character (single-byte or multibyte), UTF-8, wide character (UCS-2 or UTF-16), UTF-16, and UTF-32 encodings, respectively. A raw string literal can have `R`, `u8R`, `LR`, `uR`, and `UR` prefixes for the raw version equivalents of these encodings. To create temporary or static `std::string` values, you can use string literals or raw string literals with an `s` suffix. For more information on the basic source character set, universal character names, and using characters from extended codepages in your source code, see [Character sets](../cpp/character-sets.md).

## Character literals

A *character literal* is composed of a constant character. It's represented by the character surrounded by single quotation marks. There are five kinds of character literals:

- Ordinary character literals of type **`char`**, for example `'a'`
- UTF-8 character literals of type **`char`** (**`char8_t`** in C++20), for example `u8'a'`
- Wide-character literals of type **`wchar_t`**, for example `L'a'`
- UTF-16 character literals of type **`char16_t`**, for example `u'a'`
- UTF-32 character literals of type **`char32_t`**, for example `U'a'`

The character used for a character literal may be any character, except for the reserved characters backslash (**`\`**), single quotation mark (**`'`**), or newline. Reserved characters can be specified by using an escape sequence. Characters may be specified by using universal character names, as long as the type is large enough to hold the character.

### Encoding

Character literals are encoded differently based on their prefix.

- A character literal without a prefix is an ordinary character literal. The value of an ordinary character literal containing a single character, escape sequence, or universal character name that the execution character set can represent has a value equal to the numerical value of its encoding in the execution character set. An ordinary character literal that contains more than one character, escape sequence, or universal character name is a *multicharacter literal*. If the character can't be represented in the execution character set, it's a *non-encodable character literal*. A multicharacter literal and a non-encodable character literal have type **`int`**, and their value is implementation-defined. For MSVC, see the **Microsoft-specific** section below. The execution character set is defined at compile time and defaults to the codepage of the host machine. You can set the execution charset by using the [`/execution-charset`](../build/reference/execution-charset-set-execution-character-set.md) switch.
- A character literal that begins with the `L` prefix is a wide-character literal. The value of a wide-character literal containing a single character, escape sequence, or universal character name has a value equal to the numerical value of its encoding in what the standard calls the *execution wide-character set*, which on Windows is defined as UTF-16. If the character has no representation in the execution wide-character set, it's an error.
- A character literal that begins with the `u8` prefix is a UTF-8 character literal. The value of a UTF-8 character literal containing a single character, escape sequence, or universal character name has a value equal to its ISO 10646 code point value if it can be represented by a single UTF-8 code unit (corresponding to the C0 Controls and Basic Latin Unicode block). If the value can't be represented by a single UTF-8 code unit, the program is ill-formed. A UTF-8 character literal containing more than one character, escape sequence, or universal character name is ill-formed.
- A character literal that begins with the `u` prefix is a UTF-16 character literal. The value of a UTF-16 character literal containing a single character, escape sequence, or universal character name has a value equal to its ISO 10646 code point value if it can be represented by a single UTF-16 code unit (corresponding to the basic multi-lingual plane). If the value can't be represented by a single UTF-16 code unit, the program is ill-formed. A UTF-16 character literal containing more than one character, escape sequence, or universal character name is ill-formed.
- A character literal that begins with the `U` prefix is a UTF-32 character literal. The value of a UTF-32 character literal containing a single character, escape sequence, or universal character name has a value equal to its ISO 10646 code point value. A UTF-32 character literal containing more than one character, escape sequence, or universal character name is ill-formed.

### Escape sequences

There are three kinds of escape sequences: simple, numeric, and universal. Escape sequences can be any of the following values:

| Value | Escape sequence |
| --- | --- |
| newline | `\n` |
| backslash | `\\` |
| horizontal tab | `\t` |
| question mark | `?` or `\?` |
| vertical tab | `\v` |
| single quote | `\'` |
| backspace | `\b` |
| double quote | `\"` |
| carriage return | `\r` |
| form feed | `\f` |
| alert (bell) | `\a` |
| the null character | `\0` |
| octal | `\ooo` |
| delimited octal (C++23) | `\o{OOO}` |
| hexadecimal | `\xhhh` |
| delimited hexadecimal (C++23) | `\x{hhhh}` |
| universal character | `\uHHHH` or `\UHHHHHHHH` |
| delimited universal (C++23) | `\u{HHHH}` |
| named universal (C++23) | `\N{UNIVERSAL CHARACTER NAME}` |

This sample code shows examples of simple escape sequences using ordinary character literals. The same escape sequence syntax is valid for the other character literal types.

```cpp
#include <iostream>
using namespace std;

int main() {
    char newline = '\n';
    char tab = '\t';
    char backspace = '\b';
    char backslash = '\\';
    char nullChar = '\0';

    cout << "Newline character: " << newline << "ending" << endl;
    cout << "Tab character: " << tab << "ending" << endl;
    cout << "Backspace character: " << backspace << "ending" << endl;
    cout << "Backslash character: " << backslash << "ending" << endl;
    cout << "Null character: " << nullChar << "ending" << endl;
}
/* Output:
Newline character:
ending
Tab character:  ending
Backspace character:ending
Backslash character: \ending
Null character: ending
*/
```

The backslash character (**`\`**) is a line-continuation character when it's placed at the end of a line. If you want a backslash character to appear as a character literal, you must type two backslashes in a row (**`\\`**). For more information about the line continuation character, see [Phases of Translation](../preprocessor/phases-of-translation.md).

Numeric escape sequences include octal and hexadecimal escape sequences. These sequences result in a numeric value when the compiler evaluates them.

An octal escape sequence is a backslash followed by a sequence of one to three octal digits. An octal escape sequence terminates at the first character that's not an octal digit, if encountered sooner than the third digit. The highest possible octal value is `\377`. C++23 added delimited octal sequences which consist of a backslash followed by the characters `o{`, followed by a sequence of octal characters, and then a matching `}`. The highest possible value in a delimited octal sequence is determined by the type of the character literal it is part of.

A common mistake when using octal escape sequences is expecting the sequence to allow more than three octal digits, or to terminate the sequence early with a non-octal digit. When you make this mistake in what would otherwise be an ordinary character literal, it turns the literal into a multicharacter literal.

```cpp
char c1 = '\100';   // Okay, '@'
char c2 = '\1000';  // multicharacter literal, truncates to '0'
char c3 = '\009';   // multicharacter literal, truncates to '9'
```
You can avoid this mistake by using delimited octal sequences.
```cpp
char c1 = '\o{100}';   // Okay, '@'
char c2 = '\o{1000}';  // error, value is out of range for char
char c3 = '\o{009}';   // error, non-octal value inside octal sequence.
```

A hexadecimal escape sequence is a backslash followed by the character `x`, followed by a sequence of one or more hexadecimal digits. Leading zeroes are ignored. C++23 added delimited hexadecimal sequences, which consist of a backslash, followed by the characters `x{`, followed by a sequence of hexadecimal characters, and then a matching `}`. In an ordinary or `u8`-prefixed character literal, the highest hexadecimal value is `0xFF`. In an `L`-prefixed or `u`-prefixed character literal, the highest hexadecimal value is `0xFFFF`. In a `U`-prefixed character literal, the highest hexadecimal value is `0xFFFFFFFF`.

### Universal character names

In character literals and native (non-raw) string literals, use a universal character name to represent any character. Universal character names use the prefix `\U` followed by an eight-digit Unicode code point, or the prefix `\u` followed by a four-digit Unicode code point. You must include all eight or four digits to create a well-formed universal character name.
C++23 introduced delimited universal characters and named universal characters. A delimited universal character consists of the prefix `\u{`, followed by a series of hexadecimal characters, followed by `}`. A named universal character consists of the prefix `\N{`, followed by a universal character name, followed by `}`. The case-sensitive universal character name must match a name from the Unicode character database from the Unicode Consortium. The compiler uses the version of Unicode installed on your system to determine the value of the character.

```cpp
char u1 = 'A';          // 'A'
char u2 = '\101';       // octal, 'A'
char u3 = '\x41';       // hexadecimal, 'A'
char u4 = '\u0041';     // UCN 'A'
char u5 = '\U00000041'; // UCN 'A'
char u6 = '\u{41}';     // UCN 'A'
char u7 = '\N{LATIN CAPITAL LETTER A}'; // UCN 'A'
```

### Multicharacter and non-encodable character literals

A *multicharacter literal* is an ordinary character literal with multiple characters and no prefix. `'AB'` is an example of a multicharacter literal.

A *non-encodable character literal* is a character literal with no prefix that contains a character that isn't encodable as a single `char` value. An example is the Unicode character U+1F609 `'😉'`, because it takes four bytes to represent in UTF-8 so it can't be encoded in a single 8-bit `char` value.

The compiler treats multicharacter and non-encodable character literals similarly. Their type is `int` and their value at runtime is implementation defined. See the Microsoft-specific section below for details. You can avoid implementation defined behavior by using a character prefix such as `U'😉'`.

#### Microsoft-specific

The maximum sequence of characters in a multicharacter literal is four because the value maps to a 32-bit integer value. When there are fewer than four characters, the compiler pads the high-order bits with 0.

```cpp
int c1 = 'a';   // 0x00000061 (not a multicharacter literal)
int c2 = 'ab';  // 0x00006162
int c3 = 'abc'; // 0x00616263
int c4 = 'abcd';// 0x61626364
```

The mapping of ordinary characters into an integer guarantees the value of the resulting integer is independent of the endianness of the target machine. As a result, on little endian machines, the order of the individual character values in memory is flipped and doesn't match the equivalent string value.

```cpp
int ch = 'abcd'; // 'd' is first in memory on little endian machines
const char* str = "abcd";
// compare the first byte of str with the last byte of ch
if(str[0] == reinterpret_cast<const char*>(&ch)[3])
{
    printf("little-endian\n");
}
```
Integer escape sequences used in multicharacter literals must fit into an 8-bit `char` value. Unlike ordinary character sequences, the escaped values inside a multicharacter literal are encoded according to the endianness of the target machine. This means the resulting value of the sequence is flipped in little endian machines. The compiler pads the high-order bits with 0.
```cpp
int ch1 = '\x61';            // 0x00000061 (not a multicharacter literal)
int ch2 = '\x61\x62';        // 0x00006261
int ch3 = '\x61\x62\x63';    // 0x00636261
int ch4 = '\x61\x62\x63\x64';// 0x64636261
```
Don't mix ordinary and integer escape sequences in a single multicharacter literal. Their encoding rules are different based on the endianness of the machine so the result is not defined.

The range of values that qualify as a non-encodable character literal depend on the current execution character set. The Japanese half width kanji `ﾂ` (U+FF82) is a non-encodable character under `/execution-charset:utf-8` because it takes three bytes to represent. The same character is considered an ordinary character literal under `/execution-charset:shift_jis` because it can be represented in a single byte.

The compiler computes the integer value by first converting the character into the multibyte execution character set representation, then maps the sequence of bytes to the integer. The compiler pads the high-order bytes with 0.

Use the Japanese full width kanji `ツ` (U+30C4) as an example. `ツ` is represented in UTF-8 as the three-byte sequence `0xe3 0x83 0x84` and in shift_jis as the two-byte sequence `0x83 0x63`.

```cpp
int tsu = 'ツ'; // non-encodable character literal
if (tsu == 0xe38384)
{
    printf("detected /execution-charset:utf-8");
}
else if (tsu == 0x8363)
{
    printf("detected /execution-charset:shift_jis");
}
```
To avoid implementation defined behavior and get the Unicode value of a character that isn't affected by the execution character set, use a character prefix such as `U'ツ'`.

The **Microsoft-specific** section ends here.

## String literals

A string literal represents a sequence of characters that together form a null-terminated string. The characters must be enclosed between double quotation marks. There are the following kinds of string literals:

### Ordinary string literals

An ordinary string literal is a non-prefixed, double-quote delimited, null-terminated array of type `const char[n]`, where *n* is the length of the array in bytes. An ordinary string literal can contain any graphic character except the double quotation mark (`"`), backslash (`\`), or newline character. An ordinary string literal can also contain escape sequences. The encoding of universal character names in ordinary string literals depends on the execution character set.

```cpp
const char *ordinary = "abcd";

// represents the string: yes\no
const char *escaped = "yes\\no";
```

### UTF-8 string literal

A UTF-8 encoded string is a `u8`-prefixed, double-quote delimited, null-terminated array of type `const char[n]`, where *n* is the length of the encoded array in bytes. A `u8`-prefixed string literal can contain any graphic character except the double quotation mark (`"`), backslash (`\`), or newline character. A `u8`-prefixed string literal can also contain escape sequences.

C++20 introduces the portable **`char8_t`** (UTF-8 encoded 8-bit Unicode) character type. In C++20, `u8` literal prefixes specify characters or strings of **`char8_t`** instead of **`char`**.

```cpp
// Before C++20
const char* str1 = u8"Hello World";
const char* str2 = u8"\U0001F607 is 😇";
// C++20 and later
const char8_t* u8str1 = u8"Hello World";
const char8_t* u8str2 = u8"\U0001F607 is 😇";
```

### Wide string literals

A wide string literal is a null-terminated array of constant **`wchar_t`** that's prefixed by '`L`' and contains any graphic character except the double quotation mark (**`"`**), backslash (**`\`**), or newline character. A wide string literal can also contain escape sequences.

```cpp
const wchar_t* wide = L"zyxw";
const wchar_t* newline = L"hello\ngoodbye";
```

### UTF-16 string literals

A UTF-16 string literal is a null-terminated array of constant **`char16_t`** that's prefixed by '`u`' and contains any graphic character except the double quotation mark (**`"`**), backslash (**`\`**), or newline character. A UTF-16 string literal can also contain escape sequences.

```cpp
const char16_t* utf_16 = u"hello 🌍";
```
### UTF-32 string literals

A UTF-32 string literal is a null-terminated array of constant **`char32_t`** that's prefixed by '`U`' and contains any graphic character except the double quotation mark (**`"`**), backslash (**`\`**), or newline character. A UTF-32 string literal can also contain escape sequences.

```cpp
const char32_t* utf_32 = U"hello 🌏";
```

### Raw string literals (C++11)

A raw string literal is a null-terminated array, of any character type, that contains any graphic character, including the double quotation mark (**`"`**), backslash (**`\`**), or newline character. Use raw string literals for regular expressions that use character classes, and in HTML strings and XML strings.

```cpp
// represents the string: An unescaped \ character
const char* raw_narrow = R"(An unescaped \ character)";
const wchar_t*  raw_wide  = LR"(An unescaped \ character)";
const char*     raw_utf8a = u8R"(An unescaped \ character)"; // Before C++20
const char8_t*  raw_utf8b = u8R"(An unescaped \ character)"; // C++20
const char16_t* raw_utf16 = uR"(An unescaped \ character)";
const char32_t* raw_utf32 = UR"(An unescaped \ character)";
```

A delimiter is a user-defined sequence of up to 16 characters that immediately precedes the opening parenthesis of a raw string literal, and immediately follows its closing parenthesis. For example, in `R"abc(Hello"\()abc"` the delimiter sequence is `abc` and the string content is `Hello"\(`. Use a delimiter to disambiguate raw strings that contain both double quotation marks and parentheses. This string literal causes a compiler error:

```cpp
// meant to represent the string: )"
const char* bad_parens = R"()")";  // error C2059
```

But a delimiter resolves it:

```cpp
const char* good_parens = R"xyz()")xyz";
```

You can construct a raw string literal that contains a newline (not the escaped character) in the source:

```cpp
// represents the string: hello
//goodbye
const wchar_t* newline = LR"(hello
goodbye)";
```

### std::string literals (C++14)

`std::string` literals are Standard Library implementations of user-defined literals (see below) that are represented as `"xyz"s` (with a `s` suffix). This kind of string literal produces a temporary object of type `std::string`, `std::wstring`, `std::u32string`, or `std::u16string`, depending on the prefix that you specify. When you don't use a prefix, as in the preceding example, the literal produces a `std::string`. `L"xyz"s` produces a `std::wstring`. `u"xyz"s` produces a [std::u16string](../standard-library/string-typedefs.md#u16string), and `U"xyz"s` produces a [std::u32string](../standard-library/string-typedefs.md#u32string).

```cpp
//#include <string>
//using namespace std::string_literals;
string str{ "hello"s };
string str2{ u8"Hello World" };     // Before C++20
u8string u8str2{ u8"Hello World" }; // C++20
wstring str3{ L"hello"s };
u16string str4{ u"hello"s };
u32string str5{ U"hello"s };
```

The `s` suffix may also be used on raw string literals:

```cpp
u32string str6{ UR"(She said "hello.")"s };
```

`std::string` literals are defined in the namespace `std::literals::string_literals` in the `<string>` header file. Because `std::literals::string_literals` and `std::literals` are both declared as [inline namespaces](../cpp/namespaces-cpp.md), the compiler automatically treats `std::literals::string_literals` as if it belonged directly in namespace `std`.

### Size of string literals

For ASCII `char*` strings and other single-byte encodings, the size (in bytes) of a string literal is the number of characters plus 1 for the terminating null character. For all other string literals, the size isn't strictly related to the number of characters. UTF-8 uses up to four **`char`** elements to encode some *code units*, and **`char16_t`** or **`wchar_t`** encoded as UTF-16 may use two elements (for a total of four bytes) to encode a single *code unit*. This example shows the size of a wide string literal in bytes:

```cpp
const wchar_t* str = L"Hello!";
const size_t byteSize = (wcslen(str) + 1) * sizeof(wchar_t);
```

Notice that `strlen()` and `wcslen()` don't include the size of the terminating null character, whose size is equal to the element size of the string type: one byte on a `char*` or `char8_t*` string, two bytes on `wchar_t*` or `char16_t*` strings, and four bytes on `char32_t*` strings.

Maximum length of a string literal after concatenation:

- Visual Studio before 2022 version 17.0: the maximum length of a string literal after concatenation is 65,535 bytes. This applies to both narrow and wide string literals.
- Before MSVC 14.51: the maximum length of a string literal after concatenation is only limited by available memory. However, the size limit before concatenation is still 16,384 bytes.
- From MSVC 14.51 onwards: the maximum length limitation for a string literal before concatenation is removed and is only limited by available memory.

### Modifying string literals

Because string literals (not including `std::string` literals) are constants, trying to modify them—for example, `str[2] = 'A'`—causes a compiler error.

#### Microsoft-specific

In Microsoft C++, you can use a string literal to initialize a pointer to non-const **`char`** or **`wchar_t`**. This non-const initialization is allowed in C99 code, but is deprecated in C++98 and removed in C++11. An attempt to modify the string causes an access violation, as in this example:

```cpp
wchar_t* str = L"hello";
str[2] = L'a'; // run-time error: access violation
```

You can cause the compiler to emit an error when a string literal is converted to a non-const character pointer when you set the [`/Zc:strictStrings` (Disable string literal type conversion)](../build/reference/zc-strictstrings-disable-string-literal-type-conversion.md) compiler option. We recommend it for standards-conformant portable code. It's also a good practice to use the **`auto`** keyword to declare string literal-initialized pointers, because it resolves to the correct (const) type. For example, this code example catches an attempt to write to a string literal at compile time:

```cpp
auto str = L"hello";
str[2] = L'a'; // C3892: you cannot assign to a variable that's const.
```

In some cases, identical string literals may be pooled to save space in the executable file. In string-literal pooling, the compiler causes all references to a particular string literal to point to the same location in memory, instead of having each reference point to a separate instance of the string literal. To enable string pooling, use the [`/GF`](../build/reference/gf-eliminate-duplicate-strings.md) compiler option.

The **Microsoft-specific** section ends here.

### Concatenating adjacent string literals

Adjacent wide or narrow string literals are concatenated. This declaration:

```cpp
char str[] = "12" "34";
```

is identical to this declaration:

```cpp
char atr[] = "1234";
```

and is identical to this declaration:

```cpp
char atr[] =  "12\
34";
```

Using embedded hexadecimal escape codes to specify string literals can cause unexpected results. The following example seeks to create a string literal that contains the ASCII 5 character, followed by the characters f, i, v, and e:

```cpp
"\x05five"
```

The actual result is a hexadecimal 5F, which is the ASCII code for an underscore, followed by the characters i, v, and e. To get the correct result, you can use one of these escape sequences:

```cpp
"\005five"     // Use octal literal.
"\x05" "five"  // Use string splicing.
"\x{05}five" // (C++23) delimited escape sequence
```
Concatenate `std::string` literals (and the related `std::u8string`, `std::u16string`, and `std::u32string`) at runtime using the **`+`** operator that's defined for [`basic_string`](../standard-library/basic-string-class.md) types. You can also concatenate them at compile time in the same way as adjacent string literals. In both cases, the string encoding and the suffix of each literal must not conflict:

```cpp
auto x1 = "hello" " " " world"s; // OK, results in std::string "hello world"s
auto x2 = U"hello" " " L"world"; // C2308: disagree on prefix
auto x3 = u8"hello" " "s u8"world"z; // C3688, disagree on suffixes
```

### String literals with universal character names

Native (non-raw) string literals can use universal character names to represent any character, as long as the universal character name can be encoded as one or more characters in the string type. For example, a universal character name representing an extended character can't be encoded in an ordinary string when using the ANSI code page, but it can be encoded in narrow strings in some multibyte code pages, or in UTF-8 strings, or in a wide string. In C++11, Unicode support is extended by the `char16_t*` and `char32_t*` string types, and C++20 extends it to the `char8_t` type:

```cpp
// ASCII smiling face
const char*     s1 = ":-)";

// UTF-16 (on Windows) encoded WINKING FACE (U+1F609)
const wchar_t*  s2 = L"😉 = \U0001F609";

// UTF-8  encoded SMILING FACE WITH HALO (U+1F607)
const char*     s3a = u8"😇 = \U0001F607"; // Before C++20
const char8_t*  s3b = u8"😇 = \U0001F607"; // C++20

// UTF-16 encoded SMILING FACE WITH OPEN MOUTH (U+1F603)
const char16_t* s4 = u"😃 = \U0001F603";

// UTF-32 encoded SMILING FACE WITH SUNGLASSES (U+1F60E)
const char32_t* s5 = U"😎 = \U0001F60E";
```

In C++11 and later, Universal characters can be any *Unicode scalar value* when used in a string literal. Unicode scalar values include the full Unicode codespace from U+0000 to U+10FFFF other than the surrogate code point range (U+D800 through U+DFFF). Before C++11, Universal characters can be any value in the Unicode codespace, except those in the basic source character set and control characters (ranges U+0000 to U+0001F and U+007F to 0x9F). For more information on universal character names, see [Character Sets](../cpp/character-sets.md). For more information about Unicode, see [Unicode](/windows/win32/intl/unicode).

When used inside an ordinary string literal `""`, the Unicode code point is encoded in the codepage of the execution character set. The codepage controls the value as well as the number of bytes used to represent the code point. If the Unicode code point can't be represented in the execution character set codepage, then a warning is emitted and the character is replaced by the default replacement character for the codepage. The default replacement character is defined by the codepage and is typically a character equivelent to U+FFFD (�) or '?'. The execution character set can be set by the compiler switch [`/execution-charset`](../build/reference/execution-charset-set-execution-character-set.md).

When used in a utf-8 literal type `u8""`, the Unicode code point is encoded in a possibly multibyte utf-8 sequence.

When used in a 16-bit string literal type `L""` or `u""`, the Unicode code point is encoded in UTF-16. A universal characters that does not fit in 16-bits is automatically encoded as a UTF-16 surrogate pair. For more information about surrogate pairs, see [Surrogate Pairs and Supplementary Characters](/windows/win32/Intl/surrogates-and-supplementary-characters)

When used in a UTF-32 literal type `U""`, the Unicode code point is encoded in UTF-32.

## See also

[Character sets](../cpp/character-sets.md)\
[Numeric, Boolean, and pointer literals](../cpp/numeric-boolean-and-pointer-literals-cpp.md)\
[Surrogate Pairs and Supplementary Characters](/windows/win32/Intl/surrogates-and-supplementary-characters)\
[Unicode](/windows/win32/intl/unicode)\
[User-defined literals](../cpp/user-defined-literals-cpp.md)
