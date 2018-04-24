---
title: "General, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box | Microsoft Docs"
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
  - "VC.Project.VCManifestTool.MergeRulesFile"
  - "VC.Project.VCManifestTool.UseUnicodeResponseFiles"
  - "VC.Project.VCManifestTool.SuppressStartupBanner"
  - "VC.Project.VCManifestTool.UseFAT32Workaround"
  - "VC.Project.VCManifestTool.VerboseOutput"
  - "VC.Project.VCManifestTool.AssemblyIdentity"
dev_langs: 
  - "C++"
ms.assetid: b99368a5-6819-482c-a06e-f2409290cfd1
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# General, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Manifest Tool Configuration Properties (Visual C++)](https://docs.microsoft.com/cpp/ide/general-manifest-tool-configuration-properties).  
  
  
Use this dialog box to specify general options for [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 To access this property page dialog box, open the property pages for your project or your property sheet. Expand the **Manifest Tool** node under **Configuration Properties**, and then select **General**.  
  
## UIElement List  
 **Suppress Startup Banner**  
 **Yes (/nologo)** specifies that standard Microsoft copyright data will be concealed when the manifest tool is started. Use this option to suppress unwanted output in log files, when you run mt.exe as part of a build process or from a build environment.  
  
 **Verbose Output**  
 **Yes (/verbose)** specifies that additional build information will be displayed during manifest generation.  
  
 **Assembly Identity**  
 Uses the /identity option to specify an identity string, which comprises the attributes for the [\<assemblyIdentity> Element](../Topic/%3CassemblyIdentity%3E%20Element%20\(ClickOnce%20Application\).md). An identity string begins with the value for the `name` attribute, and is followed by *attribute* = *value* pairs. The attributes in an identity string are delimited by a comma.  
  
 The following is an example identity string:  
  
 `Microsoft.Windows.Common-Controls, processorArchitecture=x86, version=6.0.0.0, type=win32, publicKeyToken=6595b64144ccf1df`  
  
## See Also  
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)   
 [Manifest Tool Property Pages](../ide/manifest-tool-property-pages.md)   
 [How to: Open Project Property Pages](../misc/how-to-open-project-property-pages.md)   
 [How to: Edit Project Property Sheets](../misc/how-to-edit-project-property-sheets.md)

