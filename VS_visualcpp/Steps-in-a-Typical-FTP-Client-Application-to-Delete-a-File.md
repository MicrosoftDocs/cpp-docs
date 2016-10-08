---
title: "Steps in a Typical FTP Client Application to Delete a File"
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
ms.assetid: 2c347a96-c0a4-4827-98fe-668406e552bc
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
# Steps in a Typical FTP Client Application to Delete a File
The following table shows the steps you might perform in a typical FTP client application that deletes a file.  
  
|Your goal|Actions you take|Effects|  
|---------------|----------------------|-------------|  
|Begin an FTP session.|Create a [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Initializes WinInet and connects to server.|  
|Connect to an FTP server.|Use [CInternetSession::GetFtpConnection](../Topic/CInternetSession::GetFtpConnection.md).|Returns a [CFtpConnection](../VS_visualcpp/CFtpConnection-Class.md) object.|  
|Check to make sure you're in the right directory on the FTP server.|Use [CFtpConnection::GetCurrentDirectory](../Topic/CFtpConnection::GetCurrentDirectory.md) or [CFtpConnection::GetCurrentDirectoryAsURL](../Topic/CFtpConnection::GetCurrentDirectoryAsURL.md).|Returns the name or URL of the directory you are currently connected to on the server, depending on the member function selected.|  
|Change to a new FTP directory on the server.|Use [CFtpConnection::SetCurrentDirectory](../Topic/CFtpConnection::SetCurrentDirectory.md).|Changes the directory you are currently connected to on the server.|  
|Find the first file in the FTP directory.|Use [CFtpFileFind::FindFile](../Topic/CFtpFileFind::FindFile.md).|Finds the first file. Returns FALSE if no files are found.|  
|Find the next file in the FTP directory.|Use [CFtpFileFind::FindNextFile](../Topic/CFtpFileFind::FindNextFile.md).|Finds the next file. Returns FALSE if the file is not found.|  
|Delete the file found by **FindFile** or `FindNextFile`.|Use [CFtpConnection::Remove](../Topic/CFtpConnection::Remove.md), using the file name returned by **FindFile** or `FindNextFile`.|Deletes the file on the server for reading or writing.|  
|Handle exceptions.|Use the [CInternetException](../VS_visualcpp/CInternetException-Class.md) class.|Handles all common Internet exception types.|  
|End the FTP session.|Dispose of the [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Automatically cleans up open file handles and connections.|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../VS_visualcpp/Win32-Internet-Extensions--WinInet-.md)   
 [Prerequisites for Internet Client Classes](../VS_visualcpp/Prerequisites-for-Internet-Client-Classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../VS_visualcpp/Writing-an-Internet-Client-Application-Using-MFC-WinInet-Classes.md)