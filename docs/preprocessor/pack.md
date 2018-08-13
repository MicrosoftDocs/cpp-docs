---
title: "pack | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["pack_CPP", "vc-pragma.pack"]
dev_langs: ["C++"]
helpviewer_keywords: ["pragmas, pack", "pack pragma"]
ms.assetid: e4209cbb-5437-4b53-b3fe-ac264501d404
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# pack
Specifies packing alignment for structure, union, and class members.  
  
## Syntax  
  
```  
#pragma pack( [ show ] | [ push | pop ] [, identifier ] , n  )  
```  
  
## Remarks  

To pack a class is to place its members directly after each other in memory, which can mean that some or all members can be aligned on a boundary smaller than the default alignment the target architecture. **pack** gives control at the data-declaration level. This differs from compiler option [/Zp](../build/reference/zp-struct-member-alignment.md), which only provides module-level control. **pack** takes effect at the first **struct**, **union**, or **class** declaration after the pragma is seen. **pack** has no effect on definitions. Calling **pack** with no arguments sets *n* to the value set in the compiler option `/Zp`. If the compiler option is not set, the default value is 8.  
  
If you change the alignment of a structure, it may not use as much space in memory, but you may see a decrease in performance or even get a hardware-generated exception for unaligned access.  You can modify this exception behavior by using [SetErrorMode](http://msdn.microsoft.com/library/windows/desktop/ms680621).  
  
*show* (optional)  
Displays the current byte value for packing alignment. The value is displayed by a warning message.  
  
*push* (optional)  
Pushes the current packing alignment value on the internal compiler stack, and sets the current packing alignment value to *n*. If *n* is not specified, the current packing alignment value is pushed.  
  
*pop* (optional)  
Removes the record from the top of the internal compiler stack. If *n* is not specified with *pop*, then the packing value associated with the resulting record on the top of the stack is the new packing alignment value. If *n* is specified, for example, `#pragma pack(pop, 16)`, *n* becomes the new packing alignment value. If you pop with *identifier*, for example, `#pragma pack(pop, r1)`, then all records on the stack are popped until the record that has *identifier* is found. That record is popped and the packing value associated with the resulting record on the top of is the stack the new packing alignment value. If you pop with an *identifier* that is not found in any record on the stack, then the *pop* is ignored.  
  
*identifier* (optional)  
When used with *push*, assigns a name to the record on the internal compiler stack. When used with *pop*, pops records off the internal stack until *identifier* is removed; if *identifier* is not found on the internal stack, nothing is popped.  
  
*n* (optional)  
Specifies the value, in bytes, to be used for packing. If the compiler option [/Zp](../build/reference/zp-struct-member-alignment.md) is not set for the module, the default value for *n* is 8. Valid values are 1, 2, 4, 8, and 16. The alignment of a member will be on a boundary that is either a multiple of *n* or a multiple of the size of the member, whichever is smaller.  
  
`#pragma pack(pop, identifier, n)` is undefined.  
  
For more information about how to modify alignment, see these topics:  
  
- [__alignof](../cpp/alignof-operator.md)  
  
- [align](../cpp/align-cpp.md)  
  
- [__unaligned](../cpp/unaligned.md)  
  
- [Examples of Structure Alignment](../build/examples-of-structure-alignment.md) (x64 specific)  
  
    > [!WARNING]
    > Note that in Visual Studio 2015 and later you can use the standard alignas and alignof operators which, unlike `__alignof` and `declspec( align )` are portable across compilers. The C++ standard does not address packing, so you must still use **pack** (or the corresponding extension on other compilers) to specify alignments smaller than the target architecture’s word size.  
  
## Examples

The following sample shows how to use the **pack** pragma to change the alignment of a structure.  
  
```cpp  
// pragma_directives_pack.cpp  
#include <stddef.h>  
#include <stdio.h>  
  
struct S {  
   int i;   // size 4  
   short j;   // size 2  
   double k;   // size 8  
};  
  
#pragma pack(2)  
struct T {  
   int i;  
   short j;  
   double k;  
};  
  
int main() {  
   printf("%zu ", offsetof(S, i));  
   printf("%zu ", offsetof(S, j));  
   printf("%zu\n", offsetof(S, k));  
  
   printf("%zu ", offsetof(T, i));  
   printf("%zu ", offsetof(T, j));  
   printf("%zu\n", offsetof(T, k));  
}  
```  
  
```Output  
0 4 8  
0 4 6  
```  
  
The following sample shows how to use the *push*, *pop*, and *show* syntax.  
  
```cpp  
// pragma_directives_pack_2.cpp  
// compile with: /W1 /c  
#pragma pack()   // n defaults to 8; equivalent to /Zp8  
#pragma pack(show)   // C4810  
#pragma pack(4)   // n = 4  
#pragma pack(show)   // C4810  
#pragma pack(push, r1, 16)   // n = 16, pushed to stack  
#pragma pack(show)   // C4810  
#pragma pack(pop, r1, 2)   // n = 2 , stack popped  
#pragma pack(show)   // C4810  
```  
  
## See Also  
 
[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)