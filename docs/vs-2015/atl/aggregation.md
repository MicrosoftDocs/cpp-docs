---
title: "Aggregation | Microsoft Docs"
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
  - "aggregation [C++]"
  - "aggregate objects [C++]"
ms.assetid: 7125bb8e-b269-4b50-9bba-295b467a54cc
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggregation
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Aggregation](https://docs.microsoft.com/cpp/atl/aggregation).  
  
  
There are times when an object's implementor would like to take advantage of the services offered by another, prebuilt object. Furthermore, it would like this second object to appear as a natural part of the first. COM achieves both of these goals through containment and aggregation.  
  
 Aggregation means that the containing (outer) object creates the contained (inner) object as part of its creation process and the interfaces of the inner object are exposed by the outer. An object allows itself to be aggregatable or not. If it is, then it must follow certain rules for aggregation to work properly.  
  
 Primarily, all **IUnknown** method calls on the contained object must delegate to the containing object.  
  
## See Also  
 [Introduction to COM](../atl/introduction-to-com.md)   
 [Reusing Objects](http://msdn.microsoft.com/library/windows/desktop/ms678443)





