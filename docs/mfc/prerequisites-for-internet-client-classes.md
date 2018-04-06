---
title: "Prerequisites for Internet Client Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["Internet files [MFC], writing to", "Internet [MFC], connections", "FTP (File Transfer Protocol), MFC classes", "Gopher prerequisites [MFC]", "files [MFC], writing to", "classes [MFC], connections", "HTTP [MFC], prerequisites for Internet clients", "connections [MFC], classes for", "Internet client class prerequisites [MFC]", "files [MFC], reading", "URLs [MFC], Internet client applications", "prerequisites, Internet client classes [MFC]", "Gopher client applications [MFC]"]
ms.assetid: c51d1dfe-260c-4228-8100-e4efd90e9599
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Prerequisites for Internet Client Classes
Some actions taken by an Internet client (reading a file, for example) have prerequisite actions (in this case, establishing an Internet connection). The following tables list the prerequisites for some client actions.  
  
### General Internet URL (FTP, Gopher, or HTTP)  
  
|Action|Prerequisite|  
|------------|------------------|  
|Establish a connection.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) to establish the basis of an Internet client application.|  
|Open a URL.|Establish a connection. Call [CInternetSession::OpenURL](../mfc/reference/cinternetsession-class.md#openurl). The `OpenURL` function returns a read-only resource object.|  
|Read URL data.|Open the URL. Call [CInternetFile::Read](../mfc/reference/cinternetfile-class.md#read).|  
|Set an Internet option.|Establish a connection. Call [CInternetSession::SetOption](../mfc/reference/cinternetsession-class.md#setoption).|  
|Set a function to be called with status information.|Establish a connection. Call [CInternetSession::EnableStatusCallback](../mfc/reference/cinternetsession-class.md#enablestatuscallback). Override [CInternetSession::OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) to handle calls.|  
  
### FTP  
  
|Action|Prerequisite|  
|------------|------------------|  
|Establish an FTP connection.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) as the basis of this Internet client application. Call [CInternetSession::GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection) to create a [CFtpConnection](../mfc/reference/cftpconnection-class.md) object.|  
|Find the first resource.|Establish an FTP connection. Create a [CFtpFileFind](../mfc/reference/cftpfilefind-class.md) object. Call [CFtpFileFind::FindFile](../mfc/reference/cftpfilefind-class.md#findfile).|  
|Enumerate all available resources.|Find the first file. Call [CFtpFileFind::FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile) until it returns FALSE.|  
|Open an FTP file.|Establish an FTP connection. Call [CFtpConnection::OpenFile](../mfc/reference/cftpconnection-class.md#openfile) to create and open a [CInternetFile](../mfc/reference/cinternetfile-class.md) object.|  
|Read an FTP file.|Open an FTP file with read access. Call [CInternetFile::Read](../mfc/reference/cinternetfile-class.md#read).|  
|Write to an FTP file.|Open an FTP file with write access. Call [CInternetFile::Write](../mfc/reference/cinternetfile-class.md#write).|  
|Change the client's directory on the server.|Establish an FTP connection. Call [CFtpConnection::SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#setcurrentdirectory).|  
|Retrieve the client's current directory on the server.|Establish an FTP connection. Call [CFtpConnection::GetCurrentDirectory](../mfc/reference/cftpconnection-class.md#getcurrentdirectory).|  
  
### HTTP  
  
|Action|Prerequisite|  
|------------|------------------|  
|Establish an HTTP connection.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) as the basis of this Internet client application. Call [CInternetSession::GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection) to create a [CHttpConnection](../mfc/reference/chttpconnection-class.md) object.|  
|Open an HTTP file.|Establish an HTTP connection. Call [CHttpConnection::OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest) to create a [CHttpFile](../mfc/reference/chttpfile-class.md) object. Call [CHttpFile::AddRequestHeaders](../mfc/reference/chttpfile-class.md#addrequestheaders). Call [CHttpFile::SendRequest](../mfc/reference/chttpfile-class.md#sendrequest).|  
|Read an HTTP file.|Open an HTTP file. Call [CInternetFile::Read](../mfc/reference/cinternetfile-class.md#read).|  
|Get information about an HTTP request.|Establish an HTTP connection. Call [CHttpConnection::OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest) to create a [CHttpFile](../mfc/reference/chttpfile-class.md) object. Call [CHttpFile::QueryInfo](../mfc/reference/chttpfile-class.md#queryinfo).|  
  
### Gopher  
  
|Action|Prerequisite|  
|------------|------------------|  
|Establish a gopher connection.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) as the basis of this Internet client application. Call [CInternetSession::GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection) to create a [CGopherConnection](../mfc/reference/cgopherconnection-class.md).|  
|Find the first file in the current directory.|Establish a gopher connection. Create a [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md) object. Call [CGopherConnection::CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator) to create a [CGopherLocator](../mfc/reference/cgopherlocator-class.md) object. Pass the locator to [CGopherFileFind::FindFile](../mfc/reference/cgopherfilefind-class.md#findfile). Call [CGopherFileFind::GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator) to get the locator of a file if you need it later.|  
|Enumerate all available files.|Find the first file. Call [CGopherFileFind::FindNextFile](../mfc/reference/cgopherfilefind-class.md#findnextfile) until it returns FALSE.|  
|Open a gopher file.|Establish a gopher connection. Create a gopher locator with [CGopherConnection::CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator) or find a locator with [CGopherFileFind::GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator). Call [CGopherConnection::OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|  
|Read a gopher file.|Open a gopher file. Use [CGopherFile](../mfc/reference/cgopherfile-class.md).|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [MFC Classes for Creating Internet Client Applications](../mfc/mfc-classes-for-creating-internet-client-applications.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
