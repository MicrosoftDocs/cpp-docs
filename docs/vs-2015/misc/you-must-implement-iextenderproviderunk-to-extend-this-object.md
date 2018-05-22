---
title: "You must implement IExtenderProviderUnk to extend this object. | Microsoft Docs"
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
  - "vs.message.VS_E_EXT_NONDISPATCHEXTENDEE"
ms.assetid: e0d4087f-9fa9-4fa9-92d9-7aed3103b2d8
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# You must implement IExtenderProviderUnk to extend this object.
The Extendee Object is based on IUnknown rather than the IDispatch interface.  
  
### To correct this error  
  
1.  Have the Extender Provider implement IExtenderProviderUnk instead of IExtenderProvider.  
  
## See Also  
 <xref:EnvDTE.IExtenderProviderUnk>   
 <xref:EnvDTE.IExtenderProvider>   
 <xref:EnvDTE.ObjectExtenders>