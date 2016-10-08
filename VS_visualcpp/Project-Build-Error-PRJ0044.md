---
title: "Project Build Error PRJ0044"
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
ms.topic: error-reference
ms.assetid: 5d78c45a-f9e9-4d2b-a3b6-5a5d1421ab84
caps.latest.revision: 9
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
# Project Build Error PRJ0044
The 'Additional Dependencies' property for custom build rule 'rule' assigned to file 'file' is invalid. The property contained 'string' which evaluates to 'value'.  
  
 The **Additional Dependencies** property evaluated to an empty string, or to a string that contained invalid characters (any character that could not be in a file or directory name). Custom build rules need the output of the build action.  
  
 For more information, see [Specifying Custom Build Tools](../VS_visualcpp/Specifying-Custom-Build-Tools.md).  
  
## See Also  
 [Project Build Errors and Warnings (PRJxxxx)](../VS_visualcpp/Project-Build-Errors-and-Warnings--PRJxxxx-.md)