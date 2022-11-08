---
description: "Learn more about the /Zc:enumTypes (Enable enum type deduction) compiler option."
title: "/Zc:enumTypes (Enable enum type deduction)"
ms.date: 11/07/2022
f1_keywords: ["/Zc:enumTypes"]
helpviewer_keywords: ["-Zc:enumTypes compiler option (C++)", "/Zc:enumTypes compiler option (C++)"]
---
# `/Zc:enumTypes` (Enable enum type deduction)

The **`/Zc:enumTypes`** compiler option enables C++ conforming **`enum`** underlying type and enumerator type deduction.

## Syntax

> **`/Zc:enumTypes`**\[**`-`**]

## Remarks

The **`/Zc:enumTypes`** compiler option implements Standard C++ conforming behavior for deduction of enumeration base types and the types of enumerators.

The **`/Zc:enumTypes`** option is new in Visual Studio 2022 version 17.4. This option is off by default, and isn't enabled by **`/permissive-`**. To explicitly disable the option, use **`/Zc:enumTypes-`**.

When enabled, the **`/Zc:enumTypes`** option is a potential source and binary breaking change. Some enumeration types change size when the conforming **`/Zc:enumTypes`** option is enabled. Certain Windows SDK headers include such enumeration definitions.

The C++ Standard requires that the underlying type of an enumeration is large enough to hold all enumerators declared in it. Sufficiently large enumerators can set the underlying type of the **`enum`** to **`unsigned int`**, **`long long`**, or **`unsigned long long`**. Previously, such enumeration types always had an underlying type of **`int`** in the Microsoft compiler, regardless of enumerator values.

The C++ Standard also specifies that, within an enumeration definition that has no fixed underlying type, the types of enumerators are determined by their initializers. Or, for the enumerators with no initializer, by the type of the previous enumerator (accounting for overflow). Previously, such enumerators were always given the deduced type of the enumeration, with a placeholder for the underlying type (typically **`int`**).

In versions of Visual Studio before Visual Studio 2022 version 17.4, the C++ compiler didn't correctly determine the underlying type of an unscoped enumeration with no fixed base type. The compiler also didn't correctly model the types of enumerators. It could assume an incorrect type in enumerations without a fixed underlying type before the closing brace of the enumeration. Under **`/Zc:enumTypes`**, the compiler correctly implements the standard behavior.

### Example: Underlying type of unscoped `enum` with no fixed type

```cpp
enum Unsigned
{
    A = 0xFFFFFFFF // Value 'A' does not fit in 'int'.
};

// Previously, this static_assert failed. It passes with /Zc:enumTypes.
static_assert(std::is_same_v<std::underlying_type_t<Unsigned>, unsigned int>);

template <typename T>
void f(T x)
{
}

int main()
{
    // Previously called f<int>, now calls f<unsigned int>.
    f(+A);
}

// Previously, this enum would have an underlying type of `int`,
// but Standard C++ requires this to have a 64-bit underlying type.
// The /Zc:enumTypes option changes the size of this enum from 4 to 8,
// which could impact binary compatibility with code compiled with an
// earlier compiler version, or without the switch.
enum Changed
{
    X = -1,
    Y = 0xFFFFFFFF
};
```

### Example: Enumerators within an `enum` definition with no fixed underlying type

```cpp
enum Enum {
    A = 'A',
    B = sizeof(A)
};

static_assert(B == 1); // previously failed, now succeeds under /Zc:enumTypes
```

In this example the enumerator `A` should have type **`char`** prior to the closing brace of the enumeration, so `B` should be initialized using `sizeof(char)`. Before the **`/Zc:enumTypes`** fix, `A` had enumeration type `Enum` with a deduced underlying type **`int`**, and `B` was initialized using `sizeof(Enum)`, or 4.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional options**, add *`/Zc:enumTypes`* or *`/Zc:enumTypes-`*. Choose **OK** or **Apply** to save your changes.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[`/std` (Specify language standard version)](std-specify-language-standard-version.md)
