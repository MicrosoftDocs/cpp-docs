---
description: "Learn more about: Win32 Internet Classes"
title: "Win32 Internet Classes"
ms.date: "09/12/2018"
f1_keywords: ["vc.classes.win32"]
helpviewer_keywords: ["Internet classes [MFC]", "WinInet classes [MFC], classes", "Win32 [MFC], Internet classes", "Windows API [MFC], Internet classes"]
ms.assetid: b49601d5-3025-4068-9408-316b54ee4375
---
# Win32 Internet Classes

MFC wraps the Win32 Internet (WinInet) and ActiveX technology to make Internet programming easier.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

[CInternetSession](../mfc/reference/cinternetsession-class.md)<br/>
Creates and initializes one Internet session or several simultaneous Internet sessions and, if necessary, describes the connection to a proxy server.

[CInternetConnection](../mfc/reference/cinternetconnection-class.md)<br/>
Manages your connection to an Internet server.

[CInternetFile](../mfc/reference/cinternetfile-class.md)<br/>
This class and its derived classes allow access to files on remote systems that use Internet protocols.

[CHttpConnection](../mfc/reference/chttpconnection-class.md)<br/>
Manages your connection to an HTTP server.

[CHttpFile](../mfc/reference/chttpfile-class.md)<br/>
Provides the functionality to find and read files on an HTTP server.

[CGopherFile](../mfc/reference/cgopherfile-class.md)<br/>
Provides the functionality to find and read files on a gopher server.

[CFtpConnection](../mfc/reference/cftpconnection-class.md)<br/>
Manages your connection to an FTP server.

[CGopherConnection](../mfc/reference/cgopherconnection-class.md)<br/>
Manages your connection to a gopher server.

[CFileFind](../mfc/reference/cfilefind-class.md)<br/>
Performs local and Internet file searches.

[CFtpFileFind](../mfc/reference/cftpfilefind-class.md)<br/>
Aids in Internet file searches of FTP servers.

[CGopherFileFind](../mfc/reference/cgopherfilefind-class.md)<br/>
Aids in Internet file searches of gopher servers.

[CGopherLocator](../mfc/reference/cgopherlocator-class.md)<br/>
Gets a gopher "locator" from a gopher server, determines the locator's type, and makes the locator available to `CGopherFileFind`.

[CInternetException](../mfc/reference/cinternetexception-class.md)<br/>
Represents an exception condition related to an Internet operation.

## See also

[Class Overview](../mfc/class-library-overview.md)
