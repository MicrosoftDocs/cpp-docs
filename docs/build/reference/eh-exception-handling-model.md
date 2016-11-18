---
title: "-EH (Exception Handling Model) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.ExceptionHandling"
  - "/eh"
  - "VC.Project.VCCLCompilerTool.ExceptionHandling"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exception handling, compiler model"
  - "cl.exe compiler, exception handling"
  - "EH compiler option [C++]"
  - "-EH compiler option [C++]"
  - "/EH compiler option [C++]"
ms.assetid: 754b916f-d206-4472-b55a-b6f1b0f2cb4d
caps.latest.revision: 29
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
# /EH (Exception Handling Model)
Specifies the kind of exception handling used by the compiler, when to optimize away exception checks, and whether to destroy C++ objects that go out of scope because of an exception. If **/EH** is not specified, the compiler catches both asynchronous structured exceptions and C++ exceptions, but does not destroy C++ objects that go out of scope because of an asynchronous exception.  
  
## Syntax  
  
```  
/EH{s|a}[c][r][-]  
```  
  
## Arguments  
 **a**  
 The exception-handling model that catches both asynchronous (structured) and synchronous (C++) exceptions.  
  
 **s**  
 The exception-handling model that catches C++ exceptions only and tells the compiler to assume that functions declared as `extern "C"` may throw an exception.  
  
 **c**  
 If used with **s** (**/EHsc**), catches C++ exceptions only and tells the compiler to assume that functions declared as `extern "C"` never throw a C++ exception.  
  
 **/EHca** is equivalent to **/EHa**.  
  
 **r**  
 Tells the compiler to always generate runtime termination checks for all `noexcept` functions. By default, runtime checks for `noexcept` may be optimized away if the compiler determines the function calls only non-throwing functions.  
  
## Remarks  
 The **/EHa** compiler option is used to support asynchronous structured exception handling (SEH) with the native C++ `catch(...)` clause. To implement SEH without specifying **/EHa**, you may use the `__try`, `__except`, and `__finally` syntax. Although Windows and Visual C++ support SEH, we strongly recommend that you use ISO-standard C++ exception handling (**/EHs** or **/EHsc**) because it makes code more portable and flexible. Nevertheless, in existing code or for particular kinds of programs—for example, in code compiled to support the common language runtime ([/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md))—you still might have to use SEH. For more information, see [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md).  
  
 Specifying **/EHa** and trying to handle all exceptions by using `catch(...)` can be dangerous. In most cases, asynchronous exceptions are unrecoverable and should be considered fatal. Catching them and proceeding can cause process corruption and lead to bugs that are hard to find and fix.  
  
 If you use **/EHs** or **/EHsc**, then your `catch(...)` clause does not catch asynchronous structured exceptions. Access violations and managed <xref:System.Exception?displayProperty=fullName> exceptions are not caught, and objects in scope when an asynchronous exception is generated are not destroyed even if the asynchronous exception is handled.  
  
 If you use **/EHa**, the image may be larger and might perform less well because the compiler does not optimize a `try` block as aggressively. It also leaves in exception filters that automatically call the destructors of all local objects even if the compiler does not see any code that can throw a C++ exception. This enables safe stack unwinding for asynchronous exceptions as well as for C++ exceptions. When you use **/EHs**, the compiler assumes that exceptions can only occur at a `throw` statement or at a function call. This allows the compiler to eliminate code for tracking the lifetime of many unwindable objects, and this can significantly reduce code size.  
  
 We recommend that you not link objects compiled by using **/EHa** together with objects compiled by using **/EHs** in the same executable module. If you have to handle an asynchronous exception by using **/EHa** anywhere in your module, use **/EHa** to compile all the code in the module. You can use structured exception handling syntax in the same module as code that's compiled by using **/EHs**, but you can’t mix the SEH syntax with `try`, `throw`, and `catch` in the same function.  
  
 Use **/EHa** if you want to catch an exception that's raised by something other than a `throw`. This example generates and catches a structured exception:  
  
```  
  
      // compiler_options_EHA.cpp  
// compile with: /EHa  
#include <iostream>  
#include <excpt.h>  
using namespace std;  
  
void fail() {   // generates SE and attempts to catch it using catch(...)  
   try {  
      int i = 0, j = 1;  
      j /= i;   // This will throw a SE (divide by zero).  
      printf("%d", j);   
   }  
   catch(...) {   // catch block will only be executed under /EHa  
      cout<<"Caught an exception in catch(...)."<<endl;  
   }  
}  
  
int main() {  
   __try {  
      fail();   
   }  
  
   // __except will only catch an exception here  
   __except(EXCEPTION_EXECUTE_HANDLER) {     
   // if the exception was not caught by the catch(...) inside fail()  
      cout << "An exception was caught in __except." << endl;  
   }  
}  
```  
  
 The **/EHc** option requires that **/EHs** or **/EHa** is specified. The **/clr** option implies **/EHa** (that is, **/clr /EHa** is redundant). The compiler generates an error if **/EHs[c]** is used after **/clr**. Optimizations do not affect this behavior. When an exception is caught, the compiler invokes the class destructor or destructors for the object or objects that are in the same scope as the exception. When an exception is not caught, those destructors are not run.  
  
 For information about exception handling restrictions under **/clr**, see [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md).  
  
 The option can be cleared by using the symbol **-**. For example, **/EHsc-** is interpreted as **/EHs /EHc-** and is equivalent to **/EHs**.  
  
 The **/EHr** compiler option forces runtime termination checks in all functions that have a `noexcept` attribute. By default, runtime checks may be optimized away if the compiler back end determines that a function only calls *non-throwing* functions. Non-throwing functions are any functions that have an attribute that specifies no exceptions may be thrown. This includes functions marked `noexcept`, `throw()`, `__declspec(nothrow)`, and, when **/EHc** is specified, `extern "C"` functions. Non-throwing functions also include any that the compiler has determined are non-throwing by inspection. You can explicitly set the default by using **/EHr-**.  
  
 However, the non-throwing attribute is not a guarantee that no exceptions can be thrown by a function. Unlike the behavior of a `noexcept` function, the Visual C++ compiler considers an exception thrown by a function declared using `throw()`, `__declspec(nothrow)`, or `extern "C"` as undefined behavior. Functions that use these three declaration attributes do not enforce runtime termination checks for exceptions. You can use the **/EHr** option to help you identify this undefined behavior, by forcing the compiler to generate runtime checks for unhandled exceptions that escape a `noexcept` function.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  In the left pane, expand **Configuration Properties**, **C/C++**, **Code Generation**.  
  
3.  Modify the **Enable C++ Exceptions** property.  
  
     Or, set **Enable C++ Exceptions** to **No**, and then on the **Command Line** property page, in the **Additional Options** box, add the compiler option.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ExceptionHandling%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Errors and Exception Handling](../../cpp/errors-and-exception-handling-modern-cpp.md)   
 [Exception Specifications (throw)](../../cpp/exception-specifications-throw-cpp.md)   
 [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md)