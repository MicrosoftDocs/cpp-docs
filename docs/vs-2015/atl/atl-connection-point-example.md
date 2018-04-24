---
title: "ATL Connection Point Example | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connection points [C++], examples"
  - "examples [ATL]"
ms.assetid: a49721b7-f308-43de-8868-f662a94bc81a
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Connection Point Example
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ATL Connection Point Example](https://docs.microsoft.com/cpp/atl/atl-connection-point-example).  
  
  
This example shows an object that supports [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) as an outgoing interface:  
  
 [!code-cpp[NVC_ATL_Windowing#84](../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/Connect1.h#84)]  
  
 When specifying `IPropertyNotifySink` as an outgoing interface, you can use class [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) instead of `IConnectionPointImpl`. For example:  
  
 [!code-cpp[NVC_ATL_Windowing#85](../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/Connect2.h#85)]  
  
## See Also  
 [Connection Point](../atl/atl-connection-points.md)





