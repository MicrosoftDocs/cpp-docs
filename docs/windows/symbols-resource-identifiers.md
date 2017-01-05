---
title: "Symbols: Resource Identifiers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.symbol.identifiers"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbols, resource identifiers"
  - "symbols, creating"
  - "resource symbols"
  - "symbols, editing"
  - "resource editors, resource symbols"
ms.assetid: 8fccc09a-0237-4a65-b9c4-57d60c59e324
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Symbols: Resource Identifiers
A symbol is a resource identifier (ID) that consists of two parts: a text string (symbol name) mapped to an integer value (symbol value). For example:  
  
```  
IDC_EDITNAME = 5100  
```  
  
 Symbol names are most often referred to as identifiers.  
  
 Symbols provide a descriptive way of referring to resources and user-interface objects, both in your source code and while you're working with them in the resource editors. You can view and manipulate symbols in one convenient place using the [Resource Symbols dialog box](../windows/viewing-resource-symbols.md).  
  
 When you create a new resource or resource object, the [resource editors](../mfc/resource-editors.md) provide a default name for the resource, for example, `IDC_RADIO1`, and assign a value to it. The name-plus-value definition is stored in the Resource.h file.  
  
> [!NOTE]
>  When you are copying resources or resource objects from one .rc file to another, Visual C++ may change the transferred resource's symbol value, or symbol name and value, to avoid conflicts with symbol names or values in the existing file.  
  
 As your application grows in size and sophistication, so does its number of resources and symbols. Tracking large numbers of symbols scattered throughout several files can be difficult. The [Resource Symbols dialog box](../windows/resource-symbols-dialog-box.md) simplifies symbol management by offering a central tool through which you can:  
  
- [View Resource Symbols](../windows/viewing-resource-symbols.md)  
  
- [Create New Symbols](../windows/creating-new-symbols.md)  
  
- [Change Unassigned Symbols](../windows/changing-unassigned-symbols.md)  
  
- [Delete Unassigned Symbols](../windows/deleting-unassigned-symbols.md)  
  
- [Open the Resource Editor for a Given Symbol](../windows/opening-the-resource-editor-for-a-given-symbol.md)  
  
- [Change a Symbol or Symbol Name (ID)](../windows/changing-a-symbol-or-symbol-name-id.md)  
  
- [Change a Symbol's Numeric Value](../windows/changing-a-symbol-s-numeric-value.md)  
  
- [Change the Names of Symbol Header Files](../windows/changing-the-names-of-symbol-header-files.md)  
  
- [Include Shared (Read-Only) or Calculated Symbols](../windows/including-shared-read-only-or-calculated-symbols.md)  
  
- [View Predefined Symbol IDs](../windows/predefined-symbol-ids.md)  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 Win32  
  
## See Also  
 [How to: Search for Symbols in Resources](../windows/how-to-search-for-symbols-in-resources.md)   
 [Resource Editors](../mfc/resource-editors.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)

