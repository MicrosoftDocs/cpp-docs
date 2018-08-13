---
title: "conform | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["conform_CPP", "vc-pragma.conform"]
dev_langs: ["C++"]
helpviewer_keywords: ["conform pragma", "forScope conform pragma", "pragmas, conform"]
ms.assetid: 71b3e174-c53c-4bfc-adf3-af39b1554191
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# conform
**C++ Specific**  
  
Specifies the run-time behavior of the [/Zc:forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) compiler option.  
  
## Syntax  
  
```  
#pragma conform(name [, show ] [, on | off ] [ [, push | pop ] [, identifier ] ] )  
```  
  
### Parameters  
*name*  
Specifies the name of the compiler option to be modified. The only valid *name* is `forScope`.  
  
*show* (optional)  
Causes the current setting of *name* (true or false) to be displayed by means of a warning message during compilation. For example, `#pragma conform(forScope, show)`.  
  
*on, off*(optional)  
Setting *name* to *on* enables the [/Zc:forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) compiler option. The default is *off*.  
  
*push* (optional)  
Pushes the current value of *name* onto the internal compiler stack. If you specify *identifier*, you can specify the *on* or *off* value for *name* to be pushed onto the stack. For example, `#pragma conform(forScope, push, myname, on)`.  
  
*pop* (optional)  
Sets the value of *name* to the value at the top of the internal compiler stack and then pops the stack. If identifier is specified with *pop*, the stack will be popped back until it finds the record with *identifier*, which will also be popped; the current value for *name* in the next record on the stack becomes the new value for *name*. If you specify pop with an *identifier* that is not in a record on the stack, the *pop* is ignored.  
  
*identifier*(optional)  
Can be included with a *push* or *pop* command. If *identifier* is used, then an *on* or *off* specifier can also be used.  
  
## Example  
  
```cpp  
// pragma_directive_conform.cpp  
// compile with: /W1  
// C4811 expected  
#pragma conform(forScope, show)  
#pragma conform(forScope, push, x, on)  
#pragma conform(forScope, push, x1, off)  
#pragma conform(forScope, push, x2, off)  
#pragma conform(forScope, push, x3, off)  
#pragma conform(forScope, show)  
#pragma conform(forScope, pop, x1)  
#pragma conform(forScope, show)  
  
int main() {}  
```  
  
## See Also  

[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)