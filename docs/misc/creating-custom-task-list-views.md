---
title: "Creating Custom Task List Views | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Task List, custom views"
ms.assetid: c25f8f5d-55a1-4b5e-b617-3d1140bcb98a
caps.latest.revision: 13
manager: "douge"
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
# Creating Custom Task List Views
You can display a custom task list in Visual Studio by creating a custom task list view.  
  
 Use the registry to create a custom view and make these specifications:  
  
-   The columns  
  
-   The sort order for the columns  
  
-   The default sort order  
  
-   Task categories that you want displayed  
  
 You can display one custom category or specify CAT_ALL for multiple categories. You can also create custom text columns that contain any text. However, you cannot sort on custom text columns.  
  
 The following tables show the registry format for custom task list views.  
  
 In each of the tables, *VS Reg Root* is equal to HKEY_LOCAL_MACHINE\Software\Microsoft\VisualStudio\8.0\\. The tables provide the script entries and additional information for each registry statement.  
  
 [*VS Reg Root*\TaskList\Views\\*GUID*]  
  
|Name|Type|Range|Description|  
|----------|----------|-----------|-----------------|  
|Name|REG_SZ|Text|STRING name of the view or #xxx.<br /><br /> The Name can be a normal string like "My Custom View" or it can be a resource string within a package (#xxx).|  
|Package|REG_SZ|Text|[opt] STRING representation of GUID. This is required if some of your strings are resource strings (#xxx); otherwise, it is ignored.|  
  
 [*VS Reg Root*\TaskList\Views\\*GUID*\Columns\\*number*]  
  
> [!NOTE]
>  *number* is the 1-based order of the columns in the view (where 1 is the leftmost column). For more columns, increment *number*.  
  
|Name|Type|Range|Description|  
|----------|----------|-----------|-----------------|  
|Field|REG_DWORD||A <xref:Microsoft.VisualStudio.Shell.Interop.VSTASKFIELD> that is the field of the column.|  
|Width|REG_DWORD||Optional. The width of the column in pixels. If the column is not sizeable, this parameter is ignored.|  
|Index|REG_DWORD||Optional. If the Field is FLD_CUSTOM, this is the custom column index.|  
|Name|REG_SZ|Text|If Field is FLD_CUSTOM, this is the name of the custom column.<br /><br /> Name can also be a resource string in #xxx format.|  
|Filter|REG_SZ or REG_DWORD||Either a DWORD that has a built-in VSTASKCATEGORY or a STRING that represents the GUID of a custom category.|  
  
 [*VS Reg Root*\TaskList\Views\\*GUID*\Sort\\*number*]  
  
> [!NOTE]
>  *number* identifies the sort key. For example, for the primary sort key, *number* equals 1. For the secondary sort key, *number* equals 2, and so on.  
  
|Name|Type|Range|Description|  
|----------|----------|-----------|-----------------|  
|Field|REG_DWORD||A <xref:Microsoft.VisualStudio.Shell.Interop.VSTASKFIELD> that is the field of the column.|  
|Index|REG_DWORD||Optional. If the Field is FLD_CUSTOM, this is the custom column index.|  
  
 To implement a custom column, you must implement the <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2> interface on your task items and you must implement the following methods on that interface:  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2.get_CustomColumnText%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2.put_CustomColumnText%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2.IsCustomColumnReadOnly%2A>  
  
 When required, the task list queries your <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2> implementation by using a custom column number from a specific view, represented by *some guid*. If your task has the appropriate information about that column in that view, you supply information to that column, and specify whether that text is read-only.  
  
## See Also  
 [How to: Create Custom Categories of Task Lists](../misc/how-to-create-custom-categories-of-task-lists.md)