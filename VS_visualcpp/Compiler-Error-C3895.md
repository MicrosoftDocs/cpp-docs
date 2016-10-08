---
title: "Compiler Error C3895"
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
ms.assetid: 771b9fe5-d6d4-4297-bf57-e2f857722155
caps.latest.revision: 8
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
# Compiler Error C3895
'var' : type data members cannot be 'volatile'  
  
 Certain kinds of data members, for example [literal](../VS_visualcpp/literal--C---Component-Extensions-.md) or [initonly](../VS_visualcpp/initonly--C---CLI-.md), cannot be [volatile](../VS_visualcpp/volatile--C---.md).  
  
 The following sample generates C3895:  
  
```  
// C3895.cpp  
// compile with: /clr  
ref struct Y1 {  
   initonly  
   volatile int data_var2;   // C3895  
};  
```