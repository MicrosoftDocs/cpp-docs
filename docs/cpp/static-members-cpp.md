---
description: "Learn more about: Static Members (C++)"
title: "Static Members (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["class members [C++], static", "instance constructors, static members", "class members [C++], shared", "members [C++], static data members", "static members [C++], data members", "static data members [C++]", "data members [C++], static data members", "class instances [C++], shared members", "instance constructors, shared members", "class instances [C++], static members"]
ms.assetid: 9cc8cf0f-d74c-46f2-8e83-42d4e42c8370
---
# Static Members (C++)

Classes can contain static member data and member functions. When a data member is declared as **`static`**, only one copy of the data is maintained for all objects of the class.

Static data members are not part of objects of a given class type. As a result, the declaration of a static data member is not considered a definition. The data member is declared in class scope, but definition is performed at file scope. These static members have external linkage. The following example illustrates this:

```cpp
// static_data_members.cpp
class BufferedOutput
{
public:
   // Return number of bytes written by any object of this class.
   short BytesWritten()
   {
      return bytecount;
   }

   // Reset the counter.
   static void ResetCount()
   {
      bytecount = 0;
   }

   // Static member declaration.
   static long bytecount;
};

// Define bytecount in file scope.
long BufferedOutput::bytecount;

int main()
{
}
```

In the preceding code, the member `bytecount` is declared in class `BufferedOutput`, but it must be defined outside the class declaration.

Static data members can be referred to without referring to an object of class type. The number of bytes written using `BufferedOutput` objects can be obtained as follows:

```cpp
long nBytes = BufferedOutput::bytecount;
```

For the static member to exist, it is not necessary that any objects of the class type exist. Static members can also be accessed using the member-selection (**.** and **->**) operators. For example:

```cpp
BufferedOutput Console;

long nBytes = Console.bytecount;
```

In the preceding case, the reference to the object (`Console`) is not evaluated; the value returned is that of the static object `bytecount`.

Static data members are subject to class-member access rules, so private access to static data members is allowed only for class-member functions and friends. These rules are described in [Member-Access Control](../cpp/member-access-control-cpp.md). The exception is that static data members must be defined in file scope regardless of their access restrictions. If the data member is to be explicitly initialized, an initializer must be provided with the definition.

The type of a static member is not qualified by its class name. Therefore, the type of `BufferedOutput::bytecount` is **`long`**.

## See also

[Classes and Structs](../cpp/classes-and-structs-cpp.md)
