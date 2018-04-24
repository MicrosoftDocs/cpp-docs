---
title: "Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box](https://docs.microsoft.com/cpp/ide/advanced-manifest-tool).  
  
  
Use this dialog box to specify advanced options for [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 To access this property page dialog box, open the property pages for your project or your property sheet. Expand the **Manifest Tool** node under **Configuration Properties**, and then select **Advanced**.  
  
## UIElement List  
 **Update File Hashes**  
 Uses the /hashupdate option to specify that the manifest tool will compute the hash of files specified in `<file>` elements, and then update the hash attributes with the computed value.  
  
 **Update File Hashes Search Path**  
 Specifies the search path for files that are referenced in `<file>` elements. This option also uses the /hashupdate option.  
  
## See Also  
 [\<file> Element](http://msdn.microsoft.com/library/56e3490c-eed5-4841-b1bf-eefe778b6ac9)   
 [ClickOnce Application Manifest](http://msdn.microsoft.com/library/29570cec-4e53-4660-a850-abc4fa150243)   
 [Manifest Tool Property Pages](../ide/manifest-tool-property-pages.md)   
 [How to: Open Project Property Pages](../misc/how-to-open-project-property-pages.md)   
 [How to: Edit Project Property Sheets](../misc/how-to-edit-project-property-sheets.md)

