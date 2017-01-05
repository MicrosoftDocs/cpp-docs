---
title: "Linker Tools Error LNK2005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2005"
ms.assetid: d9587adc-68be-425c-8a30-15dbc86717a4
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
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
# Linker Tools Error LNK2005
symbol already defined in object  
  
The given `symbol`, displayed in its decorated form, was multiply defined.  
  
For more information, see the Knowledge Base articles:  
  
-   [A LNK2005 error occurs when the CRT library and MFC libraries are linked in the wrong order in Visual C++](https://support.microsoft.com/kb/148652)  
  
-   [FIX: Global Overloaded Delete Operator Causes LNK2005](https://support.microsoft.com/kb/140440)  
  
-   [You receive LNK2005 errors when you compile an ATL executable (.exe) project in Visual C++](https://support.microsoft.com/kb/184235).  
  
This error is followed by fatal error [LNK1169](../../error-messages/tool-errors/linker-tools-error-lnk1169.md).  
  
### To fix by checking the following possible causes  
  
1.  Mixing static and dynamic libraries when also using [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
2.  The symbol is a packaged function (created by compiling with [/Gy](../../build/reference/gy-enable-function-level-linking.md)) and was included in more than one file but was changed between compilations. Recompile all files that include `symbol`.  
  
3.  The symbol is defined differently in two member objects in different libraries, and both member objects were used.  
  
4.  An absolute is defined twice, with a different value in each definition.  
  
5.  A header file declared and defined a variable. Possible solutions include:  
  
    -   Declare the variable in .h: `extern BOOL MyBool;` and then assign to it in a .c or .cpp file: `BOOL MyBool = FALSE;`.  
  
    -   Declare the variable [static](../../cpp/storage-classes-cpp.md#static).  
  
    -   Declare the variable [selectany](../../cpp/selectany.md).  
  
6.  If you use uuid.lib in combination with other .lib files that define GUIDs (for example, oledb.lib and adsiid.lib). For example:  
  
    ```  
    oledb.lib(oledb_i.obj) : error LNK2005: _IID_ITransactionObject  
    already defined in uuid.lib(go7.obj)  
    ```  
  
     To fix, add [/FORCE:MULTIPLE](../../build/reference/force-force-file-output.md) to the linker command line options, and make sure that uuid.lib is the first library referenced.