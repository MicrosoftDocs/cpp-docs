---
title: "-sdl (Enable Additional Security Checks)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /sdl (Enable Additional Security Checks)
ms.assetid: 3dcf86a0-3169-4240-9f29-e04a9f535826
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -sdl (Enable Additional Security Checks)
Adds recommended Security Development Lifecycle (SDL) checks. These checks include extra security-relevant warnings as errors, and additional secure code-generation features.  
  
## Syntax  
  
```  
/sdl[-]  
```  
  
## Remarks  
 **/sdl** enables a superset of the baseline security checks provided by [/GS](../VS_visualcpp/-GS--Buffer-Security-Check-.md) and overrides **/GS-**. By default, **/sdl** is off. **/sdl-** disables the additional security checks.  
  
## Compile-time Checks  
 **/sdl** enables these warnings as errors:  
  
|Warning enabled by /sdl|Equivalent command-line switch|Description|  
|------------------------------|-------------------------------------|-----------------|  
|[C4146](../VS_visualcpp/Compiler-Warning--level-2--C4146.md)|/we4146|A unary minus operator was applied to an unsigned type, resulting in an unsigned result.|  
|[C4308](../VS_visualcpp/Compiler-Warning--level-2--C4308.md)|/we4308|A negative integral constant converted to unsigned type, resulting in a possibly meaningless result.|  
|[C4532](../VS_visualcpp/Compiler-Warning--level-1--C4532.md)|/we4532|Use of `continue`, `break` or `goto` keywords in a `__finally`/`finally` block has undefined behavior during abnormal termination.|  
|[C4533](../VS_visualcpp/Compiler-Warning--level-1--C4533.md)|/we4533|Code initializing a variable will not be executed.|  
|[C4700](../VS_visualcpp/Compiler-Warning--level-1-and-level-4--C4700.md)|/we4700|Use of an uninitialized local variable.|  
|[C4703](../VS_visualcpp/Compiler-Warning--level-4--C4703.md)|/we4703|Use of a potentially uninitialized local pointer variable.|  
|[C4789](../VS_visualcpp/Compiler-Warning--Level-1--C4789.md)|/we4789|Buffer overrun when specific C run-time (CRT) functions are used.|  
|[C4995](../VS_visualcpp/Compiler-Warning--level-3--C4995.md)|/we4995|Use of a function marked with pragma [deprecated](../VS_visualcpp/deprecated--C-C---.md).|  
|[C4996](../VS_visualcpp/Compiler-Warning--level-3--C4996.md)|/we4996|Use of a function marked as [deprecated](../VS_visualcpp/deprecated--C---.md).|  
  
## Runtime checks  
 When **/sdl** is enabled, the compiler generates code to perform these checks at run time:  
  
-   Enables the strict mode of **/GS** run-time buffer overrun detection, equivalent to compiling with `#pragma strict_gs_check(push, on)`.  
  
-   Performs limited pointer sanitization. In expressions that do not involve dereferences and in types that have no user-defined destructor, pointer references are set to a non-valid address after a call to `delete`. This helps to prevent the reuse of stale pointer references.  
  
-   Performs class member initialization. Automatically initializes all class members to zero on object instantiation (before the constructor runs). This helps prevent the use of uninitialized data associated with class members that the constructor does not explicitly initialize.  
  
## Remarks  
 For more information, see [Warnings, /sdl, and improving uninitialized variable detection](http://go.microsoft.com/fwlink/p/?LinkId=331012).  
  
#### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Select the **C/C++** folder.  
  
3.  On the **General** page, select the option from the **SDL checks** drop-down list.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)