---
description: "Learn more about: Compiler Error C2930"
title: "Compiler Error C2930"
ms.date: "11/04/2016"
f1_keywords: ["C2930"]
helpviewer_keywords: ["C2930"]
ms.assetid: f07eecd1-e5d1-4518-bd89-b1fd2a003a17
---
# Compiler Error C2930

'class' : type-class-id redefined as an enumerator of 'enum identifier'

You cannot use a generic or template class as a member of an enumeration.

This error can be caused if braces are improperly matched.

The following sample generates C2930:

```cpp
// C2930.cpp
// compile with: /c
template<class T>
class x{};
enum SomeEnum { x };   // C2930

class y{};
enum SomeEnum { y };
```

C2930 can also occur when using generics:

```cpp
// C2930c.cpp
// compile with: /clr /c
generic<class T>
ref struct GC {};
enum SomeEnum { GC };   // C2930

ref struct GC2 {};
enum SomeEnum2 { GC2 };
```
