---
title: "CGopherFile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CGopherFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gopher protocol files"
  - "Internet, gopher"
  - "CGopherFile class"
ms.assetid: 3ca9898f-8cdb-4495-bbde-46d40100feda
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CGopherFile Class
Provides the functionality to find and read files on a gopher server.  
  
> [!NOTE]
>  The classes `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` and their members have been deprecated because they do not work on the Windows XP platform, but they will continue to work on earlier platforms.  
  
## Syntax  
  
```  
class CGopherFile : public CInternetFile  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CGopherFile::CGopherFile](#cgopherfile__cgopherfile)|Constructs a `CGopherFile` object.|  
  
## Remarks  
 The gopher service does not allow users to write data to a gopher file because this service functions mainly as a menu-driven interface for finding information. The `CGopherFile` member functions **Write**, `WriteString`, and `Flush` are not implemented for `CGopherFile`. Calling these functions on a `CGopherFile` object, returns a [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 To learn more about how `CGopherFile` works with the other MFC Internet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [CStdioFile](../../mfc/reference/cstdiofile-class.md)  
  
 [CInternetFile](../../mfc/reference/cinternetfile-class.md)  
  
 `CGopherFile`  
  
## Requirements  
 **Header:** afxinet.h  
  
##  <a name="cgopherfile__cgopherfile"></a>  CGopherFile::CGopherFile  
 This member function is called to construct a `CGopherFile` object.  
  
```  
CGopherFile(
    HINTERNET hFile,  
    CGopherLocator& refLocator,  
    CGopherConnection* pConnection);

 
CGopherFile(
    HINTERNET hFile,  
    HINTERNET hSession,  
    LPCTSTR pstrLocator,  
    DWORD dwLocLen,  
    DWORD_PTR dwContext);
```  
  
### Parameters  
 `hFile`  
 A handle to an `HINTERNET` file.  
  
 `refLocator`  
 A reference to a [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) object.  
  
 `pConnection`  
 A pointer to a [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) object.  
  
 `hSession`  
 A handle to the current Internet session.  
  
 `pstrLocator`  
 A pointer to a string used to locate the gopher server. See [Gopher Sessions](https://msdn.microsoft.com/library/24wz8xze.aspx) for more information about gopher locators.  
  
 *dwLocLen*  
 A DWORD containing the number of bytes in `pstrLocator`.  
  
 `dwContext`  
 A pointer to the context identifier of the file being opened.  
  
### Remarks  
 You need a `CGopherFile` object to read from a file during a gopher Internet session.  
  
 You never create a `CGopherFile` object directly. Instead, call [CGopherConnection::OpenFile](../../mfc/reference/cgopherconnection-class.md#cgopherconnection__openfile) to open a file on a gopher server.  
  
## See Also  
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [CGopherLocator Class](../../mfc/reference/cgopherlocator-class.md)   
 [CGopherFileFind Class](../../mfc/reference/cgopherfilefind-class.md)   
 [CGopherConnection Class](../../mfc/reference/cgopherconnection-class.md)
