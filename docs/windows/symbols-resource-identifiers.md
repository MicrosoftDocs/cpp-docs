---
title: "Symbols: Resource Identifiers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.symbol.identifiers"]
dev_langs: ["C++"]
helpviewer_keywords: ["symbols, resource identifiers", "symbols, creating", "resource symbols", "symbols, editing", "resource editors, resource symbols"]
ms.assetid: 8fccc09a-0237-4a65-b9c4-57d60c59e324
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Symbols: Resource Identifiers
A symbol is a resource identifier (ID) that consists of two parts: a text string (symbol name) mapped to an integer value (symbol value). For example:  
  
```  
IDC_EDITNAME = 5100  
```  
  
 Symbol names are most often referred to as identifiers.  
  
 Symbols provide a descriptive way of referring to resources and user-interface objects, both in your source code and while you're working with them in the resource editors. You can view and manipulate symbols in one convenient place using the [Resource Symbols dialog box](../windows/viewing-resource-symbols.md).  
  
 When you create a new resource or resource object, the [resource editors](../windows/resource-editors.md) provide a default name for the resource, for example, `IDC_RADIO1`, and assign a value to it. The name-plus-value definition is stored in the Resource.h file.  
  
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
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
## Requirements  
 Win32  
  
## See Also  
 [How to: Search for Symbols in Resources](../windows/how-to-search-for-symbols-in-resources.md)   
 [Resource Editors](../windows/resource-editors.md)   
 [Resource Files](../windows/resource-files-visual-studio.md)