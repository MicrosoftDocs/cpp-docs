---
title: "-RTC (Run-Time Error Checks) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/rtc"
  - "VC.Project.VCCLCompilerTool.SmallerTypeCheck"
  - "VC.Project.VCCLCompilerTool.UninitializedVariableCheck"
  - "VC.Project.VCCLCompilerTool.StackFrameCheck"
  - "VC.Project.VCCLCompilerTool.BasicRuntimeChecks"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/RTCs compiler option [C++]"
  - "-RTC1 compiler option [C++]"
  - "run-time errors, error checks"
  - "-RTCu compiler option [C++]"
  - "/RTC1 compiler option [C++]"
  - "/RTCc compiler option [C++]"
  - "/RTCu compiler option [C++]"
  - "__MSVC_RUNTIME_CHECKS macro"
  - "-RTCs compiler option [C++]"
  - "RTCs compiler option"
  - "RTC1 compiler option"
  - "run-time errors, run-time checks"
  - "run-time checks, /RTC option"
  - "RTCu compiler option"
  - "RTCc compiler option"
  - "-RTCc compiler option [C++]"
ms.assetid: 9702c558-412c-4004-acd5-80761f589368
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /RTC (Run-Time Error Checks)
Used to enable and disable the run-time error checks feature, in conjunction with the [runtime_checks](../../preprocessor/runtime-checks.md) pragma.  
  
## Syntax  
  
```  
/RTC1  
/RTCc  
/RTCs  
/RTCu  
```  
  
## Arguments  
 `1`  
 Equivalent of **/RTC**`su`.  
  
 `c`  
 Reports when a value is assigned to a smaller data type and results in a data loss. For example, if a value of type `short 0x101` is assigned to a variable of type `char`.  
  
 This option reports situations in which you intend to truncate, for example, if you want the first eight bits of an `int` returned as a `char`. Because **/RTC**`c` causes a run-time error if any information is lost as a result of the assignment, you can mask off the information you need to avoid a run-time error as a result of **/RTC**`c`. For example:  
  
```  
#include <crtdbg.h>  
  
char get8bits(int value, int position) {  
   _ASSERT(position < 32);  
   return (char)(value >> position);  
   // Try the following line instead:  
   // return (char)((value >> position) & 0xff);  
}  
  
int main() {  
   get8bits(12341235,3);  
}  
```  
  
 `s`  
 Enables stack frame run-time error checking, as follows:  
  
-   Initialization of local variables to a nonzero value. This helps identify bugs that do not appear when running in debug mode. There is a greater chance that stack variables will still be zero in a debug build compared to a release build because of compiler optimizations of stack variables in a release build. Once a program has used an area of its stack, it is never reset to 0 by the compiler. Therefore, subsequent, uninitialized stack variables that happen to use the same stack area can return values left over from the prior use of this stack memory.  
  
-   Detection of overruns and underruns of local variables such as arrays. **/RTC**`s` will not detect overruns when accessing memory that results from compiler padding within a structure. Padding could occur by using [align](../../cpp/align-cpp.md), [/Zp (Struct Member Alignment)](../../build/reference/zp-struct-member-alignment.md), or [pack](../../preprocessor/pack.md), or if you order structure elements in such a way as to require the compiler to add padding.  
  
-   Stack pointer verification, which detects stack pointer corruption. Stack pointer corruption can be caused by a calling convention mismatch. For example, using a function pointer, you call a function in a DLL that is exported as [__stdcall](../../cpp/stdcall.md) but you declare the pointer to the function as [__cdecl](../../cpp/cdecl.md).  
  
 `u`  
 Reports when a variable is used without having been initialized. For example, an instruction that generates `C4701` may also generate a run-time error under **/RTC**`u`. Any instruction that generates [Compiler Warning (level 1 and level 4) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md) will generate a run-time error under **/RTC**`u`.  
  
 However, consider the following code fragment:  
  
```  
int a, *b, c;  
if ( 1 )  
b = &a;  
c = a;  // No run-time error with /RTCu  
```  
  
 If a variable could have been initialized, it will not be reported at run time by **/RTC**`u`. For example, after a variable is aliased through a pointer, the compiler will not track the variable and report uninitialized uses. In effect, you can initialize a variable by taking its address. The & operator works like an assignment operator in this situation.  
  
## Remarks  
 Run-time error checks are a way for you to find problems in your running code; for more information, see [How to: Use Native Run-Time Checks](http://msdn.microsoft.com/Library/dc7b2f1e-5ff6-42e0-89b3-dc9dead83ee1).  
  
 If you compile your program at the command line using any of the **/RTC** compiler options, any pragma [optimize](../../preprocessor/optimize.md) instructions in your code will silently fail. This is because run-time error checks are not valid in a release (optimized) build.  
  
 You should use **/RTC** for development builds; **/RTC** should not be used for a retail build. **/RTC** cannot be used with compiler optimizations ([/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md)). A program image built with **/RTC** will be slightly larger and slightly slower than an image built with **/Od** (up to 5 percent slower than an **/Od** build).  
  
 The __MSVC_RUNTIME_CHECKS preprocessor directive will be defined when you use any **/RTC** option or [/GZ](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Code Generation** property page.  
  
4.  Modify one or both of the following properties: **Basic Runtime Checks** or **Smaller Type Check**.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BasicRuntimeChecks%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.SmallerTypeCheck%2A> properties.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [How to: Use Native Run-Time Checks](http://msdn.microsoft.com/Library/dc7b2f1e-5ff6-42e0-89b3-dc9dead83ee1)