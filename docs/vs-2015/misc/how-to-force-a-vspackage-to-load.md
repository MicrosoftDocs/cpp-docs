---
title: "How to: Force a VSPackage to Load | Microsoft Docs"
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
  - "VSPackages, force loading"
  - "VSPackages, loading"
ms.assetid: 05f4dc3f-3c9a-45ea-96da-986553b5c5f2
caps.latest.revision: 20
manager: "douge"
---
# How to: Force a VSPackage to Load
VSPackages are ordinarily loaded only when their accompanying functionality is required to complete a process. Under some circumstances, however, a VSPackage may have to force another VSPackage to be loaded. For example, a lightweight VSPackage might load a larger VSPackage in a programming context that is not available as a CMDUIContext.  
  
 You can use the <xref:Microsoft.VisualStudio.Shell.Interop.IVsShell.LoadPackage%2A> method to force a VSPackage to load.  
  
### To force a VSPackage to load  
  
-   Insert this code into the <xref:Microsoft.VisualStudio.Shell.Package.Initialize%2A> method of the VSPackage that forces another VSPackage to load:  
  
     [!code-csharp[ForceVSPackageLoad#01](../snippets/csharp/VS_Snippets_VSSDK/forcevspackageload/cs/forcevspackageloadcsharp/forcevspackageloadcsharppackage.cs#01)]  
  
     When the VSPackage is initialized, it will force `PackageToBeLoaded` to load.  
  
## Robust Programming  
 Force loading should not be used for VSPackage communication. Use [Using and Providing Services](../Topic/Using%20and%20Providing%20Services.md) instead.  
  
## See Also  
 [Managing VSPackages](../Topic/Managing%20VSPackages.md)   
 [VSPackages](../Topic/VSPackages.md)