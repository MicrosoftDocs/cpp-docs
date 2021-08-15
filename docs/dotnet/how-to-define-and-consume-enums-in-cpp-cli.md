---
description: "Learn more about: How to: Define and consume enums in C++/CLI"
title: "How to: Define and consume enums in C++/CLI"
ms.date: "11/04/2016"
helpviewer_keywords: ["enum class, specifying underlying types"]
ms.assetid: df8f2b91-b9d2-4fab-9be4-b1d58b8bc570
---
# How to: Define and consume enums in C++/CLI

This topic discusses enums in C++/CLI.

## Specifying the underlying type of an enum

By default, the underlying type of an enumeration is **`int`**.  However, you can specify the type to be signed or unsigned forms of **`int`**, **`short`**, **`long`**, **`__int32`**, or **`__int64`**.  You can also use **`char`**.

```cpp
// mcppv2_enum_3.cpp
// compile with: /clr
public enum class day_char : char {sun, mon, tue, wed, thu, fri, sat};

int main() {
   // fully qualified names, enumerator not injected into scope
   day_char d = day_char::sun, e = day_char::mon;
   System::Console::WriteLine(d);
   char f = (char)d;
   System::Console::WriteLine(f);
   f = (char)e;
   System::Console::WriteLine(f);
   e = day_char::tue;
   f = (char)e;
   System::Console::WriteLine(f);
}
```

**Output**

```Output
sun
0
1
2
```

## How to convert between managed and standard enumerations

There is no standard conversion between an enum and an integral type; a cast is required.

```cpp
// mcppv2_enum_4.cpp
// compile with: /clr
enum class day {sun, mon, tue, wed, thu, fri, sat};
enum {sun, mon, tue, wed, thu, fri, sat} day2; // unnamed std enum

int main() {
   day a = day::sun;
   day2 = sun;
   if ((int)a == day2)
   // or...
   // if (a == (day)day2)
      System::Console::WriteLine("a and day2 are the same");
   else
      System::Console::WriteLine("a and day2 are not the same");
}
```

**Output**

```Output
a and day2 are the same
```

## Operators and enums

The following operators are valid on enums in C++/CLI:

|Operator|
|--------------|
|== != \< > \<= >=|
|+ -|
|&#124; ^ & ~|
|++ --|
|sizeof|

Operators &#124; ^ & ~ ++ -- are defined only for enumerations with integral underlying types, not including bool.  Both operands must be of the enumeration type.

The compiler does no static or dynamic checking of the result of an enum operation; an operation may result in a value not in the range of the enum's valid enumerators.

> [!NOTE]
> C++11 introduces enum class types in unmanaged code which are significantly different than managed enum classes in C++/CLI. In particular, the C++11 enum class type does not support the same operators as the managed enum class type in C++/CLI, and C++/CLI source code must provide an accessibility specifier in managed enum class declarations in order to distinguish them from unmanaged (C++11) enum class declarations. For more information about enum classes in C++/CLI, C++/CX, and C++11, see [enum class](../extensions/enum-class-cpp-component-extensions.md).

```cpp
// mcppv2_enum_5.cpp
// compile with: /clr
private enum class E { a, b } e, mask;
int main() {
   if ( e & mask )   // C2451 no E->bool conversion
      ;

   if ( ( e & mask ) != 0 )   // C3063 no operator!= (E, int)
      ;

   if ( ( e & mask ) != E() )   // OK
      ;
}
```

```cpp
// mcppv2_enum_6.cpp
// compile with: /clr
private enum class day : int {sun, mon};
enum : bool {sun = true, mon = false} day2;

int main() {
   day a = day::sun, b = day::mon;
   day2 = sun;

   System::Console::WriteLine(sizeof(a));
   System::Console::WriteLine(sizeof(day2));
   a++;
   System::Console::WriteLine(a == b);
}
```

**Output**

```Output
4
1
True
```

## See also

[enum class](../extensions/enum-class-cpp-component-extensions.md)
