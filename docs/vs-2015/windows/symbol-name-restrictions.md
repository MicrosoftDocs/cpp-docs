---
title: "Symbol Name Restrictions | Microsoft Docs"
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
  - "vc.editors.symbol.restrictions.name"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbol names"
  - "symbols, names"
  - "restrictions, symbol names"
ms.assetid: 4ae7f695-ca86-4f4b-989a-fe6f89650ff7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Symbol Name Restrictions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Symbol Name Restrictions](https://docs.microsoft.com/cpp/windows/symbol-name-restrictions).  
  
  
The restrictions on symbol names are as follows:  
  
-   All [symbols](../mfc/symbols-resource-identifiers.md) must be unique within the scope of the application. This prevents conflicting symbol definitions in the header files.  
  
-   Valid characters for a symbol name include A-Z, a-z, 0-9, and underscores ( _ ).  
  
-   Symbol names cannot begin with a number and are limited to 247 characters.  
  
-   Symbol names cannot contain spaces.  
  
-   Symbol names are not case sensitive, but the case of the first symbol definition is preserved. The header file that defines the symbols is used by both the resource compiler/editor and C++ program(s) to refer resources defined in a resource file. For two symbol names that differ only in case, the C++ program will see two separate symbols while the resource compiler/editor will see both names as referring to one single symbol.  
  
    > [!NOTE]
    >  If you do not follow the standard symbol name scheme (ID*_[keyword]) outlined below, and your symbol name happens to be the same as a keyword known to the resource script compiler, trying to build the resource script file will result in seemingly random error generation that is difficult to diagnose. To prevent this, adhere to the standard naming scheme.  
  
 Symbol names have descriptive prefixes that indicate the kind of resource or object they represent. These descriptive prefixes begin with the text combination ID. The Microsoft Foundation Class Library (MFC) uses the symbol naming conventions shown in the following table.  
  
|Category|Prefix|Use|  
|--------------|------------|---------|  
|Resources|IDR_ IDD_ IDC_ IDI_ IDB_|Accelerator or menu (and associated or custom resources) Dialog box Cursor Icon Bitmap|  
|Menu items|ID_|Menu item|  
|Commands|ID_|Command|  
|Controls and child windows|IDC_|Control|  
|Strings|IDS_|String in the string table|  
|MFC|AFX_|Reserved for predefined MFC symbols|  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requirements  
 Win32  
  
## See Also  
 [Changing a Symbol or Symbol Name (ID)](../windows/changing-a-symbol-or-symbol-name-id.md)   
 [Symbol Value Restrictions](../windows/symbol-value-restrictions.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)

