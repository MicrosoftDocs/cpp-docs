---
title: "An invalid cookie was passed to UnregisterExtenderProvider(). | Microsoft Docs"
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
  - "vs.message.VS_E_EXT_NOEXTPROVREGISTERED"
ms.assetid: 6180376b-37b4-49e1-aea6-cbc5cf82e232
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# An invalid cookie was passed to UnregisterExtenderProvider().
You have specified a cookie that is no longer valid.  
  
### To correct this error  
  
1.  Return the same cookie value that you got back from calling RegisterExtenderProvider().  
  
## See Also  
 <xref:EnvDTE.ObjectExtenders.RegisterExtenderProvider%2A>   
 <xref:EnvDTE.ObjectExtenders>