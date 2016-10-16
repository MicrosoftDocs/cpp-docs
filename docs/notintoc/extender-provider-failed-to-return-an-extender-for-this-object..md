---
title: "Extender Provider failed to return an Extender for this object."
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
  - "vs.message.VS_E_EXT_EXTCANTEXTEND"
ms.assetid: 96702669-b720-4076-91b6-bb29ec830a65
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
# Extender Provider failed to return an Extender for this object.
No Extender could be returned.  
  
### To correct this error  
  
1.  Verify that your implementation of IExtenderProvider::CanExtend() and IExtenderProvider::GetExtender() succeeded in returning a valid Extender Object.  
  
## See Also  
 \<xref:EnvDTE.IExtenderProvider>   
 \<xref:EnvDTE.ObjectExtenders>