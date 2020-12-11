---
description: "Learn more about: Compiler Error C2599"
title: "Compiler Error C2599"
ms.date: "11/04/2016"
f1_keywords: ["C2599"]
helpviewer_keywords: ["C2599"]
ms.assetid: 88515f36-7589-47e2-862e-0de8b18d6668
---
# Compiler Error C2599

'enum' : forward declaration of enum type is not allowed

The compiler no longer supports forward declaration of a managed enumeration.

Forward declaration of an enum type is not allowed under [/Za](../../build/reference/za-ze-disable-language-extensions.md).

The following sample generates C2599:

```cpp
// C2599.cpp
// compile with: /clr /c
enum class Status;   // C2599

enum class Status2 { stop2, hold2, go2};

ref struct MyStruct {
   // Delete the following line to resolve.
   Status m_status;

   Status2 m_status2;   // OK
};

enum class Status { stop, hold, go };
```
