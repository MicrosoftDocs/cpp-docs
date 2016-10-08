---
title: "AFXDLL Versions"
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
ms.assetid: c078ae8f-85a9-43cb-9ded-c09ca2c45723
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
# AFXDLL Versions
Instead of building your application by statically linking to the MFC object-code libraries, you can build your application to use one of the AFXDLL libraries, which contain MFC in a DLL that multiple running applications can share. For a table of AFXDLL names, see [DLLs: Naming Conventions](../VS_visualcpp/Naming-Conventions-for-MFC-DLLs.md).  
  
> [!NOTE]
>  By default, the MFC Application Wizard creates an AFXDLL project. To use static linking of MFC code instead, set the **Use MFC in a static library** option in the MFC Application Wizard. Static linking is not available in the Standard Edition of Visual C++.  
  
## See Also  
 [MFC Library Versions](../VS_visualcpp/MFC-Library-Versions.md)