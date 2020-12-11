---
description: "Learn more about: Steps in a Typical HTTP Client Application"
title: "Steps in a Typical HTTP Client Application"
ms.date: "11/04/2016"
helpviewer_keywords: ["HTTP client applications [MFC]", "client applications [MFC], HTTP", "Internet applications [MFC], HTTP client applications", "applications [MFC], HTTP client", "Internet client applications [MFC], HTTP table", "WinInet classes [MFC], HTTP"]
ms.assetid: f86552e8-8acd-4b23-bdc5-0c3a247ebd74
---
# Steps in a Typical HTTP Client Application

The following table shows the steps you might perform in a typical HTTP client application:

|Your goal|Actions you take|Effects|
|---------------|----------------------|-------------|
|Begin an HTTP session.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Initializes WinInet and connects to server.|
|Connect to an HTTP server.|Use [CInternetSession::GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection).|Returns a [CHttpConnection](../mfc/reference/chttpconnection-class.md) object.|
|Open an HTTP request.|Use [CHttpConnection::OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest).|Returns a [CHttpFile](../mfc/reference/chttpfile-class.md) object.|
|Send an HTTP request.|Use [CHttpFile::AddRequestHeaders](../mfc/reference/chttpfile-class.md#addrequestheaders) and [CHttpFile::SendRequest](../mfc/reference/chttpfile-class.md#sendrequest).|Finds the file. Returns FALSE if the file is not found.|
|Read from the file.|Use [CHttpFile](../mfc/reference/chttpfile-class.md).|Reads the specified number of bytes using a buffer you supply.|
|Handle exceptions.|Use the [CInternetException](../mfc/reference/cinternetexception-class.md) class.|Handles all common Internet exception types.|
|End the HTTP session.|Dispose of the [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Automatically cleans up open file handles and connections.|

## See also

[Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
