---
title: "Win32 Predefined Symbols | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["Win32 [C++], predefined symbols", "symbols [C++], Win32 predefined", "Windows API [C++], predefined symbols"]
ms.assetid: 45c8e193-ee2a-4024-bfc2-34d1ec9c9239
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Win32 Predefined Symbols

These symbols are defined in the Win32 header files, and they support standard Windows application functions and actions. These symbols are mainly used with common UI elements. When you are working with controls in the resource editors, these symbols will appear in the [Properties Window](/visualstudio/ide/reference/properties-window) associated with common controls. For instance, if your toolbar should display the application icon, the icon will be associated with the symbol IDI_SMALL in the **Property Window**.

|||
|-|-|
|IDABORT|Control: Dialog box Abort button|
|IDC_STATIC|Control: Static text in a dialog box|
|IDCANCEL|Control: Dialog box Cancel button|
|IDD_ABOUTBOX|Dialog: Product About dialog box|
|IDI_PROJECTNAME|Icon: Current project icon|
|IDI_SMALL|Icon: Current project small icon|
|IDIGNORE|Control: Used with Ignore button on dialogs|
|IDM_ABOUT|Menu Item: Used with Help...About...|
|IDM_EXIT|Menu Item: Used with File...Exit...|
|IDNO|Control: Dialog box No button|
|IDOK|Control: Dialog box OK button|
|IDRETRY|Control: Dialog box Retry button|
|IDS_APP_TITLE|String: Current application name|
|IDYES|Control: Dialog box Yes button|

## Requirements

Win32

## See Also

[Predefined Symbol IDs](../windows/predefined-symbol-ids.md)  
[Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)