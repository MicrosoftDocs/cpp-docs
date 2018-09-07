---
title: "-ALLOWISOLATION (Manifest Lookup) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/ALLOWISOLATION", "VC.Project.VCLinkerTool.AllowIsolation"]
dev_langs: ["C++"]
helpviewer_keywords: ["-ALLOWISOLATION linker option", "/ALLOWISOLATION linker option"]
ms.assetid: 6d41851e-b3c1-4bdf-beaa-031773089d6f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /ALLOWISOLATION (Manifest Lookup)
Specifies behavior for manifest lookup.  
  
## Syntax  
  
```  
/ALLOWISOLATION[:NO]  
```  
  
## Remarks  
 **/ALLOWISOLATION:NO** indicates DLLs are loaded as if there was no manifest and causes the linker to set the `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit in the optional header's `DllCharacteristics` field.  
  
 **/ALLOWISOLATION** causes the operating system to do manifest lookups and loads.  
  
 **/ALLOWISOLATION** is the default.  
  
 When isolation is disabled for an executable, the Windows loader will not attempt to find an application manifest for the newly created process. The new process will not have a default activation context, even if there is a manifest inside the executable or placed in the same directory as the executable with name <em>executable-name</em>**.exe.manifest**.  
  
 For more information, see [Manifest Files Reference](/windows/desktop/SbsCs/manifest-files-reference).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Manifest File** property page.  
  
5.  Modify the **Allow Isolation** property.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)