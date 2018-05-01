---
title: "AFXDLL Versions | Microsoft Docs"
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
  - "afxdll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC DLLs [C++], dynamic linking to library"
  - "AFXDLL library"
  - "application wizards [C++], default uses AFXDLL"
  - "MFC libraries [C++], dynamic linking"
  - "MFC [C++], AFXDLL version"
  - "DLL version of MFC [C++]"
ms.assetid: c078ae8f-85a9-43cb-9ded-c09ca2c45723
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AFXDLL Versions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [AFXDLL Versions](https://docs.microsoft.com/cpp/mfc/afxdll-versions).  
  
  
Instead of building your application by statically linking to the MFC object-code libraries, you can build your application to use one of the AFXDLL libraries, which contain MFC in a DLL that multiple running applications can share. For a table of AFXDLL names, see [DLLs: Naming Conventions](../build/naming-conventions-for-mfc-dlls.md).  
  
> [!NOTE]
>  By default, the MFC Application Wizard creates an AFXDLL project. To use static linking of MFC code instead, set the **Use MFC in a static library** option in the MFC Application Wizard. Static linking is not available in the Standard Edition of Visual C++.  
  
## See Also  
 [MFC Library Versions](../mfc/mfc-library-versions.md)





