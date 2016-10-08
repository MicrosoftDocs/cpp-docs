---
title: "Compiler Warning (level 1) C4165"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f5bed515-2290-4f88-8dab-b45d95fe26ef
caps.latest.revision: 7
manager: douge
---
# Compiler Warning (level 1) C4165
'HRESULT' is being converted to 'bool'; are you sure this is what you want?  
  
 When using an [HRESULT](_com_hresults) in an [if](../VS_visualcpp/if-else-Statement--C---.md) statement, the HRESULT will be converted to a [bool](../VS_visualcpp/bool--C---.md) unless you explicitly test for the variable as an HRESULT. This warning is off by default.  
  
 The following sample generates C4165  
  
```  
// C4165.cpp  
// compile with: /W1  
#include <windows.h>  
#pragma warning(1:4165)  
  
extern HRESULT hr;  
int main() {  
   if (hr) {  
   // try either of the following ...  
   // if (FAILED(hr)) { // C4165 expected  
   // if (hr != S_OK) {  
   }  
}  
```