---
title: "Opening Files"
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
ms.assetid: a991b8ec-b04a-4766-b47e-7485b5dd0b01
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Opening Files
In MFC, the most common way to open a file is a two-stage process.  
  
#### To open a file  
  
1.  Create the file object without specifying a path or permission flags.  
  
     You usually create a file object by declaring a [CFile](../VS_visualcpp/CFile-Class.md) variable on the stack frame.  
  
2.  Call the [Open](../Topic/CFile::Open.md) member function for the file object, supplying a path and permission flags.  
  
     The return value for `Open` will be nonzero if the file was opened successfully or 0 if the specified file could not be opened. The `Open` member function is prototyped as follows:  
  
     `virtual BOOL Open( LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL );`  
  
     The open flags specify which permissions, such as read-only, you want for the file. The possible flag values are defined as enumerated constants within the `CFile` class, so they are qualified with "`CFile::`" as in `CFile::modeRead`. Use the `CFile::modeCreate` flag if you want to create the file.  
  
 The following example shows how to create a new file with read/write permission (replacing any previous file with the same path):  
  
 [!CODE [NVC_MFCFiles#1](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCFiles#1)]  
  
> [!NOTE]
>  This example creates and opens a file. If there are problems, the `Open` call can return a `CFileException` object in its last parameter, as shown here. The `TRACE` macro prints both the file name and a code indicating the reason for failure. You can call the `AfxThrowFileException` function if you require more detailed error reporting.  
  
## See Also  
 [CFile Class](../VS_visualcpp/CFile-Class.md)   
 [CFile::Open](../Topic/CFile::Open.md)   
 [Files](../VS_visualcpp/Files-in-MFC.md)