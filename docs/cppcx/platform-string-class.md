---
description: "Learn more about: Platform::String Class"
title: "Platform::String Class"
ms.date: "10/16/2019"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::String::String", "VCCORLIB/Platform::String::Begin", "VCCORLIB/Platform::String::CompareOrdinal", "VCCORLIB/Platform::String::Concat", "VCCORLIB/Platform::String::Data", "VCCORLIB/Platform::String::Dispose", "VCCORLIB/Platform::String::End", "VCCORLIB/Platform::String::Equals", "VCCORLIB/Platform::String::GetHashCode", "VCCORLIB/Platform::String::IsEmpty", "VCCORLIB/Platform::String::IsFastPass", "VCCORLIB/Platform::String::Length", "VCCORLIB/Platform::String::ToString"]
helpviewer_keywords: ["Platform::String"]
ms.assetid: 72dd04a4-a694-40d3-b899-eaa0b503eab8
---
# Platform::String Class

Represents a sequential collection of Unicode characters that is used to represent text. For more information and examples, see [Strings](../cppcx/strings-c-cx.md).

## Syntax

```cpp
public ref class String sealed : Object,
    IDisposable,
    IEquatable,
    IPrintable
```

## Iterators

Two iterator functions, which are not members of the String class, can be used with the `std::for_each` template function to enumerate the characters in a String object.

|Member|Description|
|------------|-----------------|
|`const char16* begin(String^ s)`|Returns a pointer to the beginning of the specified String object.|
|`const char16* end(String^ s)`|Returns a pointer past the end of the specified String object.|

## Members

The String class inherits from Object, and the IDisposable, IEquatable, and IPrintable interfaces.

The String class also has the following types of members.

### Constructors

