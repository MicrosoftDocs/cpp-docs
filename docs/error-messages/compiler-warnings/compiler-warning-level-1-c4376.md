---
title: "Compiler Warning (level 1) C4376"
description: "Learn more about: Compiler Warning (level 1) C4376"
ms.date: 11/04/2016
f1_keywords: ["C4376"]
helpviewer_keywords: ["C4376"]
---
# Compiler Warning (level 1) C4376

> access specifier 'old_specifier:' is no longer supported: please use 'new_specifier:' instead

## Remarks

For more information on specifying type and member accessibility in metadata, see [Type visibility](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) and [Member visibility](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Member_visibility) in [How to: Define and Consume Classes and Structs (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md).

## Example

The following example generates C4376.

```cpp
// C4376.cpp
// compile with: /clr /W1 /c
public ref class G {
public public:   // C4376
   void m2();
};

public ref class H {
public:   // OK
   void m2();
};
```
