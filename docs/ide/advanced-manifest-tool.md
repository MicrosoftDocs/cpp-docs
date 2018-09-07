---
title: "Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["VC.Project.VCManifestTool.KeyFile", "VC.Project.VCManifestTool.UpdateFileHashes", "VC.Project.VCManifestTool.UpdateFileHashesSearchPath", "VC.Project.VCManifestTool.ValidateSignature", "VC.Project.VCManifestTool.KeyContainer"]
dev_langs: ["C++"]
ms.assetid: 3d587366-05ea-4956-a978-313069660735
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box
Use this dialog box to specify advanced options for [Mt.exe](https://msdn.microsoft.com/library/aa375649).  
  
 To access this property page dialog box, open the property pages for your project or your property sheet. Expand the **Manifest Tool** node under **Configuration Properties**, and then select **Advanced**.  
  
## UIElement List  
 **Update File Hashes**  
 Uses the /hashupdate option to specify that the manifest tool will compute the hash of files specified in `<file>` elements, and then update the hash attributes with the computed value.  
  
 **Update File Hashes Search Path**  
 Specifies the search path for files that are referenced in `<file>` elements. This option also uses the /hashupdate option.  
  
## See Also  
 [\<file> Element](/visualstudio/deployment/file-element-clickonce-application)   
 [ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest)   
 [Manifest Tool Property Pages](../ide/manifest-tool-property-pages.md)   
 [Working with Project Properties](../ide/working-with-project-properties.md)   