---
title: "How MFC Makes It Easier to Create Internet Client Applications | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["Internet client applications [MFC], MFC", "Internet applications [MFC], MFC", "MFC, Internet applications"]
ms.assetid: 94437b3f-f15c-437d-b5fd-264a2efec9ab
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# How MFC Makes It Easier to Create Internet Client Applications
The Microsoft Foundation Classes encapsulate the Win32 Internet Extension (WinInet) functions in a manner that provides a familiar context for MFC programmers. MFC provides three Internet file classes ([CInternetFile](../mfc/reference/cinternetfile-class.md), [CHttpFile](../mfc/reference/chttpfile-class.md), and [CGopherFile](../mfc/reference/cgopherfile-class.md)) derived from the [CStdioFile](../mfc/reference/cstdiofile-class.md) class. Not only do these classes make retrieving and manipulating Internet data familiar to programmers who have used `CStdioFile` for local files, but with these classes you can handle local files and Internet files in a consistent, transparent manner.  
  
 The MFC WinInet classes provide the same functionality as `CStdioFile` for data that is transferred across the Internet. These classes abstract the Internet protocols for HTTP, FTP, and gopher into a high-level application programming interface, providing a fast and straightforward path to making applications Internet-aware. For example, connecting to an FTP server still requires several steps at a low level, but as an MFC developer, you only need to make one call to `CInternetSession::GetFTPConnection` to create that connection.  
  
 In addition, the MFC WinInet classes provide the following advantages:  
  
-   Buffered I/O  
  
-   Type-safe handles for your data  
  
-   Default parameters for many functions  
  
-   Exception handling for common Internet errors  
  
-   Automatic cleanup of open handles and connections  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [How WinInet Makes It Easier to Create Internet Client Applications](../mfc/how-wininet-makes-it-easier-to-create-internet-client-applications.md)

