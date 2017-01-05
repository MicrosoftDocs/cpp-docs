---
title: "-fp (Specify Floating-Point Behavior) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.floatingPointModel"
  - "VC.Project.VCCLWCECompilerTool.FloatingPointExceptions"
  - "/fp"
  - "VC.Project.VCCLWCECompilerTool.floatingPointModel"
  - "VC.Project.VCCLCompilerTool.FloatingPointExceptions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-fp compiler option [C++]"
  - "/fp compiler option [C++]"
ms.assetid: 10469d6b-e68b-4268-8075-d073f4f5d57e
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# /fp (Specify Floating-Point Behavior)
Specifies floating-point behavior in a source code file.  
  
## Syntax  
  
```  
/fp:[precise | except[-] | fast | strict ]  
```  
  
## Flags  
 **precise**  
 The default.  
  
 Improves the consistency of floating-point tests for equality and inequality by disabling optimizations that could change the precision of floating-point calculations. (Maintaining specific precision is required for strict ANSI conformance.) By default, in code for x86 architectures the compiler uses the coprocessor's 80-bit registers to hold the intermediate results of floating-point calculations. This increases program speed and decreases program size. However, because the calculation involves floating-point data types that are represented in memory by less than 80 bits, carrying the extra bits of precision—80 bits minus the number of bits in a smaller floating-point type—through a lengthy calculation can produce inconsistent results.  
  
 With **/fp:precise** on x86 processors, the compiler performs rounding on variables of type `float` to the correct precision for assignments and casts and when parameters are passed to a function. This rounding guarantees that the data does not retain any significance greater than the capacity of its type. A program compiled with **/fp:precise** can be slower and larger than one compiled without **/fp:precise**. **/fp:precise** disables intrinsics; the standard run-time library routines are used instead. For more information, see [/Oi (Generate Intrinsic Functions)](../../build/reference/oi-generate-intrinsic-functions.md).  
  
 The following floating-point behavior is enabled with **/fp:precise**:  
  
-   Contractions—that is, using a composite operation that has just one rounding at the end to replace multiple operations.  
  
-   Expression optimizations that are invalid for special values (NaN, +infinity, -infinity, +0, -0) are not allowed. The optimizations x-x => 0, x*0 => 0, x-0 => x, x+0 => x, and 0-x => -x are invalid for various reasons. (See IEEE 754 and the C99 standard.)  
  
-   The compiler correctly handles comparisons that involve NaN. For example, x != x evaluates to **true** if `x` is NaN and ordered comparisons involving NaN raise an exception.  
  
-   Expression evaluation follows the C99 FLT_EVAL_METHOD=2, with this exception: When you program for x86 processors, because the FPU is set to 53-bit precision, this is considered long-double precision.  
  
-   Multiplication by exactly 1.0 transformed into a use of the other factor. x*y\*1.0 is transformed into x\*y. Similarly, x\*1.0\*y is transformed into x\*y.  
  
-   Division by exactly 1.0 is transformed into a use of the dividend. x*y/1.0 is transformed into x\*y. Similarly, x/1.0\*y is transformed into x\*y.  
  
 Using **/fp:precise** when [fenv_access](../../preprocessor/fenv-access.md) is ON disables optimizations such as compile-time evaluations of floating-point expressions. For example, if you use [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) to change the rounding mode, and the compiler performs a floating-point calculation, the rounding mode you specified is not in effect unless `fenv_access` is ON.  
  
 **/fp:precise** replaces the **/Op** compiler option.  
  
 **fast**  
 Creates the fastest code in most cases by relaxing the rules for optimizing floating-point operations. This enables the compiler to optimize floating-point code for speed at the expense of accuracy and correctness. When **/fp:fast** is specified, the compiler may not round correctly at assignment statements, typecasts, or function calls, and may not perform rounding of intermediate expressions. The compiler may reorder operations or perform algebraic transforms—for example, by following associative and distributive rules—without regard to the effect on finite precision results. The compiler may change operations and operands to single-precision instead of following the C++ type promotion rules. Floating-point-specific contraction optimizations are always enabled ([fp_contract](../../preprocessor/fp-contract.md) is ON). Floating-point exceptions and FPU environment access are disabled (**/fp:except-** is implied and [fenv_access](../../preprocessor/fenv-access.md) is OFF).  
  
 **/fp:fast** cannot be used with **/fp:strict** or **/fp:precise**. The last option specified on the command line is used. Specifying both **/fp:fast** and **/fp:except** generates a compiler error.  
  
 Specifying [/Za, /Ze (Disable Language Extensions)](../../build/reference/za-ze-disable-language-extensions.md) (ANSI compatibility) and **/fp:fast** may cause unexpected behavior. For example, single-precision floating-point operations may not be rounded to single precision.  
  
 **except[-]**  
 Reliable floating-point exception model. Exceptions are raised immediately after they are triggered. By default, this option is off. Appending a minus sign to the option explicitly disables it.  
  
 **strict**  
 The strictest floating-point model. **/fp:strict** causes [fp_contract](../../preprocessor/fp-contract.md) to be OFF and [fenv_access](../../preprocessor/fenv-access.md) to be ON. **/fp:except** is implied and can be disabled by explicitly specifying **/fp:except-**. When used with **/fp:except-**, **/fp:strict** enforces strict floating-point semantics but without respect for exceptional events.  
  
## Remarks  
 Multiple **/fp** options can be specified in the same compilation.  
  
 To control floating-point behavior by function, see the [float_control](../../preprocessor/float-control.md) pragma. This overrides the **/fp** compiler setting. We recommend you save and restore local floating-point behavior as good engineering practice:  
  
```css  
#pragma float_control(precise, on, push)  
// Code that uses /fp:precise mode  
#pragma float_control(pop)  
```  
  
 Most of the floating-point optimizations related to **/fp:strict**, **/fp:except** (and its corresponding pragmas), and the `fp_contract` pragma are machine-dependent. **/fp:strict** and **/fp:except** are not compatible with **/clr**.  
  
 **/fp:precise** should address most of an application's floating-point requirements. You can use **/fp:except** and **/fp:strict**, but there may be some decrease in performance. If performance is most important, consider whether to use **/fp:fast**.  
  
 **/fp:strict**, **/fp:fast**, and **/fp:precise** are precision (correctness) modes. Only one can be in effect at a time. If both **/fp:strict** and **/fp:precise** are specified, the compiler uses the one that it processes last. Both **/fp:strict** and **/fp:fast** cannot be specified.  
  
 For more information, see [Microsoft Visual C++ Floating-Point Optimization](http://msdn.microsoft.com/library/aa289157.aspx).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **C/C++** node.  
  
4.  Select the **Code Generation** property page.  
  
5.  Modify the **Floating Point Model** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.floatingPointModel%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Microsoft Visual C++ Floating Point Optimization](http://msdn.microsoft.com/library/aa289157.aspx)