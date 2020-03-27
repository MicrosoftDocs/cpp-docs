---
title: "__raise"
ms.date: "11/04/2016"
f1_keywords: ["__raise", "__raise_cpp"]
helpviewer_keywords: ["__raise keyword [C++]"]
ms.assetid: 6f1ae418-5f0f-48b6-9f6e-8ea7e66b239a
---
# __raise

Emphasizes the call site of an event.

## Syntax

```
__raise method-declarator;
```

## Remarks

From managed code, an event can only be raised from within the class where it is defined. See [event](../extensions/event-cpp-component-extensions.md) for more information.

The keyword **__raise** causes an error to be emitted if you call a non-event.

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

[Keywords](../cpp/keywords-cpp.md)<br/>
[Event Handling](../cpp/event-handling.md)<br/>
[Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md)
