---
title: "Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCManifestTool.KeyFile"
  - "VC.Project.VCManifestTool.UpdateFileHashes"
  - "VC.Project.VCManifestTool.UpdateFileHashesSearchPath"
  - "VC.Project.VCManifestTool.ValidateSignature"
  - "VC.Project.VCManifestTool.KeyContainer"
dev_langs: 
  - "C++"
ms.assetid: 3d587366-05ea-4956-a978-313069660735
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
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
# Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box
Use this dialog box to specify advanced options for [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 To access this property page dialog box, open the property pages for your project or your property sheet. Expand the **Manifest Tool** node under **Configuration Properties**, and then select **Advanced**.  
  
## UIElement List  
 **Update File Hashes**  
 Uses the /hashupdate option to specify that the manifest tool will compute the hash of files specified in `<file>` elements, and then update the hash attributes with the computed value.  
  
 **Update File Hashes Search Path**  
 Specifies the search path for files that are referenced in `<file>` elements. This option also uses the /hashupdate option.  
  
## See Also  
 [\<file> Element](http://msdn.microsoft.com/Library/56e3490c-eed5-4841-b1bf-eefe778b6ac9)   
 [ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest)   
 [Manifest Tool Property Pages](../ide/manifest-tool-property-pages.md)   
 [Working with Project Properties](../ide/working-with-project-properties.md)   