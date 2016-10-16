---
title: "CGopherFile Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 20
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
 The gopher service does not allow users to write data to a gopher file because this service functions mainly as a menu-driven interface for finding information. The `CGopherFile` member functions **Write**, `WriteString`, and `Flush` are not implemented for `CGopherFile`. Calling these functions on a `CGopherFile` object, returns a [CNotSupportedException](../mfcref/cnotsupportedexception-class.md).  
  
 To learn more about how `CGopherFile` works with the other MFC Internet classes, see the article [Internet Programming with WinInet](../mfc/win32-internet-extensions--wininet-.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CFile](../mfcref/cfile-class.md)  
  
 [CStdioFile](../mfcref/cstdiofile-class.md)  
  
 [CInternetFile](../mfcref/cinternetfile-class.md)  
  
 `CGopherFile`  
  
## Requirements  
 **Header:** afxinet.h  
  
##  <a name="cgopherfile__cgopherfile"></a>  CGopherFile::CGopherFile  
 This member function is called to construct a `CGopherFile` object.  
  
```  
CGopherFile(  
    HINTERNET hFile,  
    CGopherLocator& refLocator,  
    CGopherConnection* pConnection );  
  
CGopherFile(  
    HINTERNET hFile,  
    HINTERNET hSession,  
    LPCTSTR pstrLocator,  
    DWORD dwLocLen,  
    DWORD_PTR dwContext );  
```  
  
### Parameters  
 `hFile`  
 A handle to an `HINTERNET` file.  
  
 `refLocator`  
 A reference to a [CGopherLocator](../mfcref/cgopherlocator-class.md) object.  
  
 `pConnection`  
 A pointer to a [CGopherConnection](../mfcref/cgopherconnection-class.md) object.  
  
 `hSession`  
 A handle to the current Internet session.  
  
 `pstrLocator`  
 A pointer to a string used to locate the gopher server. See [Gopher Sessions](https://msdn.microsoft.com/en-US/library/24wz8xze.aspx) for more information about gopher locators.  
  
 *dwLocLen*  
 A DWORD containing the number of bytes in `pstrLocator`.  
  
 `dwContext`  
 A pointer to the context identifier of the file being opened.  
  
### Remarks  
 You need a `CGopherFile` object to read from a file during a gopher Internet session.  
  
 You never create a `CGopherFile` object directly. Instead, call [CGopherConnection::OpenFile](../mfcref/cgopherconnection-class.md#cgopherconnection__openfile) to open a file on a gopher server.  
  
## See Also  
 [CInternetFile Class](../mfcref/cinternetfile-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [CInternetFile Class](../mfcref/cinternetfile-class.md)   
 [CGopherLocator Class](../mfcref/cgopherlocator-class.md)   
 [CGopherFileFind Class](../mfcref/cgopherfilefind-class.md)   
 [CGopherConnection Class](../mfcref/cgopherconnection-class.md)