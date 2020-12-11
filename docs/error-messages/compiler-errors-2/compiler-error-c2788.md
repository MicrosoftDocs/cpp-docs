---
description: "Learn more about: Compiler Error C2788"
title: "Compiler Error C2788"
ms.date: "11/04/2016"
f1_keywords: ["C2788"]
helpviewer_keywords: ["C2788"]
ms.assetid: 8688fc5c-e652-43b4-b407-9c488c76f2db
---
# Compiler Error C2788

'identifier' : more than one GUID associated with this object

The [__uuidof](../../cpp/uuidof-operator.md) operator takes a user-defined type with a GUID attached or an object of such a user-defined type. This error occurs when the argument is an object with multiple GUIDs.

The following sample generates C2788:

```cpp
// C2788.cpp
#include <windows.h>
struct __declspec(uuid("00000001-0000-0000-0000-000000000000")) A {};
struct __declspec(uuid("{00000002-0000-0000-0000-000000000000}")) B {};
template <class T, class U> class MyClass {};

typedef MyClass<A,B> MyBadClass;
typedef MyClass<A,A> MyGoodClass;

int main() {
   __uuidof(MyBadClass);    // C2788
   // try the following line instead
   __uuidof(MyGoodClass);
}
```
