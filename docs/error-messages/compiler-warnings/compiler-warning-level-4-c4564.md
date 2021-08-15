---
description: "Learn more about: Compiler Warning (level 4) C4564"
title: "Compiler Warning (level 4) C4564"
ms.date: "11/04/2016"
f1_keywords: ["C4564"]
helpviewer_keywords: ["C4564"]
ms.assetid: 555b301b-313e-4262-9f81-eb878674be60
---
# Compiler Warning (level 4) C4564

method 'method' of class 'class' defines unsupported default parameter 'parameter'

The compiler detected a method with one or more parameters with default values. The default value(s) for the parameters will be ignored when the method is invoked; explicitly specify values for those parameters. If you do not explicitly specify values for those parameters, the C++ compiler will generate an error.

Given the following .dll created with Visual Basic, which allows default parameters on method arguments:

```vb
' C4564.vb
' compile with: vbc /t:library C4564.vb
Public class TestClass
   Public Sub MyMethod (a as Integer, _
                        Optional c as Integer=1)
   End Sub
End class
```

And the following C++ sample that uses the .dll created with Visual Basic,

```cpp
// C4564.cpp
// compile with: /clr /W4 /WX
#using <C4564.dll>

int main() {
   TestClass ^ myx = gcnew TestClass();   // C4564
   myx->MyMethod(9);
   // try the following line instead, to avoid an error
   // myx->MyMethod(9, 1);
}
```
