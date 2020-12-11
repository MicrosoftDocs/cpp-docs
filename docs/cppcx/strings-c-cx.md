---
description: "Learn more about: Strings (C++/CX)"
title: "Strings (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: 5b34e1df-7c2b-4269-aba8-b767d36c49d9
---
# Strings (C++/CX)

Text in the Windows Runtime is represented in C++/CX by the [Platform::String Class](../cppcx/platform-string-class.md). Use the `Platform::String Class` when you pass strings back and forth to methods in Windows Runtime classes, or when you are interacting with other Windows Runtime components across the application binary interface (ABI) boundary. The `Platform::String Class` provides methods for several common string operations, but it's not designed to be a full-featured string class. In your C++ module, use standard C++ string types such as [wstring](../standard-library/basic-string-class.md) for any significant text processing, and then convert the final result to [Platform::String^](../cppcx/platform-string-class.md) before you pass it to or from a public interface. It's easy and efficient to convert between `wstring` or `wchar_t*` and `Platform::String`.

**Fast pass**

In some cases, the compiler can verify that it can safely construct a `Platform::String` or pass a `String` to a function without copying the underlying string data. Such operations are known as *fast pass* and they occur transparently.

## String construction

The value of a `String` object is an immutable (read-only) sequence of `char16` (16-bit Unicode) characters. Because a `String` object is immutable, assignment of a new string literal to a `String` variable actually replaces the original `String` object with a new `String` object. Concatenation operations involve the destruction of the original `String` object and the creation of a new object.

**Literals**

A *literal character* is a character that's enclosed in single quotation marks, and a *literal string* is a sequence of characters that's enclosed in double quotation marks. If you use a literal to initialize a String^ variable, the compiler assumes that the literal consists of `char16` characters. That is, you don't have to precede the literal with the 'L' string modifier or enclose the literal in a **_T()** or **TEXT()** macro. For more information about C++ support for Unicode, see [Unicode Programming Summary](../text/unicode-programming-summary.md).

The following example shows various ways to construct `String` objects.

[!code-cpp[cx_strings#01](../cppcx/codesnippet/CPP/cppcx_strings/class1.cpp#01)]

## String handling operations

The `String` class provides methods and operators for concatenating, comparing strings, and other basic string operations. To perform more extensive string manipulations, use the `String::Data()` member function to retrieve the value of the `String^` object as a `const wchar_t*`. Then use that value to initialize a `std::wstring`, which provides rich string handling functions.

[!code-cpp[cx_strings#03](../cppcx/codesnippet/CPP/cppcx_strings/class1.cpp#03)]

## String conversions

A `Platform::String` can contain only `char16` characters, or the `NULL` character. If your application has to work with 8-bit characters, use the [String::Data](../cppcx/platform-string-class.md#data) to extract the text as a `const wchar_t*`. You can then use the appropriate Windows functions or Standard Library functions to operate on the data and convert it back to a `wchar_t*` or [wstring](../standard-library/basic-string-class.md), which you can use to construct a new `Platform::String`.

The following code fragment shows how to convert a `String^` variable to and from a `wstring` variable. For more information about the string manipulation that's used in this example, see [basic_string::replace](../standard-library/basic-string-class.md#replace).

[!code-cpp[cx_strings#04](../cppcx/codesnippet/CPP/cppcx_strings/class1.cpp#04)]

## String length and embedded NULL values

The [String::Length](../cppcx/platform-string-class.md#length) returns the number of characters in the string, not the number of bytes. The terminating NULL character is not counted unless you explicitly specify it when you use stack semantics to construct a string.

A `Platform::String` can contain embedded NULL values, but only when the NULL is a result of a concatenation operation. Embedded NULLs are not supported in string literals; therefore, you cannot use embedded NULLs in that manner to initialize a `Platform::String`. Embedded NULL values in a `Platform::String` are ignored when the string is displayed, for example, when it is assigned to a `TextBlock::Text` property. Embedded NULLs are removed when the string value is returned by the `Data` property.

## StringReference

In some cases your code (a) receives a std::wstring, or wchar_t string or L"" string literal and just passes it on to another method that takes a String^ as input parameter. As long as the original string buffer itself remains valid and does not mutate before the function returns, you can convert the `wchar_t*` string or string literal to a [Platform::StringReference](../cppcx/platform-stringreference-class.md), and pass in that instead of a `Platform::String^`. This is allowed because `StringReference` has a user-defined conversion to `Platform::String^`. By using `StringReference` you can avoid making an extra copy of the string data. In loops where you are passing large numbers of strings, or when passing very large strings, you can potentially achieve a significant performance improvement by using `StringReference`. But because `StringReference` essentially borrows the original string buffer, you must use extreme care to avoid memory corruption. You should not pass a `StringReference` to an asynchronous method unless the original string is guaranteed to be in scope when that method returns. A String^ that is initialized from a StringReference will force an allocation and copy of the string data if a second assignment operation occurs. In this case, you will lose the performance benefit of `StringReference`.

Note that `StringReference` is a standard C++ class type, not a ref class, you cannot use it in the public interface of ref classes that you define.

The following example shows how to use StringReference:

```cpp
void GetDecodedStrings(std::vector<std::wstring> strings)
{
    using namespace Windows::Security::Cryptography;
    using namespace Windows::Storage::Streams;

    for (auto&& s : strings)
    {
        // Method signature is IBuffer^ CryptographicBuffer::DecodeFromBase64String (Platform::String^)
        // Call using StringReference:
        IBuffer^ buffer = CryptographicBuffer::DecodeFromBase64String(StringReference(s.c_str()));

        //...do something with buffer
    }
}
```
