---
title: "CFtpFileFind Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CFtpFileFind", "AFXINET/CFtpFileFind", "AFXINET/CFtpFileFind::CFtpFileFind", "AFXINET/CFtpFileFind::FindFile", "AFXINET/CFtpFileFind::FindNextFile", "AFXINET/CFtpFileFind::GetFileURL"]
dev_langs: ["C++"]
helpviewer_keywords: ["CFtpFileFind [MFC], CFtpFileFind", "CFtpFileFind [MFC], FindFile", "CFtpFileFind [MFC], FindNextFile", "CFtpFileFind [MFC], GetFileURL"]
ms.assetid: 9667cf01-657f-4b11-b9db-f11e5a7b4e4c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CFtpFileFind Class
Aids in Internet file searches of FTP servers.  
  
## Syntax  
  
```  
class CFtpFileFind : public CFileFind  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CFtpFileFind::CFtpFileFind](#cftpfilefind)|Constructs a `CFtpFileFind` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFtpFileFind::FindFile](#findfile)|Finds a file on a FTP server.|  
|[CFtpFileFind::FindNextFile](#findnextfile)|Continues a file search from a previous call to [FindFile](#findfile).|  
|[CFtpFileFind::GetFileURL](#getfileurl)|Gets the URL, including path, of the found file.|  
  
## Remarks  
 `CFtpFileFind` includes member functions that begin a search, locate a file, and return the URL or other descriptive information about the file.  
  
 Other MFC classes designed for Internet and local file searched include [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) and [CFileFind](../../mfc/reference/cfilefind-class.md). Together with `CFtpFileFind`, these classes provide a seamless mechanism for the client to find specific files, regardless of the server protocol or file type (either a local machine or a remote server). Note that there is no MFC class for searching on HTTP servers because HTTP does not support the direct file manipulation required for searches.  
  
 For more information about how to use `CFtpFileFind` and the other WinInet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## Example  
 The following code demonstrates how to enumerate all files in the current directory of the FTP server.  
  
 [!code-cpp[NVC_MFCWinInet#8](../../mfc/codesnippet/cpp/cftpfilefind-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFileFind](../../mfc/reference/cfilefind-class.md)  
  
 `CFtpFileFind`  
  
## Requirements  
 **Header:** afxinet.h  
  
##  <a name="cftpfilefind"></a>  CFtpFileFind::CFtpFileFind  
 This member function is called to construct a `CFtpFileFind` object.  
  
```  
explicit CFtpFileFind(
    CFtpConnection* pConnection,  
    DWORD_PTR dwContext = 1);
```  
  
### Parameters  
 *pConnection*  
 A pointer to a `CFtpConnection` object. You can obtain an FTP connection by calling [CInternetSession::GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection).  
  
 *dwContext*  
 The context identifier for the `CFtpFileFind` object. See **Remarks** for more information about this parameter.  
  
### Remarks  
 The default value for *dwContext* is sent by MFC to the `CFtpFileFind` object from the [CInternetSession](../../mfc/reference/cinternetsession-class.md) object that created the `CFtpFileFind` object. You can override the default to set the context identifier to a value of your choosing. The context identifier is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) to provide status on the object with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.  
  
### Example  
  See the example in the class overview earlier in this topic.  
  
##  <a name="findfile"></a>  CFtpFileFind::FindFile  
 Call this member function to find an FTP file.  
  
```  
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,  
    DWORD dwFlags = INTERNET_FLAG_RELOAD);
```  
  
### Parameters  
 *pstrName*  
 A pointer to a string containing the name of the file to find. If NULL, the call will perform a wildcard search (*).  
  
 *dwFlags*  
 The flags describing how to handle this session. These flags can be combined with the bitwise OR operator (&#124;) and are as follows:  
  
-   INTERNET_FLAG_RELOAD   Get the data from the wire even if it is locally cached. This is the default flag.  
  
-   INTERNET_FLAG_DONT_CACHE   Do not cache the data, either locally or in any gateways.  
  
-   INTERNET_FLAG_RAW_DATA   Override the default to return the raw data ( [WIN32_FIND_DATA](/windows/desktop/api/minwinbase/ns-minwinbase-_win32_find_dataa) structures for FTP).  
  
-   INTERNET_FLAG_SECURE   Secures transactions on the wire with Secure Sockets Layer or PCT. This flag is applicable to HTTP requests only.  
  
-   INTERNET_FLAG_EXISTING_CONNECT   If possible, reuse the existing connections to the server for new `FindFile` requests instead of creating a new session for each request.  
  
### Return Value  
 Nonzero if successful; otherwise 0. To get extended error information, call the Win32 function [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### Remarks  
 After calling `FindFile` to retrieve the first FTP file, you can call [FindNextFile](#findnextfile) to retrieve subsequent FTP files.  
  
### Example  
  See the earlier example in this topic.  
  
##  <a name="findnextfile"></a>  CFtpFileFind::FindNextFile  
 Call this member function to continue a file search begun with a call to the [FindFile](#findfile) member function.  
  
```  
virtual BOOL FindNextFile();
```  
  
### Return Value  
 Nonzero if there are more files; zero if the file found is the last one in the directory or if an error occurred. To get extended error information, call the Win32 function [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360). If the file found is the last file in the directory, or if no matching files can be found, the `GetLastError` function returns ERROR_NO_MORE_FILES.  
  
### Remarks  
 You must call this function at least once before calling any attribute function (see [CFileFind::FindNextFile](../../mfc/reference/cfilefind-class.md#findnextfile)).  
  
 `FindNextFile` wraps the Win32 function [FindNextFile](/windows/desktop/api/fileapi/nf-fileapi-findnextfilea).  
  
### Example  
  See the example earlier in this topic.  
  
##  <a name="getfileurl"></a>  CFtpFileFind::GetFileURL  
 Call this member function to get the URL of the specified file.  
  
```  
CString GetFileURL() const;  
```  
  
### Return Value  
 The file and path of the Universal Resource Locator (URL).  
  
### Remarks  
 `GetFileURL` is similar to the member function [CFileFind::GetFilePath](../../mfc/reference/cfilefind-class.md#getfilepath), except that it returns the URL in the form `ftp://moose/dir/file.txt`.  
  
## See Also  
 [CFileFind Class](../../mfc/reference/cfilefind-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CGopherFileFind Class](../../mfc/reference/cgopherfilefind-class.md)   
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile Class](../../mfc/reference/cgopherfile-class.md)   
 [CHttpFile Class](../../mfc/reference/chttpfile-class.md)