|Member|Description|
|------------|-----------------|
|[String::String](#ctor)|Initializes a new instance of the String class.|

### Methods

The String class inherits the Equals(), Finalize(), GetHashCode(), GetType(), MemberwiseClose(), and ToString() methods from the [Platform::Object Class](../cppcx/platform-object-class.md). String also has the following methods.

|Method|Description|
|------------|-----------------|
|[String::Begin](#begin)|Returns a pointer to the beginning of the current string.|
|[String::CompareOrdinal](#compareordinal)|Compares two `String` objects by evaluating the numeric values of the corresponding characters in the two string values represented by the objects.|
|[String::Concat](#concat)|Concatenates the values of two String objects.|
|[String::Data](#data)|Returns a pointer to the beginning of the current string.|
|[String::Dispose](#dispose)|Frees or releases resources.|
|[String::End](#end)|Returns a pointer past the end of the current string.|
|[String::Equals](#equals)|Indicates whether the specified object is equal to the current object.|
|[String::GetHashCode](#gethashcode)|Returns the hash code for this instance.|
|[String::IsEmpty](#isempty)|Indicates whether the current String object is empty.|
|[String::IsFastPass](#isfastpass)|Indicates whether the current String object is participating in a *fast pass* operation. In a fast pass operation, reference counting is suspended.|
|[String::Length](#length)|Retrieves the length of the current String object.|
|[String::ToString](#tostring)|Returns a String object whose value is the same as the current string.|

### Operators

The String class has the following operators.

|Member|Description|
|------------|-----------------|
|[String::operator== Operator](#operator-equality)|Indicates whether two specified String objects have the same value.|
|[operator+ Operator](#operator-plus)|Concatenates two String objects into a new String object.|
|[String::operator> Operator](#operator-greater-than)|Indicates whether the value of one String object is greater than the value of a second String object.|
|[String::operator>= Operator](#operator-greater-than-or-equals)|Indicates whether the value of one String object is greater than or equal to the value of a second String object.|
|[String::operator!= Operator](#operator-inequality)|Indicates whether two specified String objects have different values.|
|[String::operator< Operator](#operator-less-than)|Indicates whether the value of one String object is less than the value of a second String object.|

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Header** vccorlib.h (included by default)

## <a name="begin"></a> String::Begin Method

Returns a pointer to the beginning of the current string.

### Syntax

```cpp
char16* Begin();
```

### Return Value

A pointer to the beginning of the current string.

## <a name="compareordinal"></a> String::CompareOrdinal Method

Static method that compares two `String` objects by evaluating the numeric values of the corresponding characters in the two string values represented by the objects.

### Syntax

```cpp
static int CompareOrdinal( String^ str1, String^ str2 );
```

### Parameters

*str1*<br/>
The first String object.

*str2*<br/>
The second String object.

### Return Value

An integer that indicates the lexical relationship between the two comparands. The following table lists the possible return values.

|Value|Condition|
|-----------|---------------|
|-1|`str1` is less than `str2`.|
|0|`str1` is equals `str2`.|
|1|`str1` is greater than `str2`.|

## <a name="concat"></a> String::Concat Method

Concatenates the values of two String objects.

### Syntax

```cpp
String^ Concat( String^ str1, String^ str2);
```

### Parameters

*str1*<br/>
The first String object, or `null`.

*str2*<br/>
The second String object, or `null`.

### Return Value

A new String^ object whose value is the concatenation of the values of `str1` and `str2`.

If `str1` is `null` and `str2` is not, `str1` is returned. If `str2` is `null` and `str1` is not, `str2` is returned. If `str1` and `str2` are both `null`, the empty string (L"") is returned.

## <a name="data"></a> String::Data Method

Returns a pointer to the beginning of the object's data buffer as a C-style array of `char16` (**`wchar_t`**) elements.

### Syntax

```cpp
const char16* Data();
```

### Return Value

A pointer to the beginning of a `const char16` array of Unicode characters (`char16` is a typedef for **`wchar_t`**).

### Remarks

Use this method to convert from `Platform::String^` to `wchar_t*`. When the `String` object goes out of scope, the Data pointer is no longer guaranteed to be valid. To store the data beyond the lifetime of the original `String` object, use [wcscpy_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) to copy the array into memory that you have allocated yourself.

## <a name="dispose"></a> String::Dispose Method

Frees or releases resources.

### Syntax

```cpp
virtual override void Dispose();
```

## <a name="end"></a> String::End Method

Returns a pointer past the end of the current string.

### Syntax

```cpp
char16* End();
```

### Return Value

A pointer to past the end of the current string.

### Remarks

End() returns Begin() + Length.

## <a name="equals"></a> String::Equals Method

Indicates whether the specified String has the same value as the current object.

### Syntax

```cpp
bool String::Equals(Object^ str);
bool String::Equals(String^ str);
```

### Parameters

*str*<br/>
The object to compare.

### Return Value

**`true`** if `str` is equal to the current object; otherwise, **`false`**.

### Remarks

This method is equivalent to the static [String::CompareOrdinal](#compareordinal). In the first overload, it is expected the `str` parameter can be cast to a String^ object.

## <a name="gethashcode"></a> String::GetHashCode Method

Returns the hash code for this instance.

### Syntax

```cpp
virtual override int GetHashCode();
```

### Return Value

The hash code for this instance.

## <a name="isempty"></a> String::IsEmpty Method

Indicates whether the current String object is empty.

### Syntax

```cpp
bool IsEmpty();
```

### Return Value

**`true`** if the current `String` object is **null** or the empty string (L""); otherwise, **`false`**.

## <a name="isfastpass"></a> String::IsFastPass Method

Indicates whether the current String object is participating in a *fast pass* operation. In a fast pass operation, reference counting is suspended.

### Syntax

```cpp
bool IsFastPass();
```

### Return Value

**`true`** if the current `String` object is fast-past; otherwise, **`false`**.

### Remarks

In a call to a function where a reference-counted object is a parameter, and the called function only reads that object, the compiler can safely suspend reference counting and improve calling performance. There is nothing useful that your code can do with this property. The system handles all the details.

## <a name="length"></a> String::Length Method

Retrieves the number of characters in the current `String` object.

### Syntax

```cpp
unsigned int Length();
```

### Return Value

The number of characters in the current `String` object.

### Remarks

The length of a String with no characters is zero. The length of the following string is 5:

```cpp
String^ str = "Hello";
int len = str->Length(); //len = 5
```

The character array returned by the [String::Data](#data) has one additional character, which is the terminating NULL or '\0'. This character is also two bytes long.

## <a name="operator-plus"></a> String::operator+ Operator

Concatenates two [String](../cppcx/platform-string-class.md) objects into a new [String](../cppcx/platform-string-class.md) object.

### Syntax

```cpp
bool String::operator+( String^ str1, String^ str2);
```

### Parameters

*str1*<br/>
The first `String` object.

*str2*<br/>
The second `String` object, whose contents will be appended to `str1`.

### Return Value

**`true`** if *str1* is equal to *str2*; otherwise, **`false`**.

### Remarks

This operator creates a `String^` object that contains the data from the two operands. Use it for convenience when extreme performance is not critical. A few calls to "`+`" in a function will probably not be noticeable, but if you are manipulating large objects or text data in a tight loop, then use the standard C++ mechanisms and types.

## <a name="operator-equality"></a> String::operator== Operator

Indicates whether two specified String objects have the same text value.

### Syntax

```cpp
bool String::operator==( String^ str1, String^ str2);
```

### Parameters

*str1*<br/>
The first `String` object to compare.

*str2*<br/>
The second `String` object to compare.

### Return Value

**`true`** if the contents of `str1` are equal to `str2`; otherwise, **`false`**.

### Remarks

This operator is equivalent to [String::CompareOrdinal](#compareordinal).

## <a name="operator-greater-than"></a> String::operator&gt;

Indicates whether the value of one `String` object is greater than the value of a second `String` object.

### Syntax

```cpp
bool String::operator>( String^ str1, String^ str2);
```

### Parameters

*str1*<br/>
The first `String` object.

*str2*<br/>
The second `String` object.

### Return Value

**`true`** if the value of `str1` is greater than the value of `str2`; otherwise, **`false`**.

### Remarks

This operator is equivalent to explicitly calling [String::CompareOrdinal](#compareordinal) and getting a result greater than zero.

## <a name="operator-greater-than-or-equals"></a> String::operator&gt;=

Indicates whether the value of one `String` object is greater than or equal to the value of a second `String` object.

### Syntax

```cpp
bool String::operator>=( String^ str1, String^ str2);
```

### Parameters

*str1*<br/>
The first `String` object.

*str2*<br/>
The second `String` object.

### Return Value

**`true`** if the value of `str1` is greater than or equal to the value of `str2`; otherwise, **`false`**.

## <a name="operator-inequality"></a> String::operator!=

Indicates whether two specified `String` objects have different values.

### Syntax

```cpp
bool String::operator!=( String^ str1, String^ str2);
```

### Parameters

*str1*<br/>
The first `String` object to compare.

*str2*<br/>
The second `String` object to compare.

### Return Value

**`true`** if `str1` is not equal to `str2`; otherwise, **`false`**.

## <a name="operator-less-than"></a> String::operator&lt;

Indicates whether the value of one `String` object is less than the value of a second `String` object.

### Syntax

```cpp
bool String::operator<( String^ str1, String^ str2);
```

### Parameters

*str1*<br/>
The first `String` object.

*str2*<br/>
The second `String` object.

### Return Value

**`true`** if the value of *str1* is less than the value of *str2*; otherwise, **`false`**.

## <a name="ctor"></a> String::String Constructor

Initializes a new instance of the `String` class with a copy of the input string data.

### Syntax

```cpp
String();
String(char16* s);
String(char16* s, unsigned int n);
```

### Parameters

*s*<br/>
A series of wide characters that initialize the string. char16

*n*<br/>
A number that specifies the length of the string.

### Remarks

If performance is critical and you control the lifetime of the source string, you can use [Platform::StringReference](../cppcx/platform-stringreference-class.md) in place of String.

### Example

```cpp
String^ s = L"Hello!";
```

## <a name="tostring"></a> String::ToString

Returns a `String` object whose value is the same as the current string.

### Syntax

```cpp
String^ String::ToString();
```

### Return Value

A `String` object whose value is the same as the current string.

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)
