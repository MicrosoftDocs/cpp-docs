---
description: "Learn more about: Prerequisites for Internet Client Classes"
title: "Prerequisites for Internet Client Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["Internet files [MFC], writing to", "Internet [MFC], connections", "FTP (File Transfer Protocol), MFC classes", "Gopher prerequisites [MFC]", "files [MFC], writing to", "classes [MFC], connections", "HTTP [MFC], prerequisites for Internet clients", "connections [MFC], classes for", "Internet client class prerequisites [MFC]", "files [MFC], reading", "URLs [MFC], Internet client applications", "prerequisites, Internet client classes [MFC]", "Gopher client applications [MFC]"]
ms.assetid: c51d1dfe-260c-4228-8100-e4efd90e9599
---
# Prerequisites for Internet Client Classes

Some actions taken by an Internet client (reading a file, for example) have prerequisite actions (in this case, establishing an Internet connection). The following tables list the prerequisites for some client actions.

### General Internet URL (FTP, Gopher, or HTTP)

|Action|Prerequisite|
|------------|------------------|
|Establish a connection.|Create a [CInternetSession](reference/cinternetsession-class.md) to establish the basis of an Internet client application.|
|Open a URL.|Establish a connection. Call [CInternetSession::OpenURL](reference/cinternetsession-class.md#openurl). The `OpenURL` function returns a read-only resource object.|
|Read URL data.|Open the URL. Call [CInternetFile::Read](reference/cinternetfile-class.md#read).|
|Set an Internet option.|Establish a connection. Call [CInternetSession::SetOption](reference/cinternetsession-class.md#setoption).|
|Set a function to be called with status information.|Establish a connection. Call [CInternetSession::EnableStatusCallback](reference/cinternetsession-class.md#enablestatuscallback). Override [CInternetSession::OnStatusCallback](reference/cinternetsession-class.md#onstatuscallback) to handle calls.|

### FTP

|Action|Prerequisite|
|------------|------------------|
|Establish an FTP connection.|Create a [CInternetSession](reference/cinternetsession-class.md) as the basis of this Internet client application. Call [CInternetSession::GetFtpConnection](reference/cinternetsession-class.md#getftpconnection) to create a [CFtpConnection](reference/cftpconnection-class.md) object.|
|Find the first resource.|Establish an FTP connection. Create a [CFtpFileFind](reference/cftpfilefind-class.md) object. Call [CFtpFileFind::FindFile](reference/cftpfilefind-class.md#findfile).|
|Enumerate all available resources.|Find the first file. Call [CFtpFileFind::FindNextFile](reference/cftpfilefind-class.md#findnextfile) until it returns FALSE.|
|Open an FTP file.|Establish an FTP connection. Call [CFtpConnection::OpenFile](reference/cftpconnection-class.md#openfile) to create and open a [CInternetFile](reference/cinternetfile-class.md) object.|
|Read an FTP file.|Open an FTP file with read access. Call [CInternetFile::Read](reference/cinternetfile-class.md#read).|
|Write to an FTP file.|Open an FTP file with write access. Call [CInternetFile::Write](reference/cinternetfile-class.md#write).|
|Change the client's directory on the server.|Establish an FTP connection. Call [CFtpConnection::SetCurrentDirectory](reference/cftpconnection-class.md#setcurrentdirectory).|
|Retrieve the client's current directory on the server.|Establish an FTP connection. Call [CFtpConnection::GetCurrentDirectory](reference/cftpconnection-class.md#getcurrentdirectory).|

### HTTP

|Action|Prerequisite|
|------------|------------------|
|Establish an HTTP connection.|Create a [CInternetSession](reference/cinternetsession-class.md) as the basis of this Internet client application. Call [CInternetSession::GetHttpConnection](reference/cinternetsession-class.md#gethttpconnection) to create a [CHttpConnection](reference/chttpconnection-class.md) object.|
|Open an HTTP file.|Establish an HTTP connection. Call [CHttpConnection::OpenRequest](reference/chttpconnection-class.md#openrequest) to create a [CHttpFile](reference/chttpfile-class.md) object. Call [CHttpFile::AddRequestHeaders](reference/chttpfile-class.md#addrequestheaders). Call [CHttpFile::SendRequest](reference/chttpfile-class.md#sendrequest).|
|Read an HTTP file.|Open an HTTP file. Call [CInternetFile::Read](reference/cinternetfile-class.md#read).|
|Get information about an HTTP request.|Establish an HTTP connection. Call [CHttpConnection::OpenRequest](reference/chttpconnection-class.md#openrequest) to create a [CHttpFile](reference/chttpfile-class.md) object. Call [CHttpFile::QueryInfo](reference/chttpfile-class.md#queryinfo).|

### Gopher

|Action|Prerequisite|
|------------|------------------|
|Establish a gopher connection.|Create a [CInternetSession](reference/cinternetsession-class.md) as the basis of this Internet client application. Call [CInternetSession::GetGopherConnection](reference/cinternetsession-class.md#getgopherconnection) to create a [CGopherConnection](reference/cgopherconnection-class.md).|
|Find the first file in the current directory.|Establish a gopher connection. Create a [CGopherFileFind](reference/cgopherfilefind-class.md) object. Call [CGopherConnection::CreateLocator](reference/cgopherconnection-class.md#createlocator) to create a [CGopherLocator](reference/cgopherlocator-class.md) object. Pass the locator to [CGopherFileFind::FindFile](reference/cgopherfilefind-class.md#findfile). Call [CGopherFileFind::GetLocator](reference/cgopherfilefind-class.md#getlocator) to get the locator of a file if you need it later.|
|Enumerate all available files.|Find the first file. Call [CGopherFileFind::FindNextFile](reference/cgopherfilefind-class.md#findnextfile) until it returns FALSE.|
|Open a gopher file.|Establish a gopher connection. Create a gopher locator with [CGopherConnection::CreateLocator](reference/cgopherconnection-class.md#createlocator) or find a locator with [CGopherFileFind::GetLocator](reference/cgopherfilefind-class.md#getlocator). Call [CGopherConnection::OpenFile](reference/cgopherconnection-class.md#openfile).|
|Read a gopher file.|Open a gopher file. Use [CGopherFile](reference/cgopherfile-class.md).|

## See also

[Win32 Internet Extensions (WinInet)](win32-internet-extensions-wininet.md)<br/>
[MFC Classes for Creating Internet Client Applications](mfc-classes-for-creating-internet-client-applications.md)<br/>
[Writing an Internet Client Application Using MFC WinInet Classes](writing-an-internet-client-application-using-mfc-wininet-classes.md)
