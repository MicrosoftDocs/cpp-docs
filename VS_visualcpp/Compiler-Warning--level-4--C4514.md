---
title: "Compiler Warning (level 4) C4514"
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
ms.topic: error-reference
ms.assetid: cdae966a-9cd4-4e31-af30-2a014e68f614
caps.latest.revision: 7
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
# Compiler Warning (level 4) C4514
'function' : unreferenced inline function has been removed  
  
 The optimizer removed an inline function that is not called.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md) for more information.  
  
 The following sample generates C4514:  
  
```  
// C4514.cpp  
// compile with: /W4  
#pragma warning(default : 4514)  
class A  
{  
   public:  
      void func()   // C4514, remove the function to resolve  
      {  
      }  
};  
  
int main()  
{  
}  
```