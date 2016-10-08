---
title: "Compiler Error C2097"
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
ms.assetid: 7e5b2fd4-f61c-4b8a-b265-93e987a04bd3
caps.latest.revision: 6
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
# Compiler Error C2097
illegal initialization  
  
### To fix by checking the following possible causes  
  
1.  Initialization of a variable using a nonconstant value.  
  
2.  Initialization of a short address with a long address.  
  
3.  Initialization of a local structure, union, or array with a nonconstant expression when compiling with **/Za**.  
  
4.  Initialization with an expression containing a comma operator.  
  
5.  Initialization with an expression that is neither constant nor symbolic.