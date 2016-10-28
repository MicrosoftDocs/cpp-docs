---
title: "MSBuild Error MSB3155"
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
  - "MSBuild.GenerateBootstrapper.ProductNotFound"
helpviewer_keywords: 
  - "MSB3155"
ms.assetid: 59bf2293-ef13-4bb1-8f29-5d6966bbe313
caps.latest.revision: 11
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
# MSBuild Error MSB3155
**MSBuild Error MSB3155: Item '\<package>' could not be located in '\<path>'**  
  
 This warning occurs when a package with the specified \<xref:Microsoft.Build.Tasks.Deployment.Bootstrapper.Product.ProductCode*> cannot be found in the bootstrapper cache.  
  
> [!NOTE]
>  Microsoft Data Access Components (MDAC) are no longer included as a bootstrapper package. They can be downloaded from the [Microsoft Windows Update](http://go.microsoft.com/fwlink/?LinkId=86676) Web site.  
  
### To correct this error  
  
-   Remove the package from the list of packages to install, or add the package to the cache. Also, make sure that the manifest is formatted correctly with valid XML tags.  
  
## See Also  
 [Product and Package Schema Reference](../Topic/Product%20and%20Package%20Schema%20Reference.md)   
 [\<PackageFiles> Element](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)   
 [Prerequisites Dialog Box](../Topic/Prerequisites%20Dialog%20Box.md)   
 [Creating Bootstrapper Packages](../Topic/Creating%20Bootstrapper%20Packages.md)