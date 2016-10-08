---
title: "Dynamic Object Creation"
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
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
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
# Dynamic Object Creation
This article explains how to create an object dynamically at run time. The procedure uses run-time class information, as discussed in the article [Accessing Run-Time Class Information](../VS_visualcpp/Accessing-Run-Time-Class-Information.md).  
  
#### To dynamically create an object given its run-time class  
  
1.  Use the following code to dynamically create an object by using the `CreateObject` function of the `CRuntimeClass`. Note that on failure, `CreateObject` returns **NULL** instead of raising an exception:  
  
     [!CODE [NVC_MFCCObjectSample#6](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCCObjectSample#6)]  
  
## See Also  
 [Using CObject](../VS_visualcpp/Using-CObject.md)