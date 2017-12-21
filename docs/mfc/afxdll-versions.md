---
title: "AFXDLL Versions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["afxdll"]
dev_langs: ["C++"]
helpviewer_keywords: ["MFC DLLs [MFC], dynamic linking to library", "AFXDLL library", "application wizards [MFC], default uses AFXDLL", "MFC libraries [MFC], dynamic linking", "MFC, AFXDLL version", "DLL version of MFC [MFC]"]
ms.assetid: c078ae8f-85a9-43cb-9ded-c09ca2c45723
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# AFXDLL Versions
Instead of building your application by statically linking to the MFC object-code libraries, you can build your application to use one of the AFXDLL libraries, which contain MFC in a DLL that multiple running applications can share. For a table of AFXDLL names, see [DLLs: Naming Conventions](../build/naming-conventions-for-mfc-dlls.md).  
  
> [!NOTE]
>  By default, the MFC Application Wizard creates an AFXDLL project. To use static linking of MFC code instead, set the **Use MFC in a static library** option in the MFC Application Wizard. Static linking is not available in the Standard Edition of Visual C++.  
  
## See Also  
 [MFC Library Versions](../mfc/mfc-library-versions.md)

