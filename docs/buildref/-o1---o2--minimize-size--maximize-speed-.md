---
title: "-O1, -O2 (Minimize Size, Maximize Speed)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "/o2"
  - "/o1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "maximize speed compiler option [C++]"
  - "minimize size compiler option [C++]"
  - "-O2 compiler option [C++]"
  - "fast code"
  - "small code"
  - "O2 compiler option [C++]"
  - "/O2 compiler option [C++]"
  - "-O1 compiler option [C++]"
  - "O1 compiler option [C++]"
  - "/O1 compiler option [C++]"
ms.assetid: 2d1423f5-53d9-44da-8908-b33a351656c2
caps.latest.revision: 16
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
# /O1, /O2 (Minimize Size, Maximize Speed)
Selects a predefined set of options that affect the size and speed of files.  
  
## Syntax  
  
```  
/O1  
/O2  
```  
  
## Remarks  
 The following table describes **/O1** and **/O2**.  
  
|Option|Equivalent to|Comment|  
|------------|-------------------|-------------|  
|**/O1** (Minimize Size)|**/Og /Os /Oy /Ob2 /Gs /GF /Gy**|Creates the smallest code in the majority of cases.|  
|**/O2** (Maximize Speed)|**/Og /Oi /Ot /Oy /Ob2 /Gs /GF /Gy**|Creates the fastest code in the majority of cases. (default setting for release builds)|  
  
 **/O1** and **/O2** also enable the Named Return Value optimization, which eliminates the copy constructor and destructor of a stack based return value. Consider the following sample.  The `Test` function will not create the copy constructor or destructor. Add output statements to the constructor, destructor and copy constructor to see the effect of Named Return Value Optimization when you run the program. For more information, see [Named Return Value Optimization in Visual C++ 2005](http://go.microsoft.com/fwlink/?linkid=131571).  
  
```  
// O1_O2_NRVO.cpp  
// compile with: /O1  
struct A {  
   A() {}  
   ~A() {}  
   A(const A& aa) {}  
};  
  
A Test() {  
   A a;  
   return a;  
}  
int main() {  
   A aa;  
   aa = Test();  
}  
```  
  
 **x86 Specific**  
  
 These options imply the use of the Frame-Pointer Omission ([/Oy](../buildref/-oy--frame-pointer-omission-.md)) option.  
  
 **END x86 Specific**  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Optimization** property page.  
  
4.  Modify the **Optimization** property.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization*>.  
  
## See Also  
 [/O Options (Optimize Code)](../buildref/-o-options--optimize-code-.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)   
 [/EH (Exception Handling Model)](../buildref/-eh--exception-handling-model-.md)