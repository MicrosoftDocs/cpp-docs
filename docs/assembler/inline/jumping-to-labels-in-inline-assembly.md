---
description: "Learn more about: Jumping to Labels in Inline Assembly"
title: "Jumping to Labels in Inline Assembly"
ms.date: "08/30/2018"
helpviewer_keywords: ["inline assembly, jumping to labels", "labels, in inline assembly", "__asm keyword [C++], labels", "case sensitivity, labels in inline assembly", "labels, in __asm blocks", "jumping to labels in inline assembly"]
ms.assetid: 36c18b97-8981-4631-9dfd-af6c14a04297
---
# Jumping to Labels in Inline Assembly

**Microsoft Specific**

Like an ordinary C or C++ label, a label in an **`__asm`** block has scope throughout the function in which it is defined (not only in the block). Both assembly instructions and **`goto`** statements can jump to labels inside or outside the **`__asm`** block.

Labels defined in **`__asm`** blocks are not case sensitive; both **`goto`** statements and assembly instructions can refer to those labels without regard to case. C and C++ labels are case sensitive only when used by **`goto`** statements. Assembly instructions can jump to a C or C++ label without regard to case.

The following code shows all the permutations:

```cpp
void func( void )
{
   goto C_Dest;  /* Legal: correct case   */
   goto c_dest;  /* Error: incorrect case */

   goto A_Dest;  /* Legal: correct case   */
   goto a_dest;  /* Legal: incorrect case */

   __asm
   {
      jmp C_Dest ; Legal: correct case
      jmp c_dest ; Legal: incorrect case

      jmp A_Dest ; Legal: correct case
      jmp a_dest ; Legal: incorrect case

      a_dest:    ; __asm label
   }

   C_Dest:       /* C label */
   return;
}
int main()
{
}
```

Don't use C library function names as labels in **`__asm`** blocks. For instance, you might be tempted to use `exit` as a label, as follows:

```cpp
; BAD TECHNIQUE: using library function name as label
   jne exit
   .
   .
   .
exit:
   ; More __asm code follows
```

Because **exit** is the name of a C library function, this code might cause a jump to the **exit** function instead of to the desired location.

As in MASM programs, the dollar symbol (`$`) serves as the current location counter. It is a label for the instruction currently being assembled. In **`__asm`** blocks, its main use is to make long conditional jumps:

```cpp
   jne $+5 ; next instruction is 5 bytes long
   jmp farlabel ; $+5
   .
   .
   .
farlabel:
```

**END Microsoft Specific**

## See also

[Inline Assembler](../../assembler/inline/inline-assembler.md)<br/>
