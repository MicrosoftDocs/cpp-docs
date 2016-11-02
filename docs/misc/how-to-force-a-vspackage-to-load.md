---
title: "How to: Force a VSPackage to Load | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
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
# How to: Force a VSPackage to Load
VSPackages are ordinarily loaded only when their accompanying functionality is required to complete a process. Under some circumstances, however, a VSPackage may have to force another VSPackage to be loaded. For example, a lightweight VSPackage might load a larger VSPackage in a programming context that is not available as a CMDUIContext.  
  
 You can use the <xref:Microsoft.VisualStudio.Shell.Interop.IVsShell.LoadPackage*> method to force a VSPackage to load.  
  
### To force a VSPackage to load  
  
-   Insert this code into the <xref:Microsoft.VisualStudio.Shell.Package.Initialize*> method of the VSPackage that forces another VSPackage to load:  
  
     [!code-cs[ForceVSPackageLoad#01](../misc/codesnippet/CSharp/how-to-force-a-vspackage-to-load_1.cs)]  
  
     When the VSPackage is initialized, it will force `PackageToBeLoaded` to load.  
  
## Robust Programming  
 Force loading should not be used for VSPackage communication. Use [Using and Providing Services](/visual-studio/extensibility/using-and-providing-services) instead.  
  
## See Also  
 [Managing VSPackages](/visual-studio/extensibility/managing-vspackages)   
 [VSPackages](/visual-studio/extensibility/internals/vspackages)