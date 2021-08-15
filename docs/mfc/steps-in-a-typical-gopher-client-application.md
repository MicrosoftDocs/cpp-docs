---
description: "Learn more about: Steps in a Typical Gopher Client Application"
title: "Steps in a Typical Gopher Client Application"
ms.date: "11/04/2016"
helpviewer_keywords: ["WinInet classes [MFC], gopher", "Internet applications [MFC], gopher client applications", "Gopher client applications [MFC]", "Internet client applications [MFC], gopher table"]
ms.assetid: 3e4e1869-5da0-453d-8ba9-b648c894bb90
---
# Steps in a Typical Gopher Client Application

The following table shows the steps you might perform in a typical gopher client application.

|Your goal|Actions you take|Effects|
|---------------|----------------------|-------------|
|Begin a gopher session.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Initializes WinInet and connects to server.|
|Connect to a gopher server.|Use [CInternetSession::GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection).|Returns a [CGopherConnection](../mfc/reference/cgopherconnection-class.md) object.|
|Find the first resource in the gopher.|Use [CGopherFileFind::FindFile](../mfc/reference/cgopherfilefind-class.md#findfile).|Finds the first file. Returns FALSE if no files are found.|
|Find the next resource in the gopher.|Use [CGopherFileFind::FindNextFile](../mfc/reference/cgopherfilefind-class.md#findnextfile).|Finds the next file. Returns FALSE if the file is not found.|
|Open the file found by `FindFile` or `FindNextFile` for reading.|Get a gopher locator using [CGopherFileFind::GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator). Use [CGopherConnection::OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|Opens the file specified by the locator. `OpenFile` returns a [CGopherFile](../mfc/reference/cgopherfile-class.md) object.|
|Open a file using a gopher locator you supply.|Create a gopher locator using [CGopherConnection::CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator). Use [CGopherConnection::OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|Opens the file specified by the locator. `OpenFile` returns a [CGopherFile](../mfc/reference/cgopherfile-class.md) object.|
|Read from the file.|Use [CGopherFile](../mfc/reference/cgopherfile-class.md).|Reads the specified number of bytes, using a buffer you supply.|
|Handle exceptions.|Use the [CInternetException](../mfc/reference/cinternetexception-class.md) class.|Handles all common Internet exception types.|
|End the gopher session.|Dispose of the [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Automatically cleans up open file handles and connections.|

## See also

[Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
