---
title: "Steps in a Typical FTP Client Application"
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
ms.assetid: 70bed7b5-6040-40d1-bc77-702e63a698f2
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
# Steps in a Typical FTP Client Application
A typical FTP client application creates a [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) and a [CFtpConnection](../VS_visualcpp/CFtpConnection-Class.md) object. Note that these MFC WinInet classes do not actually control the proxy type settings; IIS does.  
  
 Also, see these Knowledge Base articles:  
  
-   HOWTO: FTP with CERN-Based Proxy Using WinInet API (Article ID: Q166961)  
  
-   SAMPLE: FTP with CERN-Based Password Protected Proxy (Article ID: Q216214)  
  
-   Internet Services Manager Fails to Show Installed Proxy Services (Article ID: Q216802)  
  
 The following table shows the steps you might perform in a typical FTP client application.  
  
|Your goal|Actions you take|Effects|  
|---------------|----------------------|-------------|  
|Begin an FTP session.|Create a [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Initializes WinInet and connects to server.|  
|Connect to an FTP server.|Use [CInternetSession::GetFtpConnection](../Topic/CInternetSession::GetFtpConnection.md).|Returns a [CFtpConnection](../VS_visualcpp/CFtpConnection-Class.md) object.|  
|Change to a new FTP directory on the server.|Use [CFtpConnection::SetCurrentDirectory](../Topic/CFtpConnection::SetCurrentDirectory.md).|Changes the directory you are currently connected to on the server.|  
|Find the first file in the FTP directory.|Use [CFtpFileFind::FindFile](../Topic/CFtpFileFind::FindFile.md).|Finds the first file. Returns FALSE if no files are found.|  
|Find the next file in the FTP directory.|Use [CFtpFileFind::FindNextFile](../Topic/CFtpFileFind::FindNextFile.md).|Finds the next file. Returns FALSE if the file is not found.|  
|Open the file found by **FindFile** or `FindNextFile` for reading or writing.|Use [CFtpConnection::OpenFile](../Topic/CFtpConnection::OpenFile.md), using the file name returned by [FindFile](../Topic/CFtpFileFind::FindFile.md) or [FindNextFile](../Topic/CFtpFileFind::FindNextFile.md).|Opens the file on the server for reading or writing. Returns a [CInternetFile](../VS_visualcpp/CInternetFile-Class.md) object.|  
|Read from or write to the file.|Use [CInternetFile::Read](../Topic/CInternetFile::Read.md) or [CInternetFile::Write](../Topic/CInternetFile::Write.md).|Reads or writes the specified number of bytes, using a buffer you supply.|  
|Handle exceptions.|Use the [CInternetException](../VS_visualcpp/CInternetException-Class.md) class.|Handles all common Internet exception types.|  
|End the FTP session.|Dispose of the [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Automatically cleans up open file handles and connections.|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../VS_visualcpp/Win32-Internet-Extensions--WinInet-.md)   
 [Prerequisites for Internet Client Classes](../VS_visualcpp/Prerequisites-for-Internet-Client-Classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../VS_visualcpp/Writing-an-Internet-Client-Application-Using-MFC-WinInet-Classes.md)