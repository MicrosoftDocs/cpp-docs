---
title: "MFC Classes for Creating Internet Client Applications"
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
ms.assetid: 67d34117-9839-4f4b-8bb8-0e4a9471c606
caps.latest.revision: 7
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
# MFC Classes for Creating Internet Client Applications
MFC provides the following classes and global functions for writing Internet client applications. Indentation indicates a class is derived from the unindented class above it. `CGopherFile` and `CHttpFile` derive from `CInternetFile`, for example. These classes and global functions are declared in AFXINET.H, except `CFileFind`, which is declared in AFX.H.  
  
## Classes  
  
-   [CInternetSession](../VS_visualcpp/CInternetSession-Class.md)  
  
-   [CInternetConnection](../VS_visualcpp/CInternetConnection-Class.md)  
  
    -   [CFtpConnection](../VS_visualcpp/CFtpConnection-Class.md)  
  
    -   [CGopherConnection](../VS_visualcpp/CGopherConnection-Class.md)  
  
    -   [CHttpConnection](../VS_visualcpp/CHttpConnection-Class.md)  
  
-   [CInternetFile](../VS_visualcpp/CInternetFile-Class.md)  
  
    -   [CGopherFile](../VS_visualcpp/CGopherFile-Class.md)  
  
    -   [CHttpFile](../VS_visualcpp/CHttpFile-Class.md)  
  
-   [CFileFind](../VS_visualcpp/CFileFind-Class.md)  
  
    -   [CFtpFileFind](../VS_visualcpp/CFtpFileFind-Class.md)  
  
    -   [CGopherFileFind](../VS_visualcpp/CGopherFileFind-Class.md)  
  
-   [CGopherLocator](../VS_visualcpp/CGopherLocator-Class.md)  
  
-   [CInternetException](../VS_visualcpp/CInternetException-Class.md)  
  
## Global Functions  
  
-   [AfxParseURL](../Topic/AfxParseURL.md)  
  
-   [AfxGetInternetHandleType](../Topic/AfxGetInternetHandleType.md)  
  
-   [AfxThrowInternetException](../Topic/AfxThrowInternetException.md)  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../VS_visualcpp/Win32-Internet-Extensions--WinInet-.md)   
 [Prerequisites for Internet Client Classes](../VS_visualcpp/Prerequisites-for-Internet-Client-Classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../VS_visualcpp/Writing-an-Internet-Client-Application-Using-MFC-WinInet-Classes.md)