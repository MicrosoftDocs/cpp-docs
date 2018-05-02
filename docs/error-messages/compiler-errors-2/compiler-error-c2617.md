---
title: "Compiler Error C2617 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2617"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2617"]
ms.assetid: d6a435d2-7d95-4dbf-ad4a-abe4744f63e8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2617
'function' : inconsistent return statement  
  
 The specified function does not have a declared return type, and a previous return statement did not supply a value.  
  
 The following sample generates C2617:  
  
```  
// C2617.cpp  
int i;  
func() {   // no return type prototype  
   if( i ) return;   // no return value  
   else return( 1 );   // C2617 detected on this line  
}  
```  
  
 Possible resolution:  
  
```  
// C2617b.cpp  
// compile with: /c  
int i;  
int MyF() {  
   if (i)  
      return 0;  
   else   
      return (1);  
}  
```