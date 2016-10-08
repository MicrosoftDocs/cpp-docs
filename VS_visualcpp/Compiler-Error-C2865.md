---
title: "Compiler Error C2865"
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
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
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
# Compiler Error C2865
'function' : illegal comparison for handle_or_pointer  
  
 You can compare references to [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md) or [__gc](../Topic/__gc.md) types only for equality to see if they refer to the same object (==) or to different objects (!=).  
  
 You cannot compare them for ordering because the .NET runtime might move managed objects at any time, changing the outcome of the test.