---
title: "String and character literals (C++)"
description: "How to declare and define string and character literals in C++."
ms.date: 08/27/2021
f1_keywords: ["R", "L", "u", "u8", "LR", "uR", "u8R"]
helpviewer_keywords: ["literal strings [C++]", "string literals [C++]"]
ms.assetid: 61de8f6f-2714-4e7b-86b6-a3f885d3b9df
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

String literals can have no prefix, or `u8`, `L`, `u`, and  `U` prefixes to denote narrow character (single-byte or multi-byte), UTF-8, wide character (UCS-2 or UTF-16), UTF-16 and UTF-32 encodings, respectively. A raw string literal can have `R`, `u8R`, `LR`, `uR`, and `UR` prefixes for the raw version equivalents of these encodings.  To create temporary or static `std::string` values, you can use string literals or raw string literals with an `s` suffix. For more information, see the [String literals](#string-literals) section below. For more information on the basic source character set, universal character names, and using characters from extended codepages in your source code, see [Character sets](../cpp/character-sets.md).

## Character literals

A *character literal* is composed of a constant character. It's represented by the character surrounded by single quotation marks. There are five kinds of character literals:

- Ordinary character literals of type **`char`**, for example `'a'`

- UTF-8 character literals of type **`char`** (**`char8_t`** in C++20), for example `u8'a'`

- Wide-character literals of type **`wchar_t`**, for example `L'a'`

- UTF-16 character literals of type **`char16_t`**, for example `u'a'`

- UTF-32 character literals of type **`char32_t`**, for example `U'a'`

The character used for a character literal may be any character, except for the reserved characters backslash (**`\`**), single quotation mark (**`'`**), or newline. Reserved characters can be specified by using an escape sequence. Characters may be specified by using universal character names, as long as the type is large enough to hold the character.

### Encoding

Character literals are encoded differently based their prefix.

- A character literal without a prefix is an ordinary character literal. The value of an ordinary character literal containing a single character, escape sequence, or universal character name that can be represented in the execution character set has a value equal to the numerical value of its encoding in the execution character set. An ordinary character literal that contains more than one character, escape sequence, or universal character name is a *multicharacter literal*. A multicharacter literal or an ordinary character literal that can't be represented in the execution character set has type **`int`**, and its value is implementation-defined. For MSVC, see the **Microsoft-specific** section below.

- A character literal that begins with the `L` prefix is a wide-character literal. The value of a wide-character literal containing a single character, escape sequence, or universal character name has a value equal to the numerical value of its encoding in the execution wide-character set unless the character literal has no representation in the execution wide-character set, in which case the value is implementation-defined. The value of a wide-character literal containing multiple characters, escape sequences, or universal character names is implementation-defined. For MSVC, see the **Microsoft-specific** section below.

- A character literal that begins with the `u8` prefix is a UTF-8 character literal. The value of a UTF-8 character literal containing a single character, escape sequence, or universal character name has a value equal to its ISO 10646 code point value if it can be represented by a single UTF-8 code unit (corresponding to the C0 Controls and Basic Latin Unicode block). If the value can't be represented by a single UTF-8 code unit, the program is ill-formed. A UTF-8 character literal containing more than one character, escape sequence, or universal character name is ill-formed.

- A character literal that begins with the `u` prefix is a UTF-16 character literal. The value of a UTF-16 character literal containing a single character, escape sequence, or universal character name has a value equal to its ISO 10646 code point value if it can be represented by a single UTF-16 code unit (corresponding to the basic multi-lingual plane). If the value can't be represented by a single UTF-16 code unit, the program is ill-formed. A UTF-16 character literal containing more than one character, escape sequence, or universal character name is ill-formed.

- A character literal that begins with the `U` prefix is a UTF-32 character literal. The value of a UTF-32 character literal containing a single character, escape sequence, or universal character name has a value equal to its ISO 10646 code point value. A UTF-32 character literal containing more than one character, escape sequence, or universal character name is ill-formed.

### <a name="bkmk_Escape"></a> Escape sequences

There are three kinds of escape sequences: simple, octal, and hexadecimal. Escape sequences may be any of the following values:

|Value|Escape sequence|
|-----------|---------------------|
| newline | \\n |
| backslash | \\\\ |
| horizontal tab | \\t |
| question mark | ? or \\? |
| vertical tab | \\v |
| single quote | \\' |
| backspace | \\b |
| double quote | \\" |
| carriage return | \\r |
| the null character | \\0 |
| form feed | \\f |
| octal | \\ooo |
| alert (bell) | \\a |
| hexadecimal | \\xhhh |

An octal escape sequence is a backslash followed by a sequence of one to three octal digits. An octal escape sequence terminates at the first character that's not an octal digit, if encountered sooner than the third digit. The highest possible octal value is `\377`.

A hexadecimal escape sequence is a backslash followed by the character `x`, followed by a sequence of one or more hexadecimal digits. Leading zeroes are ignored. In an ordinary or u8-prefixed character literal, the highest hexadecimal value is 0xFF. In an L-prefixed or u-prefixed wide character literal, the highest hexadecimal value is 0xFFFF. In a U-prefixed wide character literal, the highest hexadecimal value is 0xFFFFFFFF.

This sample code shows some examples of escaped characters using ordinary character literals. The same escape sequence syntax is valid for the other character literal types.

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
Null character:  ending
*/
```

The backslash character (**`\`**) is a line-continuation character when it's placed at the end of a line. If you want a backslash character to appear as a character literal, you must type two backslashes in a row (**`\\`**). For more information about the line continuation character, see [Phases of Translation](../preprocessor/phases-of-translation.md).

#### Microsoft-specific

To create a value from a narrow multicharacter literal, the compiler converts the character or character sequence between single quotes into 8-bit values within a 32-bit integer. Multiple characters in the literal fill corresponding bytes as needed from high-order to low-order. The compiler then converts the integer to the destination type following the usual rules. For example, to create a **`char`** value, the compiler takes the low-order byte. To create a **`wchar_t`** or **`char16_t`** value, the compiler takes the low-order word. The compiler warns that the result is truncated if any bits are set above the assigned byte or word.

```cpp
char c0    = 'abcd';    // C4305, C4309, truncates to 'd'
wchar_t w0 = 'abcd';    // C4305, C4309, truncates to '\x6364'
int i0     = 'abcd';    // 0x61626364
```

An octal escape sequence that appears to contain more than three digits is treated as a 3-digit octal sequence, followed by the subsequent digits as characters in a multicharacter literal, which can give surprising results. For example:

```cpp
char c1 = '\100';   // '@'
char c2 = '\1000';  // C4305, C4309, truncates to '0'
```

Escape sequences that appear to contain non-octal characters are evaluated as an octal sequence up to the last octal character, followed by the remaining characters as the subsequent characters in a multicharacter literal. Warning C4125 is generated if the first non-octal character is a decimal digit. For example:

```cpp
char c3 = '\009';   // '9'
char c4 = '\089';   // C4305, C4309, truncates to '9'
char c5 = '\qrs';   // C4129, C4305, C4309, truncates to 's'
```

An octal escape sequence that has a higher value than `\377` causes error C2022: '*value-in-decimal*': too big for character.

An escape sequence that appears to have hexadecimal and non-hexadecimal characters is evaluated as a multicharacter literal that contains a hexadecimal escape sequence up to the last hexadecimal character, followed by the non-hexadecimal characters. A hexadecimal escape sequence that contains no hexadecimal digits causes compiler error C2153: "hex literals must have at least one hex digit".

```cpp
char c6 = '\x0050'; // 'P'
char c7 = '\x0pqr'; // C4305, C4309, truncates to 'r'
```

If a wide character literal prefixed with `L` contains a multicharacter sequence, the value is taken from the first character, and the compiler raises warning C4066. Subsequent characters are ignored, unlike the behavior of the equivalent ordinary multicharacter literal.

```cpp
wchar_t w1 = L'\100';   // L'@'
wchar_t w2 = L'\1000';  // C4066 L'@', 0 ignored
wchar_t w3 = L'\009';   // C4066 L'\0', 9 ignored
wchar_t w4 = L'\089';   // C4066 L'\0', 89 ignored
wchar_t w5 = L'\qrs';   // C4129, C4066 L'q' escape, rs ignored
wchar_t w6 = L'\x0050'; // L'P'
wchar_t w7 = L'\x0pqr'; // C4066 L'\0', pqr ignored
```

The **Microsoft-specific** section ends here.

### <a name="bkmk_UCN"></a> Universal character names

In character literals and native (non-raw) string literals, any character may be represented by a universal character name.  Universal character names are formed by a prefix `\U` followed by an eight-digit Unicode code point, or by a prefix `\u` followed by a four-digit Unicode code point. All eight or four digits, respectively, must be present to make a well-formed universal character name.

```cpp
char u1 = 'A';          // 'A'
char u2 = '\101';       // octal, 'A'
char u3 = '\x41';       // hexadecimal, 'A'
char u4 = '\u0041';     // \u UCN 'A'
char u5 = '\U00000041'; // \U UCN 'A'
```

#### Surrogate Pairs

Universal character names can't encode values in the surrogate code point range D800-DFFF. For Unicode surrogate pairs, specify the universal character name by using `\UNNNNNNNN`, where NNNNNNNN is the eight-digit code point for the character. The compiler generates a surrogate pair if necessary.

In C++03, the language only allowed a subset of characters to be represented by their universal character names, and allowed some universal character names that didn't actually represent any valid Unicode characters. This mistake was fixed in the C++11 standard. In C++11, both character and string literals and identifiers can use universal character names.  For more information on universal character names, see [Character Sets](../cpp/character-sets.md). For more information about Unicode, see [Unicode](/windows/win32/intl/unicode). For more information about surrogate pairs, see [Surrogate Pairs and Supplementary Characters](/windows/win32/Intl/surrogates-and-supplementary-characters).

## <a name="string-literals"></a> String literals

A string literal represents a sequence of characters that together form a null-terminated string. The characters must be enclosed between double quotation marks. There are the following kinds of string literals:

### Narrow string literals

A narrow string literal is a non-prefixed, double-quote delimited, null-terminated array of type `const char[n]`, where n is the length of the array in bytes. A narrow string literal may contain any graphic character except the double quotation mark (`"`), backslash (`\`), or newline character. A narrow string literal may also contain the escape sequences listed above, and universal character names that fit in a byte.

```cpp
const char *narrow = "abcd";

// represents the string: yes\no
const char *escaped = "yes\\no";
```

#### UTF-8 encoded strings

A UTF-8 encoded string is a u8-prefixed, double-quote delimited, null-terminated array of type `const char[n]`, where *n* is the length of the encoded array in bytes. A u8-prefixed string literal may contain any graphic character except the double quotation mark (`"`), backslash (`\`), or newline character. A u8-prefixed string literal may also contain the escape sequences listed above, and any universal character name.

C++20 introduces the portable **`char8_t`** (UTF-8 encoded 8-bit Unicode) character type. In C++20, `u8` literal prefixes specify characters or strings of **`char8_t`** instead of **`char`**.

```cpp
// Before C++20
const char* str1 = u8"Hello World";
const char* str2 = u8"\U0001F607 is O:-)";
// C++20 and later
const char8_t* u8str1 = u8"Hello World";
const char8_t* u8str2 = u8"\U0001F607 is O:-)";
```

### Wide string literals

A wide string literal is a null-terminated array of constant **`wchar_t`** that is prefixed by '`L`' and contains any graphic character except the double quotation mark (**`"`**), backslash (**`\`**), or newline character. A wide string literal may contain the escape sequences listed above and any universal character name.

```cpp
const wchar_t* wide = L"zyxw";
const wchar_t* newline = L"hello\ngoodbye";
```

#### char16_t and char32_t (C++11)

C++11 introduces the portable **`char16_t`** (16-bit Unicode) and **`char32_t`** (32-bit Unicode) character types:

```cpp
auto s3 = u"hello"; // const char16_t*
auto s4 = U"hello"; // const char32_t*
```

### Raw string literals (C++11)

A raw string literal is a null-terminated array—of any character type—that contains any graphic character, including the double quotation mark (**`"`**), backslash (**`\`**), or newline character. Raw string literals are often used in regular expressions that use character classes, and in HTML strings and XML strings. For examples, see the following article: [Bjarne Stroustrup's FAQ on C++11](https://www.stroustrup.com/C++11FAQ.html).

```cpp
// represents the string: An unescaped \ character
const char* raw_narrow = R"(An unescaped \ character)";
const wchar_t*  raw_wide  = LR"(An unescaped \ character)";
const char*     raw_utf8a = u8R"(An unescaped \ character)"; // Before C++20
const char8_t*  raw_utf8b = u8R"(An unescaped \ character)"; // C++20
const char16_t* raw_utf16 = uR"(An unescaped \ character)";
const char32_t* raw_utf32 = UR"(An unescaped \ character)";
```

A delimiter is a user-defined sequence of up to 16 characters that immediately precedes the opening parenthesis of a raw string literal, and immediately follows its closing parenthesis.  For example, in `R"abc(Hello"\()abc"` the delimiter sequence is `abc` and the string content is `Hello"\(`. You can use a delimiter to disambiguate raw strings that contain both double quotation marks and parentheses. This string literal causes a compiler error:

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

`std::string` literals are Standard Library implementations of user-defined literals (see below) that are represented as `"xyz"s` (with a `s` suffix). This kind of string literal produces a temporary object of type `std::string`, `std::wstring`, `std::u32string`, or `std::u16string`, depending on the prefix that is specified. When no prefix is used, as above, a `std::string` is produced. `L"xyz"s` produces a `std::wstring`. `u"xyz"s` produces a [std::u16string](../standard-library/string-typedefs.md#u16string), and `U"xyz"s` produces a [std::u32string](../standard-library/string-typedefs.md#u32string).

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

`std::string` literals are defined in the namespace `std::literals::string_literals` in the \<string> header file. Because `std::literals::string_literals`, and `std::literals` are both declared as [inline namespaces](../cpp/namespaces-cpp.md), `std::literals::string_literals` is automatically treated as if it belonged directly in namespace `std`.

### Size of string literals

For ANSI `char*` strings and other single-byte encodings (but not UTF-8), the size (in bytes) of a string literal is the number of characters plus 1 for the terminating null character. For all other string types, the size isn't strictly related to the number of characters. UTF-8 uses up to four **`char`** elements to encode some *code units*, and **`char16_t`** or **`wchar_t`** encoded as UTF-16 may use two elements (for a total of four bytes) to encode a single *code unit*. This example shows the size of a wide string literal in bytes:

```cpp
const wchar_t* str = L"Hello!";
const size_t byteSize = (wcslen(str) + 1) * sizeof(wchar_t);
```

Notice that `strlen()` and `wcslen()` don't include the size of the terminating null character, whose size is equal to the element size of the string type: one byte on a `char*` or `char8_t*` string, two bytes on `wchar_t*` or `char16_t*` strings, and four bytes on `char32_t*` strings.

In versions of Visual Studio before Visual Studio 2022 version 17.0, the maximum length of a string literal is 65,535 bytes. This limit applies to both narrow string literals and wide string literals. In Visual Studio 2022 version 17.0 and later, this restriction is lifted and string length is limited by available resources.

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
str[2] = L'a'; // C3892: you cannot assign to a variable that is const.
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

and to this declaration:

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
```

`std::string` literals (and the related `std::u8string`, `std::u16string`, and `std::u32string`) can be concatenated with the **`+`** operator that's defined for [`basic_string`](../standard-library/basic-string-class.md) types. They can also be concatenated in the same way as adjacent string literals. In both cases, the string encoding and the suffix must match:

```cpp
auto x1 = "hello" " " " world"; // OK
auto x2 = U"hello" " " L"world"; // C2308: disagree on prefix
auto x3 = u8"hello" " "s u8"world"z; // C3688, disagree on suffixes
```

### String literals with universal character names

Native (non-raw) string literals may use universal character names to represent any character, as long as the universal character name can be encoded as one or more characters in the string type.  For example, a universal character name representing an extended character can't be encoded in a narrow string using the ANSI code page, but it can be encoded in narrow strings in some multi-byte code pages, or in UTF-8 strings, or in a wide string. In C++11, Unicode support is extended by the `char16_t*` and `char32_t*` string types, and C++20 extends it to the `char8_t` type:

```cpp
// ASCII smiling face
const char*     s1 = ":-)";

// UTF-16 (on Windows) encoded WINKING FACE (U+1F609)
const wchar_t*  s2 = L"😉 = \U0001F609 is ;-)";

// UTF-8  encoded SMILING FACE WITH HALO (U+1F607)
const char*     s3a = u8"😇 = \U0001F607 is O:-)"; // Before C++20
const char8_t*  s3b = u8"😇 = \U0001F607 is O:-)"; // C++20

// UTF-16 encoded SMILING FACE WITH OPEN MOUTH (U+1F603)
const char16_t* s4 = u"😃 = \U0001F603 is :-D";

// UTF-32 encoded SMILING FACE WITH SUNGLASSES (U+1F60E)
const char32_t* s5 = U"😎 = \U0001F60E is B-)";
```

## See also

[Character sets](../cpp/character-sets.md)\
[Numeric, Boolean, and pointer literals](../cpp/numeric-boolean-and-pointer-literals-cpp.md)\
[User-defined literals](../cpp/user-defined-literals-cpp.md)
