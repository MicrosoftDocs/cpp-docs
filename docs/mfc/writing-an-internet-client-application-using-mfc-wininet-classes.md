---
description: "Learn more about: Writing an Internet Client Application Using MFC WinInet Classes"
title: "Writing an Internet Client Application Using MFC WinInet Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["Internet client applications [MFC]", "WinInet classes [MFC], programming", "Internet client applications [MFC], writing", "Internet applications [MFC], WinInet", "Internet applications [MFC], client applications", "MFC, Internet applications"]
ms.assetid: a2c4a40c-a94e-4b3e-9dbf-f8a8dc8e5428
---
# Writing an Internet Client Application Using MFC WinInet Classes

The basis of every Internet client application is the Internet session. MFC implements Internet sessions as objects of class [CInternetSession](../mfc/reference/cinternetsession-class.md). Using this class, you can create one Internet session or several simultaneous sessions.

To communicate with a server, you need a [CInternetConnection](../mfc/reference/cinternetconnection-class.md) object as well as a `CInternetSession`. You can create a `CInternetConnection` by using [CInternetSession::GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection), [CInternetSession::GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection), or [CInternetSession::GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection). Each of these calls is specific to the protocol type. These calls do not open a file on the server for reading or writing. If you intend to read or write data, you must open the file as a separate step.

For most Internet sessions, the `CInternetSession` object works hand-in-hand with a [CInternetFile](../mfc/reference/cinternetfile-class.md) object:

- For an Internet session, you must create an instance of [CInternetSession](../mfc/reference/cinternetsession-class.md).

- If your Internet session reads or writes data, you must create an instance of `CInternetFile` (or its subclasses, [CHttpFile](../mfc/reference/chttpfile-class.md) or [CGopherFile](../mfc/reference/cgopherfile-class.md)). The easiest way to read data is to call [CInternetSession::OpenURL](../mfc/reference/cinternetsession-class.md#openurl). This function parses a Universal Resource Locator (URL) supplied by you, opens a connection to the server specified by the URL, and returns a read-only `CInternetFile` object. `CInternetSession::OpenURL` is not specific to one protocol type — the same call works for any FTP, HTTP, or gopher URL. `CInternetSession::OpenURL` even works with local files (returning a `CStdioFile` instead of a `CInternetFile`).

- If your Internet session does not read or write data, but performs other tasks, such as deleting a file in an FTP directory, you may not need to create an instance of `CInternetFile`.

There are two ways to create a `CInternetFile` object:

- If you use `CInternetSession::OpenURL` to establish your server connection, the call to `OpenURL` returns a `CStdioFile`.

- If use `CInternetSession::GetFtpConnection`, `GetGopherConnection`, or `GetHttpConnection` to establish your server connection, you must call `CFtpConnection::OpenFile`, `CGopherConnection::OpenFile`, or `CHttpConnection::OpenRequest`, respectively, to return a `CInternetFile`, `CGopherFile`, or `CHttpFile`, respectively.

The steps in implementing an Internet client application vary depending on whether you create a generic Internet client based on `OpenURL` or a protocol-specific client using one of the `GetConnection` functions.

## What do you want to know more about

- [How do I write an Internet client application that works generically with FTP, HTTP, and gopher](../mfc/steps-in-a-typical-internet-client-application.md)

- [How do I write an FTP client application that opens a file](../mfc/steps-in-a-typical-ftp-client-application.md)

- [How do I write an FTP client application that does not open a file but performs a directory operation, such as deleting a file](../mfc/steps-in-a-typical-ftp-client-application-to-delete-a-file.md)

- [How do I write a gopher client application](../mfc/steps-in-a-typical-gopher-client-application.md)

- [How do I write an HTTP client application](../mfc/steps-in-a-typical-http-client-application.md)

## See also

[Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[MFC Classes for Creating Internet Client Applications](../mfc/mfc-classes-for-creating-internet-client-applications.md)<br/>
[Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)
