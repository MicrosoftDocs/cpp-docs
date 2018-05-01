---
title: "Extender instance is no longer valid. | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_EXT_EXTINVALID"
ms.assetid: 6361ba35-f2c5-4024-9362-46d7d9daf651
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Extender instance is no longer valid.
The Extender instance could not be created successfully or was destroyed.  
  
### To correct this error  
  
1.  Get the Extender instance again from the Extendee Object  
  
     —or—  
  
     Get the Extender instance again by calling DTE.ObjectExtenders.GetExtender().  
  
## See Also  
 <xref:EnvDTE.ObjectExtenders>   
 <xref:EnvDTE.ObjectExtenders.GetExtender%2A>