---
title: "Symbol Value Restrictions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.symbol.restrictions.value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbols, value restrictions"
  - "restrictions, symbol values"
ms.assetid: 32467ec3-690b-4cd0-a4d0-7d189a3296cb
caps.latest.revision: 7
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
# Symbol Value Restrictions
A symbol value can be any integer expressed in the normal manner for #define preprocessor directives. Here are some examples of symbol values:  
  
```  
18  
4001  
0x0012  
-3456  
```  
  
 Symbol values for resources (accelerators, bitmaps, cursors, dialog boxes, icons, menus, string tables, and version information) must be decimal numbers in the range from 0 to 32,767 (but cannot be hexadecimal). Symbol values for parts of resources, such as dialog box controls or individual strings in the string table, can be from 0 to 65,534 or from -32,768 to 32,767.  
  
 Resource symbols are 16 bit numbers. You may enter them as signed or unsigned, however, they are used internally as unsigned integers. So negative numbers will be cast to their corresponding positive value.  
  
 Here are some limitations of symbol values:  
  
-   The Visual Studio development environment and MFC use some number ranges for special purposes. All numbers with the most significant bit set (-32,768 to -1 or 32,768 to 65,534, depending on sign) are reserved by MFC.  
  
-   You cannot define a symbol value using other symbol strings. For example, the following symbol definition is not supported:  
  
    ```  
    #define IDC_MYEDIT  IDC_OTHEREDIT  //not supported  
    ```  
  
-   You cannot use preprocessor macros with arguments as value definitions. For example:  
  
    ```  
    #define   IDD_ABOUT  ID(7) //not supported  
    ```  
  
     is not a valid expression regardless of what `ID` evaluates to at compile time.  
  
-   Your application may have an existing file containing symbols defined with expressions. For more information on how to include the symbols as read-only symbols, see [Using Shared (Read Only) or Calculated Symbols](../windows/including-shared-read-only-or-calculated-symbols.md).  
  
 For more information on number ranges, see [TN023: Standard MFC Resources](../mfc/tn023-standard-mfc-resources.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 Win32  
  
## See Also  
 [Changing a Symbol's Numeric Value](../windows/changing-a-symbol-s-numeric-value.md)   
 [Symbol Name Restrictions](../windows/symbol-name-restrictions.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)