---
title: "MFC Classes for Creating Internet Client Applications"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC, WinInet classes"
  - "WinInet classes, classes"
  - "classes [C++], MFC"
  - "Internet client applications, MFC"
  - "Internet applications, MFC"
ms.assetid: 67d34117-9839-4f4b-8bb8-0e4a9471c606
caps.latest.revision: 7
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
# MFC Classes for Creating Internet Client Applications
MFC provides the following classes and global functions for writing Internet client applications. Indentation indicates a class is derived from the unindented class above it. `CGopherFile` and `CHttpFile` derive from `CInternetFile`, for example. These classes and global functions are declared in AFXINET.H, except `CFileFind`, which is declared in AFX.H.  
  
## Classes  
  
-   [CInternetSession](../mfcref/cinternetsession-class.md)  
  
-   [CInternetConnection](../mfcref/cinternetconnection-class.md)  
  
    -   [CFtpConnection](../mfcref/cftpconnection-class.md)  
  
    -   [CGopherConnection](../mfcref/cgopherconnection-class.md)  
  
    -   [CHttpConnection](../mfcref/chttpconnection-class.md)  
  
-   [CInternetFile](../mfcref/cinternetfile-class.md)  
  
    -   [CGopherFile](../mfcref/cgopherfile-class.md)  
  
    -   [CHttpFile](../mfcref/chttpfile-class.md)  
  
-   [CFileFind](../mfcref/cfilefind-class.md)  
  
    -   [CFtpFileFind](../mfcref/cftpfilefind-class.md)  
  
    -   [CGopherFileFind](../mfcref/cgopherfilefind-class.md)  
  
-   [CGopherLocator](../mfcref/cgopherlocator-class.md)  
  
-   [CInternetException](../mfcref/cinternetexception-class.md)  
  
## Global Functions  
  
-   [AfxParseURL](../Topic/AfxParseURL.md)  
  
-   [AfxGetInternetHandleType](../Topic/AfxGetInternetHandleType.md)  
  
-   [AfxThrowInternetException](../Topic/AfxThrowInternetException.md)  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions--wininet-.md)   
 [Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)