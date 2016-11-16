---
title: "Creating New Symbols | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.symbol.creating"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "New Symbol dialog box"
  - "symbols, creating"
ms.assetid: 35168d31-3af6-4ecd-9362-3707d47b53f3
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
# Creating New Symbols
When you are beginning a new project, you may find it convenient to map out the symbol names you need before creating the resources to which they will be assigned.  
  
### To create a new symbol using the resource symbols dialog box  
  
1.  In the [Resource Symbols dialog box](../windows/resource-symbols-dialog-box.md), choose **New**.  
  
2.  In the **Name** box, type a symbol name.  
  
3.  Accept the assigned symbol value.  
  
     -or-  
  
     In the **Value** box, type a new value.  
  
4.  Click **OK** to add the new symbol to the symbol list.  
  
 If you type a symbol name that already exists, a message box appears stating that a symbol with that name is already defined. You cannot define two or more symbols with the same name, but you can define different symbols with the same numeric value. For more information, see [Symbol Name Restrictions](../windows/symbol-name-restrictions.md) and [Symbol Value Restrictions](../windows/symbol-value-restrictions.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Viewing Resource Symbols](../windows/viewing-resource-symbols.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)