---
title: "Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box"
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
ms.assetid: 3d587366-05ea-4956-a978-313069660735
caps.latest.revision: 13
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
# Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box
Use this dialog box to specify advanced options for [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 To access this property page dialog box, open the property pages for your project or your property sheet. Expand the **Manifest Tool** node under **Configuration Properties**, and then select **Advanced**.  
  
## UIElement List  
 **Update File Hashes**  
 Uses the /hashupdate option to specify that the manifest tool will compute the hash of files specified in `<file>` elements, and then update the hash attributes with the computed value.  
  
 **Update File Hashes Search Path**  
 Specifies the search path for files that are referenced in `<file>` elements. This option also uses the /hashupdate option.  
  
## See Also  
 [<file\> Element](../Topic/%3Cfile%3E%20Element%20\(ClickOnce%20Application\).md)   
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)   
 [Manifest Tool Property Pages](../VS_visualcpp/Manifest-Tool-Property-Pages.md)   
 [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md)   
 [How to: Edit Project Property Sheets](../Topic/How%20to:%20Edit%20Project%20Property%20Sheets.md)