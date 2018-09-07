---
title: "Steps in a Typical FTP Client Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["Internet client applications [MFC], FTP table", "FTP (File Transfer Protocol)", "WinInet classes [MFC], FTP", "FTP (File Transfer Protocol) [MFC], client applications", "Internet applications [MFC], FTP client applications"]
ms.assetid: 70bed7b5-6040-40d1-bc77-702e63a698f2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Steps in a Typical FTP Client Application
A typical FTP client application creates a [CInternetSession](../mfc/reference/cinternetsession-class.md) and a [CFtpConnection](../mfc/reference/cftpconnection-class.md) object. Note that these MFC WinInet classes do not actually control the proxy type settings; IIS does.  
  
 Also, see these Knowledge Base articles:  
  
-   HOWTO: FTP with CERN-Based Proxy Using WinInet API (Article ID: Q166961)  
  
-   SAMPLE: FTP with CERN-Based Password Protected Proxy (Article ID: Q216214)  
  
-   Internet Services Manager Fails to Show Installed Proxy Services (Article ID: Q216802)  
  
 The following table shows the steps you might perform in a typical FTP client application.  
  
|Your goal|Actions you take|Effects|  
|---------------|----------------------|-------------|  
|Begin an FTP session.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Initializes WinInet and connects to server.|  
|Connect to an FTP server.|Use [CInternetSession::GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection).|Returns a [CFtpConnection](../mfc/reference/cftpconnection-class.md) object.|  
|Change to a new FTP directory on the server.|Use [CFtpConnection::SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#setcurrentdirectory).|Changes the directory you are currently connected to on the server.|  
|Find the first file in the FTP directory.|Use [CFtpFileFind::FindFile](../mfc/reference/cftpfilefind-class.md#findfile).|Finds the first file. Returns FALSE if no files are found.|  
|Find the next file in the FTP directory.|Use [CFtpFileFind::FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile).|Finds the next file. Returns FALSE if the file is not found.|  
|Open the file found by `FindFile` or `FindNextFile` for reading or writing.|Use [CFtpConnection::OpenFile](../mfc/reference/cftpconnection-class.md#openfile), using the file name returned by [FindFile](../mfc/reference/cftpfilefind-class.md#findfile) or [FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile).|Opens the file on the server for reading or writing. Returns a [CInternetFile](../mfc/reference/cinternetfile-class.md) object.|  
|Read from or write to the file.|Use [CInternetFile::Read](../mfc/reference/cinternetfile-class.md#read) or [CInternetFile::Write](../mfc/reference/cinternetfile-class.md#write).|Reads or writes the specified number of bytes, using a buffer you supply.|  
|Handle exceptions.|Use the [CInternetException](../mfc/reference/cinternetexception-class.md) class.|Handles all common Internet exception types.|  
|End the FTP session.|Dispose of the [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Automatically cleans up open file handles and connections.|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
