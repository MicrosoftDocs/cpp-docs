---
title: "Steps in a Typical HTTP Client Application | Microsoft Docs"
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
  - "HTTP client applications"
  - "client applications [C++], HTTP"
  - "Internet applications [C++], HTTP client applications"
  - "applications [MFC], HTTP client"
  - "Internet client applications [C++], HTTP table"
  - "WinInet classes, HTTP"
ms.assetid: f86552e8-8acd-4b23-bdc5-0c3a247ebd74
caps.latest.revision: 9
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
# Steps in a Typical HTTP Client Application
The following table shows the steps you might perform in a typical HTTP client application:  
  
|Your goal|Actions you take|Effects|  
|---------------|----------------------|-------------|  
|Begin an HTTP session.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Initializes WinInet and connects to server.|  
|Connect to an HTTP server.|Use [CInternetSession::GetHttpConnection](../mfc/reference/cinternetsession-class.md#cinternetsession__gethttpconnection).|Returns a [CHttpConnection](../mfc/reference/chttpconnection-class.md) object.|  
|Open an HTTP request.|Use [CHttpConnection::OpenRequest](../mfc/reference/chttpconnection-class.md#chttpconnection__openrequest).|Returns a [CHttpFile](../mfc/reference/chttpfile-class.md) object.|  
|Send an HTTP request.|Use [CHttpFile::AddRequestHeaders](../mfc/reference/chttpfile-class.md#chttpfile__addrequestheaders) and [CHttpFile::SendRequest](../mfc/reference/chttpfile-class.md#chttpfile__sendrequest).|Finds the file. Returns FALSE if the file is not found.|  
|Read from the file.|Use [CHttpFile](../mfc/reference/chttpfile-class.md).|Reads the specified number of bytes using a buffer you supply.|  
|Handle exceptions.|Use the [CInternetException](../mfc/reference/cinternetexception-class.md) class.|Handles all common Internet exception types.|  
|End the HTTP session.|Dispose of the [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Automatically cleans up open file handles and connections.|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
