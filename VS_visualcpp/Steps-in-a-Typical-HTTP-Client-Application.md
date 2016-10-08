---
title: "Steps in a Typical HTTP Client Application"
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
ms.assetid: f86552e8-8acd-4b23-bdc5-0c3a247ebd74
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
# Steps in a Typical HTTP Client Application
The following table shows the steps you might perform in a typical HTTP client application:  
  
|Your goal|Actions you take|Effects|  
|---------------|----------------------|-------------|  
|Begin an HTTP session.|Create a [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Initializes WinInet and connects to server.|  
|Connect to an HTTP server.|Use [CInternetSession::GetHttpConnection](../Topic/CInternetSession::GetHttpConnection.md).|Returns a [CHttpConnection](../VS_visualcpp/CHttpConnection-Class.md) object.|  
|Open an HTTP request.|Use [CHttpConnection::OpenRequest](../Topic/CHttpConnection::OpenRequest.md).|Returns a [CHttpFile](../VS_visualcpp/CHttpFile-Class.md) object.|  
|Send an HTTP request.|Use [CHttpFile::AddRequestHeaders](../Topic/CHttpFile::AddRequestHeaders.md) and [CHttpFile::SendRequest](../Topic/CHttpFile::SendRequest.md).|Finds the file. Returns FALSE if the file is not found.|  
|Read from the file.|Use [CHttpFile](../VS_visualcpp/CHttpFile-Class.md).|Reads the specified number of bytes using a buffer you supply.|  
|Handle exceptions.|Use the [CInternetException](../VS_visualcpp/CInternetException-Class.md) class.|Handles all common Internet exception types.|  
|End the HTTP session.|Dispose of the [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Automatically cleans up open file handles and connections.|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../VS_visualcpp/Win32-Internet-Extensions--WinInet-.md)   
 [Prerequisites for Internet Client Classes](../VS_visualcpp/Prerequisites-for-Internet-Client-Classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../VS_visualcpp/Writing-an-Internet-Client-Application-Using-MFC-WinInet-Classes.md)