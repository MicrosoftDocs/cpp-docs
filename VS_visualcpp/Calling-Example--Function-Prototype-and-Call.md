---
title: "Calling Example: Function Prototype and Call"
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
ms.assetid: e4275d1f-df2e-4bfc-a162-eb43ec69554a
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
# Calling Example: Function Prototype and Call
## Microsoft Specific  
 The following example shows the results of making a function call using various calling conventions.  
  
 This example is based on the following function skeleton. Replace `calltype` with the appropriate calling convention.  
  
```  
void    calltype MyFunc( char c, short s, int i, double f );  
.  
.  
.  
void    MyFunc( char c, short s, int i, double f )  
    {  
    .  
    .  
    .  
    }  
.  
.  
.  
MyFunc ('x', 12, 8192, 2.7183);  
```  
  
 For more information, see [Results of Calling Example](../VS_visualcpp/Results-of-Calling-Example.md).  
  
## END Microsoft Specific  
  
## See Also  
 [Calling Conventions](../VS_visualcpp/Calling-Conventions.md)