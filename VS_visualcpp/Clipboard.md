---
title: "Clipboard"
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
ms.assetid: a71b2824-1f14-4914-8816-54578d73ad4e
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
# Clipboard
This family of articles explains how to implement support for the Windows Clipboard in MFC applications. The Windows Clipboard is used in two ways:  
  
-   Implementing standard Edit menu commands, such as Cut, Copy, and Paste.  
  
-   Implementing uniform data transfer with drag and drop (OLE).  
  
 The Clipboard is the standard Windows method of transferring data between a source and a destination. It can also be very useful in OLE operations. With the advent of OLE, there are two Clipboard mechanisms in Windows. The standard Windows Clipboard API is still available, but it has been supplemented with the OLE data transfer mechanism. OLE uniform data transfer (UDT) supports Cut, Copy, and Paste with the Clipboard and drag and drop.  
  
 The Clipboard is a system service shared by the entire Windows session, so it does not have a handle or class of its own. You manage the Clipboard through member functions of class [CWnd](../VS_visualcpp/CWnd-Class.md).  
  
## What do you want to know more about?  
  
-   [When to use each Clipboard mechanism](../VS_visualcpp/Clipboard--When-to-Use-Each-Clipboard-Mechanism.md)  
  
-   [Using the traditional Windows Clipboard API](../VS_visualcpp/Clipboard--Using-the-Windows-Clipboard.md)  
  
-   [Using the OLE Clipboard mechanism](../VS_visualcpp/Clipboard--Using-the-OLE-Clipboard-Mechanism.md)  
  
-   [Copying and pasting data](../VS_visualcpp/Clipboard--Copying-and-Pasting-Data.md)  
  
-   [Adding other formats](../VS_visualcpp/Clipboard--Adding-Other-Formats.md)  
  
-   [The Windows Clipboard](https://msdn.microsoft.com/en-us/library/ms648709)  
  
-   [Implementing drag and drop (OLE)](../VS_visualcpp/Drag-and-Drop--OLE-.md)  
  
## See Also  
 [User Interface Elements](../VS_visualcpp/User-Interface-Elements--MFC-.md)