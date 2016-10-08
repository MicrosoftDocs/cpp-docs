---
title: "Dumping Delay-Loaded Imports"
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
ms.assetid: f766acf4-9df8-4b85-8cf6-0be3ffc4c124
caps.latest.revision: 7
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
# Dumping Delay-Loaded Imports
Delay-loaded imports can be dumped using [dumpbin /imports](../VS_visualcpp/-IMPORTS--DUMPBIN-.md) and show up with slightly different information than standard imports. They are segregated into their own section of the /imports dumping and are explicitly labeled as delay-loaded imports. If there is unload information present in the image, that is noted. If there is bind information present, the time/date stamp of the target DLL is noted along with the bound addresses of the imports.  
  
## See Also  
 [Linker Support for Delay-Loaded DLLs](../VS_visualcpp/Linker-Support-for-Delay-Loaded-DLLs.md)