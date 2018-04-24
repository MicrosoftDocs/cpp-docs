---
title: "How to: Get a Service from the DTE Object | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "services, from the DTE object"
ms.assetid: c26a51d4-86f0-454b-9625-5443e55eec7d
caps.latest.revision: 13
manager: "douge"
---
# How to: Get a Service from the DTE Object
A service can be obtained from any program that has access to the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] Automation <xref:EnvDTE.DTEClass> object. For example, you can access the <xref:Microsoft.VisualStudio.Shell.Interop.SVsActivityLog> service from a wizard through the DTE object. You can use this service to write to the activity log. For more information, see [How to: Use the Activity Log](../Topic/How%20to:%20Use%20the%20Activity%20Log.md).  
  
 The DTE object implements <xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider>, which you can use to query for a service from managed code by using <xref:Microsoft.VisualStudio.Shell.ServiceProvider.GetService%2A>.  
  
### To get a service from the DTE object  
  
1.  The following code creates a <xref:Microsoft.VisualStudio.Shell.ServiceProvider> from the DTE object and calls <xref:Microsoft.VisualStudio.Shell.ServiceProvider.GetService%2A> with the type of the <xref:Microsoft.VisualStudio.Shell.Interop.SVsActivityLog> service. The service is cast to the interface <xref:Microsoft.VisualStudio.Shell.Interop.IVsActivityLog>, which is used to write an entry in the activity log. For more information abou how to write to the activity log, see [How to: Use the Activity Log](../Topic/How%20to:%20Use%20the%20Activity%20Log.md).  
  
     [!code-csharp[GetAServiceFromTheDTEObject#1](../snippets/csharp/VS_Snippets_VSSDK/getaservicefromthedteobject/cs/getaservicefromthedteobjectpackage.cs#1)]
     [!code-vb[GetAServiceFromTheDTEObject#1](../snippets/visualbasic/VS_Snippets_VSSDK/getaservicefromthedteobject/vb/getaservicefromthedteobjectpackage.vb#1)]  
  
## See Also  
 [Using and Providing Services](../Topic/Using%20and%20Providing%20Services.md)   
 [Service Essentials](../Topic/Service%20Essentials.md)