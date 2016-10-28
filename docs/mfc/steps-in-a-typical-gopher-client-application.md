---
title: "Steps in a Typical Gopher Client Application"
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
  - "WinInet classes, gopher"
  - "Internet applications, gopher client applications"
  - "Gopher client applications"
  - "Internet client applications, gopher table"
ms.assetid: 3e4e1869-5da0-453d-8ba9-b648c894bb90
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
# Steps in a Typical Gopher Client Application
The following table shows the steps you might perform in a typical gopher client application.  
  
|Your goal|Actions you take|Effects|  
|---------------|----------------------|-------------|  
|Begin a gopher session.|Create a [CInternetSession](../mfcref/cinternetsession-class.md) object.|Initializes WinInet and connects to server.|  
|Connect to a gopher server.|Use [CInternetSession::GetGopherConnection](../Topic/CInternetSession::GetGopherConnection.md).|Returns a [CGopherConnection](../mfcref/cgopherconnection-class.md) object.|  
|Find the first resource in the gopher.|Use [CGopherFileFind::FindFile](../Topic/CGopherFileFind::FindFile.md).|Finds the first file. Returns FALSE if no files are found.|  
|Find the next resource in the gopher.|Use [CGopherFileFind::FindNextFile](../Topic/CGopherFileFind::FindNextFile.md).|Finds the next file. Returns FALSE if the file is not found.|  
|Open the file found by **FindFile** or `FindNextFile` for reading.|Get a gopher locator using [CGopherFileFind::GetLocator](../Topic/CGopherFileFind::GetLocator.md). Use [CGopherConnection::OpenFile](../Topic/CGopherConnection::OpenFile.md).|Opens the file specified by the locator. `OpenFile` returns a [CGopherFile](../mfcref/cgopherfile-class.md) object.|  
|Open a file using a gopher locator you supply.|Create a gopher locator using [CGopherConnection::CreateLocator](../Topic/CGopherConnection::CreateLocator.md). Use [CGopherConnection::OpenFile](../Topic/CGopherConnection::OpenFile.md).|Opens the file specified by the locator. `OpenFile` returns a [CGopherFile](../mfcref/cgopherfile-class.md) object.|  
|Read from the file.|Use [CGopherFile](../mfcref/cgopherfile-class.md).|Reads the specified number of bytes, using a buffer you supply.|  
|Handle exceptions.|Use the [CInternetException](../mfcref/cinternetexception-class.md) class.|Handles all common Internet exception types.|  
|End the gopher session.|Dispose of the [CInternetSession](../mfcref/cinternetsession-class.md) object.|Automatically cleans up open file handles and connections.|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions--wininet-.md)   
 [Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)