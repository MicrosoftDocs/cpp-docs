---
title: "How to: Use GetGlobalService"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "services, GetGlobalService"
ms.assetid: 4cdf5ab5-9f09-4caf-9011-2dcb2c62f1b7
caps.latest.revision: 14
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
# How to: Use GetGlobalService
Sometimes you may need to get a service from a tool window or control container that has not been sited, or else has been sited with a service provider that does not know about the service you want. For example, you might want to write to the activity log from within a control. For more information about these and other scenarios, see [How to: Troubleshoot Services](../Topic/How%20to:%20Troubleshoot%20Services.md).  
  
 You can get most [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] services by calling the static <xref:Microsoft.VisualStudio.Shell.Package.GetGlobalService*> method.  
  
 <xref:Microsoft.VisualStudio.Shell.Package.GetGlobalService*> relies on a cached service provider that is initialized the first time any VSPackage derived from <xref:Microsoft.VisualStudio.Shell.Package> is sited. You must guarantee that this condition is met, or else be prepared for a null service.  
  
 Fortunately, <xref:Microsoft.VisualStudio.Shell.Package.GetGlobalService*> works correctly most of the time.  
  
-   If a VSPackage provides a service known only to another VSPackage, the VSPackage requesting the service is sited before the VSPackage providing the service is loaded.  
  
-   If a tool window is created by a VSPackage, the VSPackage is sited before the tool window is created.  
  
-   If a control container is hosted by a tool window created by a VSPackage, the VSPackage is sited before the control container is created.  
  
### To get a service from within a tool window or control container  
  
-   Insert this code in the constructor, tool window, or control container:  
  
     [!code-vb[UseGetGlobalService#1](../misc/codesnippet/VisualBasic/how-to-use-getglobalservice_1.vb)]
     [!code-cs[UseGetGlobalService#1](../misc/codesnippet/CSharp/how-to-use-getglobalservice_1.cs)]  
  
     This code obtains an SVsActivityLog service and casts it to an <xref:Microsoft.VisualStudio.Shell.Interop.IVsActivityLog> interface, which can be used to write to the activity log. For an example, see [How to: Use the Activity Log](../Topic/How%20to:%20Use%20the%20Activity%20Log.md).  
  
## See Also  
 [How to: Troubleshoot Services](../Topic/How%20to:%20Troubleshoot%20Services.md)   
 [Using and Providing Services](../Topic/Using%20and%20Providing%20Services.md)   
 [Service Essentials](../Topic/Service%20Essentials.md)