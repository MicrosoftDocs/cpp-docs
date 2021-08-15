---
description: "Learn more about: enum class  (C++/CLI and C++/CX)"
title: "enum class  (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
ms.assetid: 8010fa8c-bad6-45b4-8214-b4db64d7ffe1
---
# enum class  (C++/CLI and C++/CX)

Declares an enumeration at namespace scope, which is a user-defined type consisting of a set of named constants called enumerators.

## All Runtimes

### Remarks

C++/CX and C++/CLI support **public enum class** and **private enum class** which are similar to the standard C++ **enum class** but with the addition of the accessibility specifier. Under **/clr**, the C++11 **enum class** type is permitted but will generate warning C4472 which is intended to ensure that you really want the ISO enum type and not the C++/CX and C++/CLI type. For more information about the ISO Standard C++ **`enum`** keyword, see [Enumerations](../cpp/enumerations-cpp.md).

## Windows Runtime

### Syntax

```cpp
      access
      enum class
      enumeration-identifier
      [:underlying-type] { enumerator-list } [var];
accessenum structenumeration-identifier[:underlying-type] { enumerator-list } [var];
```

### Parameters

*access*<br/>
The accessibility of the enumeration, which can be **`public`** or **`private`**.

*enumeration-identifier*<br/>
The name of the enumeration.

*underlying-type*<br/>
(Optional) The underlying type of the enumeration.

(Optional. Windows Runtime only) The underlying type of the enumeration, which can be **`bool`**, **`char`**, `char16`, `int16`, `uint16`, **`int`**, `uint32`, `int64`, or `uint64`.

*enumerator-list*<br/>
A comma-delimited list of enumerator names.

The value of each enumerator is a constant expression that is either defined implicitly by the compiler, or explicitly by the notation, *enumerator*`=`*constant-expression*. By default, the value of the first enumerator is zero if it is implicitly defined. The value of each subsequent implicitly-defined enumerator is the value of the previous enumerator + 1.

*var*<br/>
(Optional) The name of a variable of the enumeration type.

### Remarks

For more information, and examples, see [Enums](../cppcx/enums-c-cx.md).

Note that the compiler emits error messages if the constant expression that defines the value of an enumerator cannot be represented by the *underlying-type*.  However, the compiler does not report an error for a value that is inappropriate for the underlying type. For example:

- If *underlying-type* is numeric, and an enumerator specifies the maximum value for that type, the value of the next implicitly defined enumeration cannot be represented.

- If *underlying-type* is **`bool`**, and more than two enumerators are implicitly defined, the enumerators after the first two cannot be represented.

- If *underlying-type* is `char16`, and the enumeration value ranges from 0xD800 through 0xDFFF, the value can be represented. However, the value logically incorrect because it represents half a Unicode surrogate pair and should not appear in isolation.

### Requirements

Compiler option: `/ZW`

## Common Language Runtime

### Syntax

```cpp
      access
      enum class
      name [:type] { enumerator-list } var;
accessenum structname [:type] { enumerator-list } var;
```

### Parameters

*access*<br/>
The accessibility of the enum. Can be either **`public`** or **`private`**.

*enumerator-list*<br/>
A comma-separated list of the identifiers (enumerators) in the enumeration.

*name*<br/>
The name of the enumeration. Anonymous managed enumerations are not allowed.

*type*<br/>
(Optional) The underlying type of the *identifiers*. This can be any scalar type, such as signed or unsigned versions of **`int`**, **`short`**, or **`long`**.  **`bool`** or **`char`** is also allowed.

*var*<br/>
(Optional) The name of a variable of the enumeration type.

### Remarks

**enum class** and **enum struct** are equivalent declarations.

There are two types of enums: managed or C++/CX and standard.

A managed or C++/CX enum might be defined as follows,

```cpp
public enum class day {sun, mon };
```

and is semantically equivalent to:

```cpp
ref class day {
public:
   static const int sun = 0;
   static const int mon = 1;
};
```

A standard enum might be defined as follows:

```cpp
enum day2 { sun, mon };
```

and is semantically equivalent to:

```cpp
static const int sun = 0;
static const int mon = 1;
```

Managed enumerator names (*identifiers*) are not injected into the scope where the enumeration is defined; all references to the enumerators must be fully qualified (*name*`::`*identifier*).  For this reason, you cannot define an anonymous managed enum.

The enumerators of a standard enum are strongly injected into the enclosing scope.  That is, if there is another symbol with the same name as an enumerator in the enclosing scope, the compiler will generate an error.

In Visual Studio 2002 and Visual Studio 2003, enumerators were weakly injected (visible in the enclosing scope unless there was another identifier with the same name).

If a standard C++ enum is defined (without **`class`** or **`struct`**), compiling with `/clr` will cause the enumeration to be compiled as a managed enum.  The enumeration still has the semantics of an unmanaged enumeration.  Note, the compiler injects an attribute, `Microsoft::VisualC::NativeEnumAttribute` to identify a programmer's intent for the enum to be a native enum.  Other compilers will simply see the standard enum as a managed enum.

A named, standard enum compiled with `/clr` will be visible in the assembly as a managed enum, and can be consumed by any other managed compiler.   However, an unnamed standard enum will not be publicly visible from the assembly.

In Visual Studio 2002 and Visual Studio 2003, a standard enum used as the type in a function parameter:

```cpp
// mcppv2_enum.cpp
// compile with: /clr
enum E { a, b };
void f(E) {System::Console::WriteLine("hi");}

int main() {
   E myi = b;
   f(myi);
}
```

would emit the following in MSIL for the function signature:

```cpp
void f(int32);
```

However, in current versions of the compiler, the standard enum is emitted as a managed enum with a [NativeEnumAttribute] and the following in MSIL for the function signature:

```cpp
void f(E)
```

For more information about native enums, see [C++ Enumeration Declarations](../cpp/enumerations-cpp.md).

For more information on CLR enums, see:

- [Underlying Type of an Enum](../dotnet/how-to-define-and-consume-enums-in-cpp-cli.md)

### Requirements

Compiler option: `/clr`

### Examples

```cpp
// mcppv2_enum_2.cpp
// compile with: /clr
// managed enum
public enum class m { a, b };

// standard enum
public enum n { c, d };

// unnamed, standard enum
public enum { e, f } o;

int main()
{
   // consume managed enum
   m mym = m::b;
   System::Console::WriteLine("no automatic conversion to int: {0}", mym);
   System::Console::WriteLine("convert to int: {0}", (int)mym);

   // consume standard enum
   n myn = d;
   System::Console::WriteLine(myn);

   // consume standard, unnamed enum
   o = f;
   System::Console::WriteLine(o);
}
```

```Output
no automatic conversion to int: b

convert to int: 1

1

1
```

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)
