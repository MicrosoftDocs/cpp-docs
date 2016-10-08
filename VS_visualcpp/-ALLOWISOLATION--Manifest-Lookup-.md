---
title: "-ALLOWISOLATION (Manifest Lookup)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /ALLOWISOLATION (Manifest Lookup)
ms.assetid: 6d41851e-b3c1-4bdf-beaa-031773089d6f
caps.latest.revision: 12
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -ALLOWISOLATION (Manifest Lookup)
Specifies behavior for manifest lookup.  
  
## Syntax  
  
```  
/ALLOWISOLATION[:NO]  
```  
  
## Remarks  
 **/ALLOWISOLATION:NO** indicates DLLs are loaded as if there was no manifest and causes the linker to set the `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit in the optional header's `DllCharacteristics` field.  
  
 **/ALLOWISOLATION** causes the operating system to do manifest lookups and loads.  
  
 **/ALLOWISOLATION** is the default.  
  
 When isolation is disabled for an executable, the Windows loader will not attempt to find an application manifest for the newly created process. The new process will not have a default activation context, even if there is a manifest inside the executable or placed in the same directory as the executable with name *executable-name***.exe.manifest**.  
  
 For more information, see [Manifest Files Reference](http://msdn.microsoft.com/library/aa375632).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Manifest File** property page.  
  
5.  Modify the **Allow Isolation** property.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)