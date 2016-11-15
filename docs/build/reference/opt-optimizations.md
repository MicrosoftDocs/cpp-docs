---
title: "-OPT (Optimizations) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.OptimizeReferences"
  - "/opt"
  - "VC.Project.VCLinkerTool.OptimizeForWindows98"
  - "VC.Project.VCLinkerTool.EnableCOMDATFolding"
  - "VC.Project.VCLinkerTool.OptimizeFolding"
  - "VC.Project.VCLinkerTool.FoldingIterations"
  - "VC.Project.VCLinkerTool.OptimizeFoldingIterations"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LINK tool [C++], controlling optimizations"
  - "-OPT linker option"
  - "linker [C++], optimizations"
  - "OPT linker option"
  - "optimization, linker"
  - "/OPT linker option"
ms.assetid: 8f229863-5f53-48a8-9478-243a647093ac
caps.latest.revision: 23
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
# /OPT (Optimizations)
Controls the optimizations that LINK performs during a build.  
  
## Syntax  
  
```  
/OPT:{REF | NOREF}  
/OPT:{ICF[=iterations] | NOICF}  
/OPT:{LBR | NOLBR}  
```  
  
## Arguments  
 **REF** &#124; **NOREF**  
 **/OPT:REF** eliminates functions and data that are never referenced; **/OPT:NOREF** keeps functions and data that are never referenced.  
  
 When /OFT:REF is enabled, LINK removes unreferenced packaged functions and data. An object contains packaged functions and data (COMDATs) if it was compiled by using the [/Gy](../../build/reference/gy-enable-function-level-linking.md) option. This optimization is known as transitive COMDAT elimination. By default, **/OPT:REF** is enabled in non-debug builds. To override this default and keep unreferenced COMDATs in the program, specify **/OPT:NOREF**. You can use the [/INCLUDE](../../build/reference/include-force-symbol-references.md) option to override the removal of a specific symbol.  
  
 When **/OPT:REF** is enabled either explicitly or by default, a limited form of **/OPT:ICF** is enabled that only folds identical functions. If you want **/OPT:REF** but not **/OPT:ICF**, you must specify either **/OPT:REF,NOICF** or **/OPT:NOICF**.  
  
 If [/DEBUG](../../build/reference/debug-generate-debug-info.md) is specified, the default for **/OPT** is **NOREF**, and all functions are preserved in the image. To override this default and optimize a debugging build, specify **/OPT:REF**. Because **/OPT:REF** implies **/OPT:ICF**, we recommend that you also specify **/OPT:NOICF** to preserve identical functions in debugging builds. This makes it easier to read stack traces and set breakpoints in functions that would otherwise be folded together. The **/OPT:REF** option disables incremental linking.  
  
 You have to explicitly mark `const` data as a COMDAT; use [__declspec(selectany)](../../cpp/selectany.md).  
  
 Specifying **/OPT:ICF** does not enable the **/OPT:REF** option.  
  
 **ICF[=**  `iterations` **] &#124; NOICF**  
 Use **/OPT:ICF[=**`iterations`**]** to perform identical COMDAT folding. Redundant COMDATs can be removed from the linker output. The optional `iterations` parameter specifies the number of times to traverse the symbols for duplicates. The default number of iterations is two. Additional iterations may locate more duplicates that are uncovered through folding in the previous iteration.  
  
 The linker behaves differently when **/OPT:REF** is specified—and **ICF** is in effect by default—than it does when **/OPT:REF,ICF** is specified explicitly. The form of **ICF** that's enabled with **/OPT:REF** alone does not fold read-only data—this includes .rdata, .pdata, and .xdata. Therefore, fewer functions are folded when images are produced for [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] because functions in these modules are more dependent on read-only data—for example, .pdata and .xdata. To get full **ICF** folding behavior, explicitly specify **/OPT:ICF**.  
  
 To place functions in COMDATs, you use the **/Gy** compiler option; to place `const` data, you declare it `__declspec(selectany)`. For information about how to specify data for folding, see [selectany](../../cpp/selectany.md).  
  
 By default, **ICF** is on if **REF** is on. To override this default if **REF** is specified, use **NOICF**. When **/OPT:REF** is not specified in a debug build, you must explicitly specify **/OPT:ICF** to enable COMDAT folding. However, because **/OPT:ICF** can merge identical data or functions, it can change the function names that appear in stack traces. It can also make it impossible to set breakpoints in certain functions or to examine some data in the debugger, and take you into unexpected functions when you single-step through code. Therefore, we do not recommend that you use **/OPT:ICF** in debug builds unless the advantages of smaller code outweigh these disadvantages.  
  
> [!NOTE]
>  Because **/OPT:ICF** can cause the same address to be assigned to different functions or read-only data members (`const` variables compiled by using **/Gy**), it can break a program that depends on unique addresses for functions or read-only data members. For more information, see [/Gy (Enable Function-Level Linking)](../../build/reference/gy-enable-function-level-linking.md).  
  
 **LBR** &#124; **NOLBR**  
 The **/OPT:LBR** and **/OPT:NOLBR** options apply only to ARM binaries. Because certain ARM processor branch instructions have a limited range, if the linker detects a jump to an out-of-range address, it replaces the branch instruction’s destination address with the address of a code "island" that contains a branch instruction that targets the actual destination. You can use **/OPT:LBR** to optimize the detection of long branch instructions and the placement of intermediate code islands to minimize overall code size. **/OPT:NOLBR** instructs the linker to generate code islands for long branch instructions as they are encountered, without optimization.  
  
 By default, the **/OPT:LBR** option is set when incremental linking is not enabled. If you want a non-incremental link but not long branch optimizations, specify **/OPT:NOLBR**. The **/OPT:LBR** option disables incremental linking.  
  
## Remarks  
 Optimizations generally decrease the image size and increase the program speed at a cost of increased link time.  
  
 You can use the [/VERBOSE](../../build/reference/verbose-print-progress-messages.md) option to see the functions that are removed by **/OPT:REF** and the functions that are folded by **/OPT:ICF**.  
  
### To set the OPT:ICF or OPT:REF linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  In the left pane, expand **Configuration Properties**, **Linker**, **Optimization**.  
  
3.  Modify one of these properties:  
  
    -   **Enable COMDAT Folding**  
  
    -   **References**  
  
### To set the OPT:LBR linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Enter the option in **Additional Options**:  
  
     `/opt:lbr`  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableCOMDATFolding%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OptimizeReferences%2A> properties.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)