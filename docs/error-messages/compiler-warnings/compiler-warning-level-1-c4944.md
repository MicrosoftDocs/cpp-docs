---
description: "Learn more about: Compiler Warning (level 1) C4944"
title: "Compiler Warning (level 1) C4944"
ms.date: "11/04/2016"
f1_keywords: ["C4944"]
helpviewer_keywords: ["C4944"]
ms.assetid: e2905eb1-2e3b-4fab-a48b-c0cae0fd997f
---
# Compiler Warning (level 1) C4944

'symbol' : cannot import symbol from 'assembly1': as 'symbol' already exists in the current scope

A symbol was defined in a source code file and then a #using statement referenced an assembly that also defined the symbol. The symbol in the assembly is ignored.

## Examples

The following sample creates a component with a type called ClassA.

```csharp
// C4944.cs
// compile with: /target:library
// C# source code to create a dll
public class ClassA {
   public int i;
}
```

The following samples generate C4944.

```cpp
// C4944b.cpp
// compile with: /clr /W1
class ClassA {
public:
   int u;
};

#using "C4944.dll"   // C4944 ClassA also defined C4944.dll

int main() {
   ClassA * x = new ClassA();
   x->u = 9;
   System::Console::WriteLine(x->u);
}
```
