---
description: "Learn more about: `scanf` width specification"
title: "scanf width specification"
ms.date: "10/22/2019"
helpviewer_keywords: ["scanf function, width specification"]
ms.assetid: 94b4e8fe-c4a2-4799-8b6c-a2cf28ffb09c
---
# `scanf` width specification

This information applies to the interpretation of format strings in the `scanf` family of functions, including the secure versions such as `scanf_s`. These functions normally assume the input stream is divided into a sequence of tokens. Tokens are separated by whitespace (space, tab, or newline), or for numerical types, by the natural end of a numerical data type as indicated by the first character that can't be converted into numerical text. However, the width specification may be used to cause parsing of the input to stop before the natural end of a token.

The *width* specification consists of characters between the `%` and the type field specifier, which may include a positive integer called the *width* field and one or more characters indicating the size of the field, which may also be considered as modifiers of the type of the field, such as an indication of whether the integer type is **`short`** or **`long`**. Such characters are referred to as the size prefix.

## The width field

The *width* field is a positive decimal integer that controls the maximum number of characters to be read for that field. No more than *width* characters get converted and stored in the corresponding `argument`. Fewer than *width* characters may be read if a whitespace character or a character that can't be converted according to the given format occurs before *width* is reached.

The width specification is separate and distinct from the buffer size argument required by the secure versions of these functions (for instance, `scanf_s`, `wscanf_s`, and so on). In the following example, the width specification is 20, indicating that up to 20 characters are to be read from the input stream. The buffer length is 21, which includes room for the possible 20 characters plus the null terminator:

```C
char str[21];
scanf_s("%20s", str, 21);
```

If the *width* field isn't used, `scanf_s` attempts to read the entire token into the string. If the size specified isn't large enough to hold the entire token, nothing gets written to the destination string. If the *width* field is specified, then the first *width* characters in the token get written to the destination string, along with the null terminator.

## The size prefix

The optional prefixes **h**, **hh**, **l**, **ll**, **I64**, and **L** indicate the size of the `argument` (long or short, single-byte character or wide character, depending upon the type character that they modify). These format-specification characters are used with type characters in `scanf` or `wscanf` functions to specify interpretation of arguments as shown in the following table. The type prefix **I64** is a Microsoft extension and isn't compatible with Standard C. The type characters and their meanings are described in the "Type Characters for scanf functions" table in [`scanf` Type Field Characters](../c-runtime-library/scanf-type-field-characters.md).

> [!NOTE]
> The **h**, **l**, and **L** prefixes are Microsoft extensions when used with data of type **`char`**.

### Size prefixes for `scanf` and `wscanf` format-type specifiers

|To specify|Use prefix|With type specifier|
|----------------|----------------|-------------------------|
|**`double`**|**l**|**e**, **E**, **f**, **g**, or **G**|
|**`long double`** (same as **`double`**)|**L**|**e**, **E**, **f**, **g**, or **G**|
|**`long int`**|**l**|**d**, **i**, **o**, **x**, or **X**|
|**`long unsigned int`**|**l**|**u**|
|**`long long`**|**ll**|**d**, **i**, **o**, **x**, or **X**|
|**`short int`**|**h**|**d**, **i**, **o**, **x**, or **X**|
|**`short unsigned int`**|**h**|**u**|
|**`char`**|**hh**|**d**, **i**, **o**, **x**, or **X**|
|**`unsigned char`**|**hh**|**u**|
|**`int64`**|**I64**|**d**, **i**, **o**, **u**, **x**, or **X**|
|Single-byte character with `scanf`|**h**|**c** or **C**|
|Single-byte character with `wscanf`|**h**|**c** or **C**|
|Wide character with `scanf`|**l**|**c** or **C**|
|Wide character with `wscanf`|**l**|**c**, or **C**|
|Single-byte character string with `scanf`|**h**|**s** or **S**|
|Single-byte character string with `wscanf`|**h**|**s** or **S**|
|Wide character string with `scanf`|**l**|**s** or **S**|
|Wide character string with `wscanf`|**l**|**s** or **S**|

The following examples use **h** and **l** with `scanf_s` functions and `wscanf_s` functions:

```C
scanf_s("%ls", &x, 2);     // Read a wide-character string
wscanf_s(L"%hC", &x, 2);    // Read a single-byte character
```

If using an unsecure function in the `scanf` family, omit the size parameter indicating the buffer length of the preceding argument.

## Reading undelimited strings

To read strings not delimited by whitespace characters, a set of characters in brackets (**`[ ]`**) can be substituted for the **s** (string) type character. The set of characters in brackets is referred to as a *control string*. The corresponding input field is read up to the first character that doesn't appear in the control string. If the first character in the set is a caret (**`^`**), the effect is reversed: The input field is read up to the first character that does appear in the rest of the character set.

Both **%[a-z]** and **%[z-a]** are interpreted as equivalent to **%[abcde...z]**. It's a common `scanf` function extension, but isn't required by Standard C.

## Reading unterminated strings

To store a string without storing a terminating null character ('\0'), use the specification `%Nc`, where *N* is a decimal integer. In this case, the **c** type character indicates that the argument is a pointer to a character array. The next *N* characters are read from the input stream into the specified location, and no null character ('\0') is appended. If *N* isn't specified, its default value is 1.

## When `scanf` stops reading a field

The `scanf` function scans each input field, character by character. It may stop reading a particular input field before it reaches a space character for one of several reasons:

- The specified width has been reached.

- The next character can't be converted as specified.

- The next character conflicts with a character in the control string that it's supposed to match.

- The next character fails to appear in a given character set.

For whatever reason, when the `scanf` function stops reading an input field, the next input field is considered to begin at the first unread character. The conflicting character, if any, is considered unread. It's the first character of the next input field, or the first character in subsequent read operations on the input stream.

## See also

[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[`scanf_s`, `_scanf_s_l`, `wscanf_s`, `_wscanf_s_l`](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)<br/>
[Format Specification Fields: `scanf` and `wscanf` Functions](../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md)<br/>
[`scanf` Type Field Characters](../c-runtime-library/scanf-type-field-characters.md)<br/>
