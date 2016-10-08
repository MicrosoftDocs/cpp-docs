---
title: "safebuffers"
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
ms.topic: language-reference
ms.assetid: 0b0dce14-4523-44d2-8070-5dd0fdabc618
caps.latest.revision: 13
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
# safebuffers
**Microsoft Specific**  
  
 Tells the compiler not to insert buffer overrun security checks for a function.  
  
## Syntax  
  
```  
__declspec( safebuffers )  
```  
  
## Remarks  
 The **/GS** compiler option causes the compiler to test for buffer overruns by inserting security checks on the stack. The types of data structures that are eligible for security checks are described in [/GS (Buffer Security Check)](../VS_visualcpp/-GS--Buffer-Security-Check-.md). For more information about buffer overrun detection, see [Compiler Security Checks In Depth](http://go.microsoft.com/fwlink/?linkid=7260) on the MSDN Web site.  
  
 An expert manual code review or external analysis might determine that a function is safe from a buffer overrun. In that case, you can suppress security checks for a function by applying the __`declspec(safebuffers)` keyword to the function declaration.  
  
> [!CAUTION]
>  Buffer security checks provide important security protection and have a negligible affect on performance. Therefore, we recommend that you do not suppress them, except in the rare case where the performance of a function is a critical concern and the function is known to be safe.  
  
## Inline Functions  
 A *primary function* can use an [inlining](../Topic/inline,%20__inline,%20__forceinline.md) keyword to insert a copy of a *secondary function*. If the __`declspec(safebuffers)` keyword is applied to a function, buffer overrun detection is suppressed for that function. However, inlining affects the \_\_`declspec(safebuffers)` keyword in the following ways.  
  
 Suppose the **/GS** compiler option is specified for both functions, but the primary function specifies the __`declspec(safebuffers)` keyword. The data structures in the secondary function make it eligible for security checks, and the function does not suppress those checks. In this case:  
  
-   Specify the [__forceinline](../Topic/inline,%20__inline,%20__forceinline.md) keyword on the secondary function to force the compiler to inline that function regardless of compiler optimizations.  
  
-   Because the secondary function is eligible for security checks, security checks are also applied to the primary function even though it specifies the __`declspec(safebuffers)` keyword.  
  
## Example  
 The following code shows how to use the __`declspec(safebuffers)` keyword.  
  
```  
// compile with: /c /GS  
typedef struct {  
    int x[20];  
} BUFFER;  
static int checkBuffers() {  
    BUFFER cb;  
    // Use the buffer...  
    return 0;  
};  
static __declspec(safebuffers)   
    int noCheckBuffers() {  
    BUFFER ncb;  
    // Use the buffer...  
    return 0;  
}  
int wmain() {  
    checkBuffers();  
    noCheckBuffers();  
    return 0;  
}  
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [__declspec](../VS_visualcpp/__declspec.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [inline, __inline, \__forceinline](../Topic/inline,%20__inline,%20__forceinline.md)   
 [strict_gs_check](../VS_visualcpp/strict_gs_check.md)