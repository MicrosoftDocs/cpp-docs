---
title: "COM Interop Wrapper Error | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannotcopyassembly"
  - "Vs.refruntlbimp"
helpviewer_keywords: 
  - "COM Interop Wrapper dialog box"
ms.assetid: 9a9d6374-ee26-4dbc-9e34-e1d90f6254b4
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# COM Interop Wrapper Error
This message box is displayed when the project system could not create a COM interop wrapper for a particular component.  COM interop wrappers are required by the common language runtime (CLR) to manage and communicate with COM components.  For more information, see [COM Interoperability in Visual Basic and Visual C#](/dotnet/visual-basic/programming-guide/com-interop/com-interoperability-in-net-framework-applications).  
  
 Common causes for the failure include:  
  
-   The type library for the component is not properly registered.  
  
-   A component on which the component being wrapped is dependent could not be found on your machine.  
  
 In both of these cases, you need to ensure that the COM component is properly installed and registered on your machine and retry the operation.  
  
> [!TIP]
>  You can also search the [MSDN Web site](http://go.microsoft.com/fwlink/?LinkId=3355) for a COM interop wrapper that has been published for your specific COM component.  
  
> [!NOTE]
>  COM interop wrappers are sometimes referred to as "primary interop assemblies." These terms are synonymous  
  
## See Also  
 [Component Model Namespaces in Visual Studio](http://msdn.microsoft.com/en-us/705d0add-0707-44ba-a6de-637381d9c937)   
 [Component Authoring](../Topic/Component%20Authoring.md)   
 [COM Interop](/dotnet/visual-basic/programming-guide/com-interop/index)   
 [Common Language Runtime](../Topic/Common%20Language%20Runtime%20\(CLR\).md)   
 [COM Interoperability in .NET Framework Applications](/dotnet/visual-basic/programming-guide/com-interop/com-interoperability-in-net-framework-applications)