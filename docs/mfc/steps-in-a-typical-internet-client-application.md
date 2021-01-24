---
description: "Learn more about: Steps in a Typical Internet Client Application"
title: "Steps in a Typical Internet Client Application"
ms.date: "11/04/2016"
helpviewer_keywords: ["Internet client applications [MFC], general table", "WinInet classes [MFC], programming", "Internet applications [MFC], client applications"]
ms.assetid: 7aba135c-7c15-4e2f-8c34-bbaf792c89a6
---
# Steps in a Typical Internet Client Application

The following table shows the steps you might perform in a typical Internet client application.

|Your goal|Actions you take|Effects|
|---------------|----------------------|-------------|
|Begin an Internet session.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Initializes WinInet and connects to server.|
|Set an Internet query option (time-out limit or number of retries, for example).|Use [CInternetSession::SetOption](../mfc/reference/cinternetsession-class.md#setoption).|Returns FALSE if operation was unsuccessful.|
|Establish a callback function to monitor the status of the session.|Use [CInternetSession::EnableStatusCallback](../mfc/reference/cinternetsession-class.md#enablestatuscallback).|Establishes a callback to [CInternetSession::OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback). Override `OnStatusCallback` to create your own callback routine.|
|Connect to an Internet server, intranet server, or local file.|Use [CInternetSession::OpenURL](../mfc/reference/cinternetsession-class.md#openurl).|Parses the URL and opens a connection to the specified server. Returns a [CStdioFile](../mfc/reference/cstdiofile-class.md) (if you pass `OpenURL` a local file name). This is the object through which you access data retrieved from the server or file.|
|Read from the file.|Use [CInternetFile::Read](../mfc/reference/cinternetfile-class.md#read).|Reads the specified number of bytes using a buffer you supply.|
|Handle exceptions.|Use the [CInternetException](../mfc/reference/cinternetexception-class.md) class.|Handles all common Internet exception types.|
|End the Internet session.|Dispose of the [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Automatically cleans up open file handles and connections.|

## See also

[Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
