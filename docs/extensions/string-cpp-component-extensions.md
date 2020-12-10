---
description: "Learn more about: String  (C++/CLI and C++/CX)"
title: "String  (C++/CLI and C++/CX)"
ms.date: "10/08/2018"
ms.topic: "reference"
helpviewer_keywords: ["string support with /clr", "/clr compiler option [C++], string support"]
ms.assetid: c695f965-9be0-4e20-9661-373bfee6557e
---
# String  (C++/CLI and C++/CX)

The Windows Runtime and common language runtime represent strings as objects whose allocated memory is managed automatically. That is, you are not required to explicitly discard the memory for a string when the string variable goes out of scope or your application ends. To indicate that the lifetime of a string object is to be managed automatically, declare the string type with the [handle-to-object (^)](handle-to-object-operator-hat-cpp-component-extensions.md) modifier.

## Windows Runtime

The Windows Runtime architecture requires that the `String` data type be located in the `Platform` namespace. For your convenience, Visual C++ also provides the `string` data type, which is a synonym for `Platform::String`, in the `default` namespace.

### Syntax

```cpp
// compile with /ZW
using namespace Platform;
using namespace default;
   Platform::String^ MyString1 = "The quick brown fox";
   String^ MyString2 = "jumped over the lazy dog.";
   String^ MyString3 = "Hello, world!";
```

### Requirements

Compiler option: `/ZW`

## Common Language Runtime

When compiling with `/clr`, the compiler will convert string literals to strings of type <xref:System.String>. To preserve backward compatibility with existing code there are two exceptions to this:

- Exception handling. When a string literal is thrown, the compiler will catch it as a string literal.

- Template deduction. When a string literal is passed as a template argument, the compiler will not convert it to a <xref:System.String>. Note, string literals passed as a generic argument will be promoted to <xref:System.String>.

The compiler also has built-in support for three operators, which you can override to customize their behavior:

- System::String^ operator +( System::String, System::String);

- System::String^ operator +( System::Object, System::String);

- System::String^ operator +( System::String, System::Object);

When passed a <xref:System.String>, the compiler will box, if necessary, and then concatenate the object (with ToString) with the string.

> [!NOTE]
> The caret ("^") indicates that the declared variable is a handle to a C++/CLI managed object.

For more information see [String and Character Literals](../cpp/string-and-character-literals-cpp.md).

### Requirements

Compiler option: **/clr**

### Examples

The following code example demonstrates concatenating and comparing strings.

```cpp
// string_operators.cpp
// compile with: /clr
// In the following code, the caret ("^") indicates that the
// declared variable is a handle to a C++/CLI managed object.
using namespace System;

int main() {
   String^ a = gcnew String("abc");
   String^ b = "def";   // same as gcnew form
   Object^ c = gcnew String("ghi");

   char d[100] = "abc";

   // variables of System::String returning a System::String
   Console::WriteLine(a + b);
   Console::WriteLine(a + c);
   Console::WriteLine(c + a);

   // accessing a character in the string
   Console::WriteLine(a[2]);

   // concatenation of three System::Strings
   Console::WriteLine(a + b + c);

   // concatenation of a System::String and string literal
   Console::WriteLine(a + "zzz");

   // you can append to a System::String^
   Console::WriteLine(a + 1);
   Console::WriteLine(a + 'a');
   Console::WriteLine(a + 3.1);

   // test System::String^ for equality
   a += b;
   Console::WriteLine(a);
   a = b;
   if (a == b)
      Console::WriteLine("a and b are equal");

   a = "abc";
   if (a != b)
      Console::WriteLine("a and b are not equal");

   // System:String^ and tracking reference
   String^% rstr1 = a;
   Console::WriteLine(rstr1);

   // testing an empty System::String^
   String^ n;
   if (n == nullptr)
      Console::WriteLine("n is empty");
}
```

```Output
abcdef

abcghi

ghiabc

c

abcdefghi

abczzz

abc1

abc97

abc3.1

abcdef

a and b are equal

a and b are not equal

abc

n is empty
```

The following sample shows that you can overload the compiler-provided operators, and that the compiler will find a function overload based on the <xref:System.String> type.

```cpp
// string_operators_2.cpp
// compile with: /clr
using namespace System;

// a string^ overload will be favored when calling with a String
void Test_Overload(const char * a) {
   Console::WriteLine("const char * a");
}
void Test_Overload(String^ a) {
   Console::WriteLine("String^ a");
}

// overload will be called instead of compiler defined operator
String^ operator +(String^ a, String^ b) {
   return ("overloaded +(String^ a, String^ b)");
}

// overload will be called instead of compiler defined operator
String^ operator +(Object^ a, String^ b) {
   return ("overloaded +(Object^ a, String^ b)");
}

// overload will be called instead of compiler defined operator
String^ operator +(String^ a, Object^ b) {
   return ("overloaded +(String^ a, Object^ b)");
}

int main() {
   String^ a = gcnew String("abc");
   String^ b = "def";   // same as gcnew form
   Object^ c = gcnew String("ghi");

   char d[100] = "abc";

   Console::WriteLine(a + b);
   Console::WriteLine(a + c);
   Console::WriteLine(c + a);

   Test_Overload("hello");
   Test_Overload(d);
}
```

```Output
overloaded +(String^ a, String^ b)

overloaded +(String^ a, Object^ b)

overloaded +(Object^ a, String^ b)

String^ a

const char * a
```

The following sample shows that the compiler distinguishes between native strings and <xref:System.String> strings.

```cpp
// string_operators_3.cpp
// compile with: /clr
using namespace System;
int func() {
   throw "simple string";   // const char *
};

int func2() {
   throw "string" + "string";   // returns System::String
};

template<typename T>
void func3(T t) {
   Console::WriteLine(T::typeid);
}

int main() {
   try {
      func();
   }
   catch(char * e) {
      Console::WriteLine("char *");
   }

   try {
      func2();
   }
   catch(String^ str) {
      Console::WriteLine("String^ str");
   }

   func3("string");   // const char *
   func3("string" + "string");   // returns System::String
}
```

```Output
char *

String^ str

System.SByte*

System.String
```

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)<br/>
[String and Character Literals](../cpp/string-and-character-literals-cpp.md)<br/>
[/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md)
