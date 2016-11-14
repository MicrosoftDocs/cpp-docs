---
title: "Resource Compiler Error RW2003 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RW2003"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RW2003"
ms.assetid: 9dc0ba70-6776-4aef-b316-5f1711d8e42e
caps.latest.revision: 6
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
# Resource Compiler Error RW2003
Generation Error  
  
### To fix by checking the following possible causes  
  
1.  **Error: Bitmap file resource-file is not in 3.00 format**  
  
     Bitmaps using the Windows version 2.x format cannot be used in version 3.x resource files. The bitmap must be redrawn or converted to 3.x format.  
  
2.  **Error: Old DIB in resource-name. Pass it through SDKPAINT**  
  
     A Device Independent Bitmap (DIB) in the specified resource is not compatible with the Windows 3.0 format. The bitmap must be redrawn or converted to the 3.x format.  
  
3.  **Error: Resource file resource-name is not in 3.00 format**  
  
     An icon or cursor in the specified resource used a format from a previous version of Windows. The icon or cursor must be redrawn or converted to the 3.x format.  
  
4.  **Unknown DIB header format**  
  
     The bitmap header is not a BITMAPCOREHEADER or BITMAPINFOHEADER structure.  
  
5.  **Unable to initialize symbol information**  
  
     This error occurs only in Visual C++. The probable cause is that you have too many open files or you cannot open or write to the data files needed for Visual C++ to import the symbols in your script. Visual C++ attempts to create these files in the directory specified by the **TMP** environment variable or the current directory if none is specified.  
  
6.  **Unable to save symbol information**  
  
     This error occurs only in Visual C++. The probable cause is that you have too many open files or you cannot close or write to the data files needed for Visual C++ to import the symbols in your script. Visual C++ attempts to use these files in the directory specified by the **TMP** environment variable or the current directory if none is specified.  
  
7.  **Bitmap file resource file is not in 2.03 format**  
  
     A bitmap used a format earlier than version 2.03. The bitmap must be converted or redrawn using the format for version 3.00 or later.  
  
8.  **Resource too large**  
  
     For Windows 3.1 a resource cannot exceed approximately 65000 bytes. If your resource does, then you will not be able to compile it with Visual C++ or the command-line resource compiler. This limit does not apply to cursors, icons, bitmaps, or other file-based resources.  
  
9. **Resource file is not in 3.00 format**  
  
     A cursor or icon used a format earlier than version 3.00. The resource must be converted or redrawn using the format for version 3.00 or later.  
  
10. **Unable to open temporary file**  
  
     The Resource Compiler/Visual C++ was unable to open a temporary file. The probable cause is either that you do not have write permissions for the directory or that the directory does not exist. The Resource Compiler/Visual C++ attempts to use these files in the directory specified by the **TMP** environment variable or the current directory if none is specified.