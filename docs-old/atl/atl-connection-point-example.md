---
title: "ATL Connection Point Example"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connection points [C++], examples"
  - "examples [ATL]"
ms.assetid: a49721b7-f308-43de-8868-f662a94bc81a
caps.latest.revision: 9
ms.author: "mblome"
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
# ATL Connection Point Example
This example shows an object that supports [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) as an outgoing interface:  
  
 [!code[NVC_ATL_Windowing#84](../atl/codesnippet/CPP/atl-connection-point-example_1.h)]  
  
 When specifying `IPropertyNotifySink` as an outgoing interface, you can use class [IPropertyNotifySinkCP](../atl/ipropertynotifysinkcp-class.md) instead of `IConnectionPointImpl`. For example:  
  
 [!code[NVC_ATL_Windowing#85](../atl/codesnippet/CPP/atl-connection-point-example_2.h)]  
  
## See Also  
 [Connection Point](../atl/atl-connection-points.md)