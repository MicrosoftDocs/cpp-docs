---
description: "Learn more about: MFC Classes for Creating Internet Client Applications"
title: "MFC Classes for Creating Internet Client Applications"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC, WinInet classes", "WinInet classes [MFC], classes", "classes [MFC], MFC", "Internet client applications [MFC], MFC", "Internet applications [MFC], MFC"]
ms.assetid: 67d34117-9839-4f4b-8bb8-0e4a9471c606
---
# MFC Classes for Creating Internet Client Applications

MFC provides the following classes and global functions for writing Internet client applications. Indentation indicates a class is derived from the unindented class above it. `CGopherFile` and `CHttpFile` derive from `CInternetFile`, for example. These classes and global functions are declared in AFXINET.H, except `CFileFind`, which is declared in AFX.H.

## Classes

- [CInternetSession](reference/cinternetsession-class.md)

- [CInternetConnection](reference/cinternetconnection-class.md)

  - [CFtpConnection](reference/cftpconnection-class.md)

  - [CGopherConnection](reference/cgopherconnection-class.md)

  - [CHttpConnection](reference/chttpconnection-class.md)

- [CInternetFile](reference/cinternetfile-class.md)

  - [CGopherFile](reference/cgopherfile-class.md)

  - [CHttpFile](reference/chttpfile-class.md)

- [CFileFind](reference/cfilefind-class.md)

  - [CFtpFileFind](reference/cftpfilefind-class.md)

  - [CGopherFileFind](reference/cgopherfilefind-class.md)

- [CGopherLocator](reference/cgopherlocator-class.md)

- [CInternetException](reference/cinternetexception-class.md)

## Global Functions

- [AfxParseURL](reference/internet-url-parsing-globals.md#afxparseurl)

- [AfxGetInternetHandleType](reference/internet-url-parsing-globals.md#afxgetinternethandletype)

- [AfxThrowInternetException](reference/internet-url-parsing-globals.md#afxthrowinternetexception)

## See also

[Win32 Internet Extensions (WinInet)](win32-internet-extensions-wininet.md)<br/>
[Prerequisites for Internet Client Classes](prerequisites-for-internet-client-classes.md)<br/>
[Writing an Internet Client Application Using MFC WinInet Classes](writing-an-internet-client-application-using-mfc-wininet-classes.md)
