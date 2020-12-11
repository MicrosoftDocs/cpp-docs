---
description: "Learn more about: MASM for x64 (ml64.exe)"
title: "MASM for x64 (ml64.exe)"
ms.date: "12/17/2019"
helpviewer_keywords: ["ml64", "ml64.exe", "masm for x64"]
ms.assetid: 89059103-f372-4968-80ea-0c7f90bb9c91
---
# MASM for x64 (ml64.exe)

Visual Studio includes both 32-bit and 64-bit hosted versions of Microsoft Assembler (MASM) to target x64 code. Named ml64.exe, this is the assembler that accepts x64 assembler language. The MASM command-line tools are installed when you choose a C++ workload during Visual Studio installation. The MASM tools are not available as a separate download. For instructions on how to download and install a copy of Visual Studio, see [Install Visual Studio](/visualstudio/install/install-visual-studio). If you do not want to install the complete Visual Studio IDE, but only want the command-line tools, download the [Build Tools for Visual Studio](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019).

To use MASM to build code for x64 targets on the command line, you must use a developer command prompt for x64 targets, which sets the required path and other environment variables. For information on how to start a developer command prompt, see [Build C/C++ code on the command line](../../build/building-on-the-command-line.md).

For information on ml64.exe command line options, see [ML and ML64 Command-Line Reference](ml-and-ml64-command-line-reference.md).

Inline assembler or use of the ASM keyword is not supported for x64 or ARM targets. To port your x86 code that uses inline assembler to x64 or ARM, you can convert your code to C++, use compiler intrinsics, or create assembler-language source files. The Microsoft C++ compiler supports intrinsics to allow you to use special-function instructions, for example, privileged, bit scan/test, interlocked, and so on, in as close to a cross-platform manner as possible. For information on available intrinsics, see [Compiler Intrinsics](../../intrinsics/compiler-intrinsics.md).

## Add an assembler-language file to a Visual Studio C++ project

The Visual Studio project system supports assembler-language files built by using MASM in your C++ projects. You can create x64 assembler-language source files and build them into object files by using MASM, which supports x64 fully. You can then link these object files to your C++ code built for x64 targets. This is one way to overcome the lack of an x64 inline assembler.

### To add an assembler-language file to an existing Visual Studio C++ project

1. Select the project in **Solution Explorer**. On the menu bar, choose **Project**, **Build Customizations**.

1. In the **Visual C++ Build Customization Files** dialog box, check the checkbox next to **masm(.targets,.props)**. Choose **OK** to save your selection and close the dialog box.

1. On the menu bar, choose **Project**, **Add New Item**.

1. In the **Add New Item** dialog box, select **C++ file (.cpp)** in the center pane. In the **Name** edit control, enter a new file name that has a **.asm** extension instead of .cpp. Choose **Add** to add the file to your project and close the dialog box.

Create your assembler-language code in the .asm file you added. When you build your solution, the MASM assembler is invoked to assemble the .asm file into an object file that is then linked into your project. To make symbol access easier, declare your assembler functions as `extern "C"` in your C++ source code, rather than using the C++ name decoration conventions in your assembler-language source files.

## ml64-Specific Directives

You can use the following ml64-specific directives in your assembler-language source code that targets x64:

- [.ALLOCSTACK](dot-allocstack.md)

- [.ENDPROLOG](dot-endprolog.md)

- [.PUSHFRAME](dot-pushframe.md)

- [.PUSHREG](dot-pushreg.md)

- [.SAVEREG](dot-savereg.md)

- [.SAVEXMM128](dot-savexmm128.md)

- [.SETFRAME](dot-setframe.md)

In addition, the [PROC](proc.md) directive has been updated for use with ml64.exe.

## 32-Bit Address Mode (Address Size Override)

MASM emits the 0x67 address size override if a memory operand includes 32-bit registers. For example, the following examples cause the address size override to be emitted:

```asm
mov rax, QWORD PTR [ecx]
mov eax, DWORD PTR [ecx*2+r10d]
mov eax, DWORD PTR [ecx*2+r10d+0100h]
prefetch [eax]
movnti rax, QWORD PTR [r8d]
```

MASM assumes that if a 32-bit displacement appears alone as a memory operand, 64-bit addressing is intended. There is currently no support for 32-bit addressing with such operands.

Finally, mixing register sizes within a memory operand, as demonstrated in the following code, generates an error.

```asm
mov eax, DWORD PTR [rcx*2+r10d]
mov eax, DWORD PTR [ecx*2+r10+0100h]
```

## See also

[Microsoft Macro Assembler Reference](microsoft-macro-assembler-reference.md)
