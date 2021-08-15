---
description: "Learn more about: `__asm`"
title: "__asm"
ms.date: "10/09/2018"
f1_keywords: ["__asm", "_asm", "__asm_cpp"]
helpviewer_keywords: ["__asm keyword [C++], vs. asm blocks", "__asm keyword [C++]"]
ms.assetid: 77ff3bc9-a492-4b5e-85e1-fa4e414e79cd
---
# `__asm`

**Microsoft Specific**

The **`__asm`** keyword invokes the inline assembler and can appear wherever a C or C++ statement is legal. It cannot appear by itself. It must be followed by an assembly instruction, a group of instructions enclosed in braces, or, at the very least, an empty pair of braces. The term "**`__asm`** block" here refers to any instruction or group of instructions, whether or not in braces.

> [!NOTE]
> Visual C++ support for the Standard C++ **`asm`** keyword is limited to the fact that the compiler will not generate an error on the keyword. However, an **`asm`** block will not generate any meaningful code. Use **`__asm`** instead of **`asm`**.

## Grammar

*asm-block*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__asm`** *assembly-instruction* **`;`**<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__asm {`** *assembly-instruction-list* **`}`** **`;`**<sub>opt</sub>

*assembly-instruction-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assembly-instruction* **`;`**<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assembly-instruction* **`;`** *assembly-instruction-list* **`;`**<sub>opt</sub>

## Remarks

If used without braces, the **`__asm`** keyword means that the rest of the line is an assembly-language statement. If used with braces, it means that each line between the braces is an assembly-language statement. For compatibility with previous versions, **`_asm`** is a synonym for **`__asm`**.

Since the **`__asm`** keyword is a statement separator, you can put assembly instructions on the same line.

Before Visual Studio 2005, the instruction

```cpp
__asm int 3
```

did not cause native code to be generated when compiled with **/clr**; the compiler translated the instruction to a CLR break instruction.

`__asm int 3` now results in native code generation for the function. If you want a function to cause a break point in your code and if you want that function compiled to MSIL, use [__debugbreak](../../intrinsics/debugbreak.md).

For compatibility with previous versions, **`_asm`** is a synonym for **`__asm`** unless compiler option [/Za \(Disable language extensions)](../../build/reference/za-ze-disable-language-extensions.md) is specified.

## Example

The following code fragment is a simple **`__asm`** block enclosed in braces:

```cpp
__asm {
   mov al, 2
   mov dx, 0xD007
   out dx, al
}
```

Alternatively, you can put **`__asm`** in front of each assembly instruction:

```cpp
__asm mov al, 2
__asm mov dx, 0xD007
__asm out dx, al
```

Because the **`__asm`** keyword is a statement separator, you can also put assembly instructions on the same line:

```cpp
__asm mov al, 2   __asm mov dx, 0xD007   __asm out dx, al
```

All three examples generate the same code, but the first style (enclosing the **`__asm`** block in braces) has some advantages. The braces clearly separate assembly code from C or C++ code and avoid needless repetition of the **`__asm`** keyword. Braces can also prevent ambiguities. If you want to put a C or C++ statement on the same line as an **`__asm`** block, you must enclose the block in braces. Without the braces, the compiler cannot tell where assembly code stops and C or C++ statements begin. Finally, because the text in braces has the same format as ordinary MASM text, you can easily cut and paste text from existing MASM source files.

Unlike braces in C and C++, the braces enclosing an **`__asm`** block don't affect variable scope. You can also nest **`__asm`** blocks; nesting does not affect variable scope.

**END Microsoft Specific**

## See also

[Keywords](../../cpp/keywords-cpp.md)<br/>
[Inline Assembler](../../assembler/inline/inline-assembler.md)<br/>
