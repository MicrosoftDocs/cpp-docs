---
title: "XDCMake Reference"
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
ms.assetid: 14e65747-d000-4343-854b-8393bf01cbac
caps.latest.revision: 17
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
# XDCMake Reference
xdcmake.exe is a program that compiles .xdc files into an .xml file. An .xdc file is created by the Visual C++ compiler for each source code file when source code is compiled with [/doc](../VS_visualcpp/-doc--Process-Documentation-Comments---C-C---.md) and when the source code file contains documentation comments marked up with XML tags.  
  
### To use xdcmake.exe in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Open the **Configuration Properties** folder.  
  
3.  Click the **XML Document Comments** property page.  
  
> [!NOTE]
>  xdcmake.exe options at the command line differ from the options when xdcmake.exe is used in the development environment (property pages). For information on using xdcmake.exe in the development environment, see [XML Document Generator Tool Property Pages](../VS_visualcpp/XML-Document-Generator-Tool-Property-Pages.md).  
  
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
|/assembly:*filename*|Lets you specify the value of the <assembly\> tag in the .xml file.  By default, the value of the <assembly\> tag is the same as the filename of the .xml file.|  
|/nologo|Suppress copyright message.|  
|/out:*filename*|Lets you specify the name of the .xml file.  By default, the name of the .xml file is the filename of the first .xdc file processed by xdcmake.exe.|  
  
## Remarks  
 Visual Studio will invoke xdcmake.exe automatically when building a project. You can also invoke xdcmake.exe at the command line.  
  
 See [Recommended Tags for Documentation Comments](../VS_visualcpp/Recommended-Tags-for-Documentation-Comments--Visual-C---.md) for more information on adding documentation comments to source code files.  
  
## See Also  
 [XML Documentation](../VS_visualcpp/XML-Documentation--Visual-C---.md)