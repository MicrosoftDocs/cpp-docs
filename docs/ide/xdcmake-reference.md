---
title: "XDCMake Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "xdcmake"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "xdcmake program"
ms.assetid: 14e65747-d000-4343-854b-8393bf01cbac
caps.latest.revision: 17
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
# XDCMake Reference
xdcmake.exe is a program that compiles .xdc files into an .xml file. An .xdc file is created by the Visual C++ compiler for each source code file when source code is compiled with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) and when the source code file contains documentation comments marked up with XML tags.  
  
### To use xdcmake.exe in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
2.  Open the **Configuration Properties** folder.  
  
3.  Click the **XML Document Comments** property page.  
  
> [!NOTE]
>  xdcmake.exe options at the command line differ from the options when xdcmake.exe is used in the development environment (property pages). For information on using xdcmake.exe in the development environment, see [XML Document Generator Tool Property Pages](../ide/xml-document-generator-tool-property-pages.md).  
  
## Syntax  
 xdcmake `input_filename options`  
  
## Parameters  
 where:  
  
 `input_filename`  
 The file name of the .xdc files used as input to xdcmake.exe. Specify one or more .xdc files or use *.xdc to use all .xdc files in the current directory.  
  
 `options`  
 Zero or more of the following:  
  
|Option|Description|  
|------------|-----------------|  
|/?, /help|Display help for xdcmake.exe.|  
|/assembly:*filename*|Lets you specify the value of the \<assembly> tag in the .xml file.  By default, the value of the \<assembly> tag is the same as the filename of the .xml file.|  
|/nologo|Suppress copyright message.|  
|/out:*filename*|Lets you specify the name of the .xml file.  By default, the name of the .xml file is the filename of the first .xdc file processed by xdcmake.exe.|  
  
## Remarks  
 Visual Studio will invoke xdcmake.exe automatically when building a project. You can also invoke xdcmake.exe at the command line.  
  
 See [Recommended Tags for Documentation Comments](../ide/recommended-tags-for-documentation-comments-visual-cpp.md) for more information on adding documentation comments to source code files.  
  
## See Also  
 [XML Documentation](../ide/xml-documentation-visual-cpp.md)