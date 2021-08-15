---
title: "__raise"
description: "Learn how to use the Microsoft C++ extension keyword `__raise` for native event handling."
ms.date: 11/20/2020
f1_keywords: ["__raise", "__raise_cpp"]
helpviewer_keywords: ["__raise keyword [C++]"]
---
# `__raise` keyword

Emphasizes the call site of an event.

> [!NOTE]
> Event attributes in native C++ are incompatible with Standard C++. They don't compile when you specify [`/permissive-`](../build/reference/permissive-standards-conformance.md) conformance mode.

## Syntax

> **`__raise`** *`method-declarator`* **`;`**

## Remarks

From managed code, an event can only be raised from within the class where it's defined. For more information, see [`event`](../extensions/event-cpp-component-extensions.md).

The keyword **`__raise`** causes an error to be emitted if you call a non-event.

> [!NOTE]
> A templated class or struct cannot contain events.

## Example

```cpp
// EventHandlingRef_raise.cpp
struct E {
   __event void func1();
   void func1(int) {}

   void func2() {}

   void b() {
      __raise func1();
      __raise func1(1);  // C3745: 'int Event::bar(int)':
                         // only an event can be 'raised'
      __raise func2();   // C3745
   }
};

int main() {
   E e;
   __raise e.func1();
   __raise e.func1(1);  // C3745
   __raise e.func2();   // C3745
}
```

## See also

[Keywords](../cpp/keywords-cpp.md)\
[Event handling](../cpp/event-handling.md)\
[`__event`](../cpp/event.md)\
[`__hook`](../cpp/hook.md)\
[`__unhook`](../cpp/unhook.md)\
[Component extensions for .NET and UWP](../extensions/component-extensions-for-runtime-platforms.md)
