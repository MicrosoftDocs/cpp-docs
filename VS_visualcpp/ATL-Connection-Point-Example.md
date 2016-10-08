---
title: "ATL Connection Point Example"
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
ms.assetid: a49721b7-f308-43de-8868-f662a94bc81a
caps.latest.revision: 9
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
# ATL Connection Point Example
This example shows an object that supports [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) as an outgoing interface:  
  
 [!CODE [NVC_ATL_Windowing#84](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Windowing#84)]  
  
 When specifying `IPropertyNotifySink` as an outgoing interface, you can use class [IPropertyNotifySinkCP](../VS_visualcpp/IPropertyNotifySinkCP-Class.md) instead of `IConnectionPointImpl`. For example:  
  
 [!CODE [NVC_ATL_Windowing#85](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Windowing#85)]  
  
## See Also  
 [Connection Point](../VS_visualcpp/ATL-Connection-Points.md)