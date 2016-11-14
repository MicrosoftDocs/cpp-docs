---
title: "Redistributing an ATL application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, redistributing"
  - "redistributing ATL"
  - "redistributing OLE DB templates"
  - "OLE DB templates, redistributing"
ms.assetid: 9a696b22-2345-43ec-826b-be7cb8cfd676
caps.latest.revision: 16
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
# Redistributing an ATL application
Starting in Visual Studio 2012, Active Template Library (ATL) is a header-only library. ATL projects do not have a Dynamic Link to ATL option. No redistributable ATL library is required.  
  
 If you redistribute an ATL executable application, you must register the .exe file (and any controls inside it) by issuing the following command:  
  
```  
filename /regserver  
```  
  
 where `filename` is the name of the executable file.  
  
 In Visual Studio 2010, an ATL project can be built for a MinDependency or a MinSize configuration. A MinDependency configuration is what you get when you set the **Use of ATL** property to **Static Link to ATL** on the **General** property page and set the **Runtime Library** property to **Multi-threaded (/MT)** on the **Code Generation** property page (C/C++ folder).  
  
 A MinSize configuration is what you get when you set the **Use of ATL** property to **Dynamic Link to ATL** on the **General** property page, or set the **Runtime Library** property to **Multi-threaded DLL (/MD)** on the **Code Generation** property page (C/C++ folder).  
  
 MinSize makes the output file as small as possible but requires that ATL100.dll and Msvcr100.dll (if you selected the **Multi-threaded DLL (/MD)** option) are on the target computer. ATL100.dll should be registered on the target computer to ensure that all ATL functionality is present. ATL100.dll contains ANSI and Unicode exports.  
  
 If you build your ATL or OLE DB Templates project for a MinDependency target, you do not need to install and register ATL100.dll on the target computer, although you might get a larger program image.  
  
 If you redistribute an ATL executable application, you must register the .exe file (and any controls inside it) by issuing the following command:  
  
```  
filename /regserver  
```  
  
 where `filename` is the name of the executable file.  
  
 For OLE DB Templates applications, ensure that the target computer has the latest versions of Microsoft Data Access Components (MDAC) files. For more information, see [Redistributing Database Support Files](../ide/redistributing-database-support-files.md).  
  
## See Also  
 [Redistributing Visual C++ Files](../ide/redistributing-visual-cpp-files.md)