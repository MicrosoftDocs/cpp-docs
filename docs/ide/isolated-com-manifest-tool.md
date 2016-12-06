---
title: "Isolated COM, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCManifestTool.RegistrarScriptFile"
  - "VC.Project.VCManifestTool.ComponentFileName"
  - "VC.Project.VCManifestTool.TypeLibraryFile"
  - "VC.Project.VCManifestTool.ReplacementsFile"
dev_langs: 
  - "C++"
ms.assetid: 457582b8-cfde-49c0-92e3-3a6b9e8c08eb
caps.latest.revision: 12
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
# Isolated COM, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box
Use this dialog box to specify **Isolated COM** options for [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 To access this property page dialog box, open the property pages for your project or your property sheet. Expand the **Manifest Tool** node under **Common Properties**, and then select **Isolated COM**.  
  
## Task List  
  
-   [How to: Build Isolated Applications to Consume COM Components](../build/how-to-build-isolated-applications-to-consume-com-components.md)  
  
## UIElement List  
 **Type Library File**  
 Uses the /tlb option to specify the name of the type library file (.tlb file) that the manifest tool will use to generate the manifest file.  
  
 **Registrar Script File**  
 Uses the /rgs option to specify the name of the registrar script file (.rgs file) that the manifest tool will use to generate the manifest file.  
  
 **Component File Name**  
 Uses the /dll option to specify the name of the resource that the manifest tool will generate. You must enter a value for this property when values for either **Type Library File** or **Registrar Script File** are specified.  
  
 **Replacements File**  
 Uses the /replacements option to specify the full path to the file that contains values for replaceable strings in the .rgs file.  
  
## See Also  
 [Isolated Applications](http://msdn.microsoft.com/library/aa375190)   
 [ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest)   
 [Manifest Tool Property Pages](../ide/manifest-tool-property-pages.md)   
 [Working with Project Properties](../ide/working-with-project-properties.md)   