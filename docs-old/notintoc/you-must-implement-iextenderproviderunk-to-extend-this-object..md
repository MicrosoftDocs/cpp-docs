---
title: "You must implement IExtenderProviderUnk to extend this object."
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_EXT_NONDISPATCHEXTENDEE"
ms.assetid: e0d4087f-9fa9-4fa9-92d9-7aed3103b2d8
caps.latest.revision: 7
ms.author: "mblome"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# You must implement IExtenderProviderUnk to extend this object.
The Extendee Object is based on IUnknown rather than the IDispatch interface.  
  
### To correct this error  
  
1.  Have the Extender Provider implement IExtenderProviderUnk instead of IExtenderProvider.  
  
## See Also  
 \<xref:EnvDTE.IExtenderProviderUnk>   
 \<xref:EnvDTE.IExtenderProvider>   
 \<xref:EnvDTE.ObjectExtenders>