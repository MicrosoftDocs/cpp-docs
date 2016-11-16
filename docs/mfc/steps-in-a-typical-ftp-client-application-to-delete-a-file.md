---
title: "Steps in a Typical FTP Client Application to Delete a File | Microsoft Docs"
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
  - "Internet client applications, FTP delete"
  - "WinInet classes, FTP"
  - "FTP (File Transfer Protocol), client applications"
  - "Internet applications, FTP client applications"
ms.assetid: 2c347a96-c0a4-4827-98fe-668406e552bc
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
# Steps in a Typical FTP Client Application to Delete a File
The following table shows the steps you might perform in a typical FTP client application that deletes a file.  
  
|Your goal|Actions you take|Effects|  
|---------------|----------------------|-------------|  
|Begin an FTP session.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Initializes WinInet and connects to server.|  
|Connect to an FTP server.|Use [CInternetSession::GetFtpConnection](../mfc/reference/cinternetsession-class.md#cinternetsession__getftpconnection).|Returns a [CFtpConnection](../mfc/reference/cftpconnection-class.md) object.|  
|Check to make sure you're in the right directory on the FTP server.|Use [CFtpConnection::GetCurrentDirectory](../mfc/reference/cftpconnection-class.md#cftpconnection__getcurrentdirectory) or [CFtpConnection::GetCurrentDirectoryAsURL](../mfc/reference/cftpconnection-class.md#cftpconnection__getcurrentdirectoryasurl).|Returns the name or URL of the directory you are currently connected to on the server, depending on the member function selected.|  
|Change to a new FTP directory on the server.|Use [CFtpConnection::SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#cftpconnection__setcurrentdirectory).|Changes the directory you are currently connected to on the server.|  
|Find the first file in the FTP directory.|Use [CFtpFileFind::FindFile](../mfc/reference/cftpfilefind-class.md#cftpfilefind__findfile).|Finds the first file. Returns FALSE if no files are found.|  
|Find the next file in the FTP directory.|Use [CFtpFileFind::FindNextFile](../mfc/reference/cftpfilefind-class.md#cftpfilefind__findnextfile).|Finds the next file. Returns FALSE if the file is not found.|  
|Delete the file found by **FindFile** or `FindNextFile`.|Use [CFtpConnection::Remove](../mfc/reference/cftpconnection-class.md#cftpconnection__remove), using the file name returned by **FindFile** or `FindNextFile`.|Deletes the file on the server for reading or writing.|  
|Handle exceptions.|Use the [CInternetException](../mfc/reference/cinternetexception-class.md) class.|Handles all common Internet exception types.|  
|End the FTP session.|Dispose of the [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Automatically cleans up open file handles and connections.|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
