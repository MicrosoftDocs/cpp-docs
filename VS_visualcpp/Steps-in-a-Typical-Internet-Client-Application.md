---
title: "Steps in a Typical Internet Client Application"
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
ms.assetid: 7aba135c-7c15-4e2f-8c34-bbaf792c89a6
caps.latest.revision: 8
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
# Steps in a Typical Internet Client Application
The following table shows the steps you might perform in a typical Internet client application.  
  
|Your goal|Actions you take|Effects|  
|---------------|----------------------|-------------|  
|Begin an Internet session.|Create a [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Initializes WinInet and connects to server.|  
|Set an Internet query option (time-out limit or number of retries, for example).|Use [CInternetSession::SetOption](../Topic/CInternetSession::SetOption.md).|Returns FALSE if operation was unsuccessful.|  
|Establish a callback function to monitor the status of the session.|Use [CInternetSession::EnableStatusCallback](../Topic/CInternetSession::EnableStatusCallback.md).|Establishes a callback to [CInternetSession::OnStatusCallback](../Topic/CInternetSession::OnStatusCallback.md). Override `OnStatusCallback` to create your own callback routine.|  
|Connect to an Internet server, intranet server, or local file.|Use [CInternetSession::OpenURL](../Topic/CInternetSession::OpenURL.md).|Parses the URL and opens a connection to the specified server. Returns a [CStdioFile](../VS_visualcpp/CStdioFile-Class.md) (if you pass `OpenURL` a local file name). This is the object through which you access data retrieved from the server or file.|  
|Read from the file.|Use [CInternetFile::Read](../Topic/CInternetFile::Read.md).|Reads the specified number of bytes using a buffer you supply.|  
|Handle exceptions.|Use the [CInternetException](../VS_visualcpp/CInternetException-Class.md) class.|Handles all common Internet exception types.|  
|End the Internet session.|Dispose of the [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Automatically cleans up open file handles and connections.|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../VS_visualcpp/Win32-Internet-Extensions--WinInet-.md)   
 [Prerequisites for Internet Client Classes](../VS_visualcpp/Prerequisites-for-Internet-Client-Classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../VS_visualcpp/Writing-an-Internet-Client-Application-Using-MFC-WinInet-Classes.md)