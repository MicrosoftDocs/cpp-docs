---
title: "How to: Get a Service from the DTE Object"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "services, from the DTE object"
ms.assetid: c26a51d4-86f0-454b-9625-5443e55eec7d
caps.latest.revision: 13
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
# How to: Get a Service from the DTE Object
A service can be obtained from any program that has access to the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] Automation \<xref:EnvDTE.DTEClass> object. For example, you can access the \<xref:Microsoft.VisualStudio.Shell.Interop.SVsActivityLog> service from a wizard through the DTE object. You can use this service to write to the activity log. For more information, see [How to: Use the Activity Log](../Topic/How%20to:%20Use%20the%20Activity%20Log.md).  
  
 The DTE object implements \<xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider>, which you can use to query for a service from managed code by using \<xref:Microsoft.VisualStudio.Shell.ServiceProvider.GetService*>.  
  
### To get a service from the DTE object  
  
1.  The following code creates a \<xref:Microsoft.VisualStudio.Shell.ServiceProvider> from the DTE object and calls \<xref:Microsoft.VisualStudio.Shell.ServiceProvider.GetService*> with the type of the \<xref:Microsoft.VisualStudio.Shell.Interop.SVsActivityLog> service. The service is cast to the interface \<xref:Microsoft.VisualStudio.Shell.Interop.IVsActivityLog>, which is used to write an entry in the activity log. For more information abou how to write to the activity log, see [How to: Use the Activity Log](../Topic/How%20to:%20Use%20the%20Activity%20Log.md).  
  
     [!code[GetAServiceFromTheDTEObject#1](../notintoc/codesnippet/CSharp/how-to--get-a-service-from-the-dte-object_1.cs)]
[!code[GetAServiceFromTheDTEObject#1](../notintoc/codesnippet/VisualBasic/how-to--get-a-service-from-the-dte-object_1.vb)]  
  
## See Also  
 [Using and Providing Services](../Topic/Using%20and%20Providing%20Services.md)   
 [Service Essentials](../Topic/Service%20Essentials.md)