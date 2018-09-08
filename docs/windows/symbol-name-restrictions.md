---
title: "Symbol Name Restrictions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.symbol.restrictions.name"]
dev_langs: ["C++"]
helpviewer_keywords: ["symbol names", "symbols [C++], names", "restrictions, symbol names"]
ms.assetid: 4ae7f695-ca86-4f4b-989a-fe6f89650ff7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Symbol Name Restrictions

The restrictions on symbol names are as follows:

- All [symbols](../windows/symbols-resource-identifiers.md) must be unique within the scope of the application. This prevents conflicting symbol definitions in the header files.

- Valid characters for a symbol name include A-Z, a-z, 0-9, and underscores ( _ ).

- Symbol names cannot begin with a number and are limited to 247 characters.

- Symbol names cannot contain spaces.

- Symbol names are not case sensitive, but the case of the first symbol definition is preserved. The header file that defines the symbols is used by both the resource compiler/editor and C++ program(s) to refer resources defined in a resource file. For two symbol names that differ only in case, the C++ program will see two separate symbols while the resource compiler/editor will see both names as referring to one single symbol.

   > [!NOTE]
   > If you do not follow the standard symbol name scheme (ID*_[keyword]) outlined below, and your symbol name happens to be the same as a keyword known to the resource script compiler, trying to build the resource script file will result in seemingly random error generation that is difficult to diagnose. To prevent this, adhere to the standard naming scheme.

Symbol names have descriptive prefixes that indicate the kind of resource or object they represent. These descriptive prefixes begin with the text combination ID. The Microsoft Foundation Class Library (MFC) uses the symbol naming conventions shown in the following table.

|Category|Prefix|Use|
|--------------|------------|---------|
|Resources|IDR_ IDD_ IDC_ IDI_ IDB_|Accelerator or menu (and associated or custom resources) Dialog box Cursor Icon Bitmap|
|Menu items|ID_|Menu item|
|Commands|ID_|Command|
|Controls and child windows|IDC_|Control|
|Strings|IDS_|String in the string table|
|MFC|AFX_|Reserved for predefined MFC symbols|

## Requirements

Win32

## See Also

[Changing a Symbol or Symbol Name (ID)](../windows/changing-a-symbol-or-symbol-name-id.md)  
[Symbol Value Restrictions](../windows/symbol-value-restrictions.md)  
[Predefined Symbol IDs](../windows/predefined-symbol-ids.md)