---
title: "Predefined Symbol IDs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbols, predefined IDs"
  - "predefined symbol IDs"
ms.assetid: 91a5d610-1a04-47e8-b8a4-63ad650a90df
caps.latest.revision: 9
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
# Predefined Symbol IDs
When you begin a new project, depending on the project type, some symbol IDs are predefined for your use. These symbol IDs support the various libraries and project types such as MFC. They represent common tasks that are usually included in any application, or actions of hardware items, such as a mouse or printer.  
  
 These symbol IDs become important when working with resources. They are available when you edit Accelerator tables; some of them are already associated with virtual keys. They are also available to you through the [Properties window](/visualstudio/ide/reference/properties-window). You can assign any of the predefined symbol IDs to new resources, or you can assign accelerator keys to them, and the functionality associated with the symbol ID automatically associates with that key combination.  
  
 These libraries have predefined symbols that will appear as part of the project:  
  
-   [MFC Predefined Symbols](../windows/mfc-predefined-symbols.md)  
  
-   [ATL Predefined Symbols](../windows/atl-predefined-symbols.md)  
  
-   [Win32 Predefined Symbols](../windows/win32-predefined-symbols.md)  
  
    > [!NOTE]
    >  Predefined symbols are always read-only.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 Win32, MFC, or ATL  
  
## See Also  
 [Symbols: Resource Identifiers](../mfc/symbols-resource-identifiers.md)