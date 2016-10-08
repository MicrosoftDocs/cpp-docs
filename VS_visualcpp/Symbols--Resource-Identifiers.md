---
title: "Symbols: Resource Identifiers"
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
ms.assetid: 8fccc09a-0237-4a65-b9c4-57d60c59e324
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Symbols: Resource Identifiers
A symbol is a resource identifier (ID) that consists of two parts: a text string (symbol name) mapped to an integer value (symbol value). For example:  
  
```  
IDC_EDITNAME = 5100  
```  
  
 Symbol names are most often referred to as identifiers.  
  
 Symbols provide a descriptive way of referring to resources and user-interface objects, both in your source code and while you're working with them in the resource editors. You can view and manipulate symbols in one convenient place using the [Resource Symbols dialog box](../VS_visualcpp/Viewing-Resource-Symbols.md).  
  
 When you create a new resource or resource object, the [resource editors](../VS_visualcpp/Resource-Editors.md) provide a default name for the resource, for example, `IDC_RADIO1`, and assign a value to it. The name-plus-value definition is stored in the Resource.h file.  
  
> [!NOTE]
>  When you are copying resources or resource objects from one .rc file to another, Visual C++ may change the transferred resource's symbol value, or symbol name and value, to avoid conflicts with symbol names or values in the existing file.  
  
 As your application grows in size and sophistication, so does its number of resources and symbols. Tracking large numbers of symbols scattered throughout several files can be difficult. The [Resource Symbols dialog box](../VS_visualcpp/Resource-Symbols-Dialog-Box.md) simplifies symbol management by offering a central tool through which you can:  
  
-   [View Resource Symbols](../VS_visualcpp/Viewing-Resource-Symbols.md)  
  
-   [Create New Symbols](../VS_visualcpp/Creating-New-Symbols.md)  
  
-   [Change Unassigned Symbols](../VS_visualcpp/Changing-Unassigned-Symbols.md)  
  
-   [Delete Unassigned Symbols](../VS_visualcpp/Deleting-Unassigned-Symbols.md)  
  
-   [Open the Resource Editor for a Given Symbol](../VS_visualcpp/Opening-the-Resource-Editor-for-a-Given-Symbol.md)  
  
-   [Change a Symbol or Symbol Name (ID)](../VS_visualcpp/Changing-a-Symbol-or-Symbol-Name--ID-.md)  
  
-   [Change a Symbol's Numeric Value](../VS_visualcpp/Changing-a-Symbol-s-Numeric-Value.md)  
  
-   [Change the Names of Symbol Header Files](../VS_visualcpp/Changing-the-Names-of-Symbol-Header-Files.md)  
  
-   [Include Shared (Read-Only) or Calculated Symbols](../VS_visualcpp/Including-Shared--Read-Only--or-Calculated-Symbols.md)  
  
-   [View Predefined Symbol IDs](../VS_visualcpp/Predefined-Symbol-IDs.md)  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requirements  
 Win32  
  
## See Also  
 [How to: Search for Symbols in Resources](../VS_visualcpp/How-to--Search-for-Symbols-in-Resources.md)   
 [Resource Editors](../VS_visualcpp/Resource-Editors.md)   
 [Resource Files](../VS_visualcpp/Resource-Files--Visual-Studio-.md)