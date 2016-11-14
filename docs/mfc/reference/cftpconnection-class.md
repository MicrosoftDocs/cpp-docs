---
title: "CFtpConnection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFtpConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFtpConnection class"
  - "FTP (File Transfer Protocol), establishing connections"
  - "Internet connections, FTP"
  - "Internet services, FTP"
ms.assetid: 5e3a0501-8893-49cf-a3d5-0628d8d6b936
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
# CFtpConnection Class
Manages your FTP connection to an Internet server and allows direct manipulation of directories and files on that server.  
  
## Syntax  
  
```  
class CFtpConnection : public CInternetConnection  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CFtpConnection::CFtpConnection](#cftpconnection__cftpconnection)|Constructs a `CFtpConnection` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFtpConnection::Command](#cftpconnection__command)|Sends a command directly to an FTP server.|  
|[CFtpConnection::CreateDirectory](#cftpconnection__createdirectory)|Creates a directory on the server.|  
|[CFtpConnection::GetCurrentDirectory](#cftpconnection__getcurrentdirectory)|Gets the current directory for this connection.|  
|[CFtpConnection::GetCurrentDirectoryAsURL](#cftpconnection__getcurrentdirectoryasurl)|Gets the current directory for this connection as a URL.|  
|[CFtpConnection::GetFile](#cftpconnection__getfile)|Gets a file from the connected server|  
|[CFtpConnection::OpenFile](#cftpconnection__openfile)|Opens a file on the connected server.|  
|[CFtpConnection::PutFile](#cftpconnection__putfile)|Places a file on the server.|  
|[CFtpConnection::Remove](#cftpconnection__remove)|Removes a file from the server.|  
|[CFtpConnection::RemoveDirectory](#cftpconnection__removedirectory)|Removes the specified directory from the server.|  
|[CFtpConnection::Rename](#cftpconnection__rename)|Renames a file on the server.|  
|[CFtpConnection::SetCurrentDirectory](#cftpconnection__setcurrentdirectory)|Sets the current FTP directory.|  
  
## Remarks  
 FTP is one of the three Internet services recognized by the MFC WinInet classes.  
  
 To communicate with an FTP Internet server, you must first create an instance of [CInternetSession](../../mfc/reference/cinternetsession-class.md), and then create a `CFtpConnection` object. You never create a `CFtpConnection` object directly; rather, call [CInternetSession::GetFtpConnection](../../mfc/reference/cinternetsession-class.md#cinternetsession__getftpconnection), which creates the `CFtpConnection` object and returns a pointer to it.  
  
 To learn more about how `CFtpConnection` works with the other MFC Internet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md). For more information about communicating with the other two supported services, HTTP and gopher, see the classes [CHttpConnection](../../mfc/reference/chttpconnection-class.md) and [CGopherConnection](../../mfc/reference/cgopherconnection-class.md).  
  
## Example  
  See the example in the [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) class overview.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)  
  
 `CFtpConnection`  
  
## Requirements  
 **Header:** afxinet.h  
  
##  <a name="cftpconnection__cftpconnection"></a>  CFtpConnection::CFtpConnection  
 This member function is called to construct a `CFtpConnection` object.  
  
```  
CFtpConnection(
    CInternetSession* pSession,  
    HINTERNET hConnected,  
    LPCTSTR pstrServer,  
    DWORD_PTR dwContext);

 
CFtpConnection(
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    LPCTSTR pstrUserName = NULL,  
    LPCTSTR pstrPassword = NULL,  
    DWORD_PTR dwContext = 0,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,  
    BOOL bPassive = FALSE);
```  
  
### Parameters  
 `pSession`  
 A pointer to the related [CInternetSession](../../mfc/reference/cinternetsession-class.md) object.  
  
 `hConnected`  
 The Windows handle of the current Internet session.  
  
 `pstrServer`  
 A pointer to a string containing the FTP server name.  
  
 `dwContext`  
 The context identifier for the operation. `dwContext` identifies the operation's status information returned by [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#cinternetsession__onstatuscallback). The default is set to 1; however, you can explicitly assign a specific context ID for the operation. The object and any work it does will be associated with that context ID.  
  
 `pstrUserName`  
 Pointer to a null-terminated string that specifies the name of the user to log in. If **NULL**, the default is anonymous.  
  
 `pstrPassword`  
 A pointer to a null-terminated string that specifies the password to use to log in. If both `pstrPassword` and `pstrUserName` are **NULL**, the default anonymous password is the user's email name. If `pstrPassword` is **NULL** (or an empty string) but `pstrUserName` is not **NULL**, a blank password is used. The following table describes the behavior for the four possible settings of `pstrUserName` and `pstrPassword`:  
  
|`pstrUserName`|`pstrPassword`|Username sent to FTP server|Password sent to FTP server|  
|--------------------|--------------------|---------------------------------|---------------------------------|  
|**NULL** or " "|**NULL** or " "|"anonymous"|User's email name|  
|Non- **NULL** String|**NULL** or " "|`pstrUserName`|" "|  
|**NULL** Non- **NULL** String|**ERROR**|**ERROR**||  
|Non- **NULL** String|Non- **NULL** String|`pstrUserName`|`pstrPassword`|  
  
 `nPort`  
 A number that identifies the TCP/IP port to use on the server.  
  
 `bPassive`  
 Specifies passive or active mode for this FTP session. If set to **TRUE**, it sets the Win32 API `dwFlag` to **INTERNET_FLAG_PASSIVE**.  
  
### Remarks  
 You never create a `CFtpConnection` object directly. Instead, call [CInternetSession::GetFtpConnection](../../mfc/reference/cinternetsession-class.md#cinternetsession__getftpconnection), which creates the **CFptConnection** object.  
  
##  <a name="cftpconnection__command"></a>  CFtpConnection::Command  
 Sends a command directly to an FTP server.  
  
```  
CInternetFile* Command(
    LPCTSTR pszCommand,  
    CmdResponseType eResponse = CmdRespNone,  
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,  
    DWORD_PTR dwContext = 1);
```  
  
### Parameters  
 `pszCommand`  
 A pointer to a string containing the command to be sent.  
  
 *eResponse*  
 Determines whether a response is expected from the FTP server. Can be one of the following values:  
  
- **CmdRespNone** No response is expected.  
  
- **CmdRespRead** A response is expected.  
  
 `dwFlags`  
 A value containing the flags that control this function. For a complete list, see [FTPCommand](http://msdn.microsoft.com/library/windows/desktop/aa384133).  
  
 `dwContext`  
 A pointer to a value containing an application-defined value used to identify the application context in callbacks.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function emulates the functionality of the [FTPCommand](http://msdn.microsoft.com/library/windows/desktop/aa384133) function, as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 If an error occurs, MFC throws an exception of type [CInternetException](../../mfc/reference/cinternetexception-class.md).  
  
##  <a name="cftpconnection__createdirectory"></a>  CFtpConnection::CreateDirectory  
 Call this member function to create a directory on the connected server.  
  
```  
BOOL CreateDirectory(LPCTSTR pstrDirName);
```  
  
### Parameters  
 `pstrDirName`  
 A pointer to a string containing the name of the directory to create.  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Windows function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
### Remarks  
 Use `GetCurrentDirectory` to determine the current working directory for this connection to the server. Do not assume that the remote system has connected you to the root directory.  
  
 The `pstrDirName` parameter can be either a partially or a fully qualified filename relative to the current directory. A backslash (\\) or forward slash (/) can be used as the directory separator for either name. `CreateDirectory` translates the directory name separators to the appropriate characters before they are used.  
  
##  <a name="cftpconnection__getcurrentdirectory"></a>  CFtpConnection::GetCurrentDirectory  
 Call this member function to get the name of the current directory.  
  
```  
BOOL GetCurrentDirectory(
    CString& strDirName) const;

 
 
BOOL GetCurrentDirectory(
    LPTSTR pstrDirName,  
    LPDWORD lpdwLen) const;

 
```  
  
### Parameters  
 `strDirName`  
 A reference to a string that will receive the name of the directory.  
  
 `pstrDirName`  
 A pointer to a string that will receive the name of the directory.  
  
 `lpdwLen`  
 A pointer to a DWORD that contains the following information:  
  
|||  
|-|-|  
|On entry|The size of the buffer referenced by `pstrDirName`.|  
|On return|The number of characters stored to `pstrDirName`. If the member function fails and ERROR_INSUFFICIENT_BUFFER is returned, then `lpdwLen` contains the number of bytes that the application must allocate in order to receive the string.|  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
### Remarks  
 To get the directory name as a URL instead, call [GetCurrentDirectoryAsURL](#cftpconnection__getcurrentdirectoryasurl).  
  
 The parameters `pstrDirName` or `strDirName` can be either partially qualified filenames relative to the current directory or fully qualified. A backslash (\\) or forward slash (/) can be used as the directory separator for either name. `GetCurrentDirectory` translates the directory name separators to the appropriate characters before they are used.  
  
##  <a name="cftpconnection__getcurrentdirectoryasurl"></a>  CFtpConnection::GetCurrentDirectoryAsURL  
 Call this member function to get the current directory's name as a URL.  
  
```  
BOOL GetCurrentDirectoryAsURL(
    CString& strDirName) const;

 
 
BOOL GetCurrentDirectoryAsURL(
    LPTSTR pstrName,  
    LPDWORD lpdwLen) const;

 
```  
  
### Parameters  
 `strDirName`  
 A reference to a string that will receive the name of the directory.  
  
 `pstrDirName`  
 A pointer to a string that will receive the name of the directory.  
  
 `lpdwLen`  
 A pointer to a DWORD that contains the following information:  
  
|||  
|-|-|  
|On entry|The size of the buffer referenced by `pstrDirName`.|  
|On return|The number of characters stored to `pstrDirName`. If the member function fails and ERROR_INSUFFICIENT_BUFFER is returned, then `lpdwLen` contains the number of bytes that the application must allocate in order to receive the string.|  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
### Remarks  
 `GetCurrentDirectoryAsURL` behaves the same as [GetCurrentDirectory](#cftpconnection__getcurrentdirectory)  
  
 The parameter `strDirName` can be either partially qualified filenames relative to the current directory or fully qualified. A backslash (\\) or forward slash (/) can be used as the directory separator for either name. `GetCurrentDirectoryAsURL` translates the directory name separators to the appropriate characters before they are used.  
  
##  <a name="cftpconnection__getfile"></a>  CFtpConnection::GetFile  
 Call this member function to get a file from an FTP server and store it on the local machine.  
  
```  
BOOL GetFile(
    LPCTSTR pstrRemoteFile,  
    LPCTSTR pstrLocalFile,  
    BOOL bFailIfExists = TRUE,  
    DWORD dwAttributes = FILE_ATTRIBUTE_NORMAL,  
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,  
    DWORD_PTR dwContext = 1);
```  
  
### Parameters  
 `pstrRemoteFile`  
 A pointer to a null-terminated string containing the name of a file to retrieve from the FTP server.  
  
 `pstrLocalFile`  
 A pointer to a null-terminated string containing the name of the file to create on the local system.  
  
 *bFailIfExists*  
 Indicates whether the file name may already be used by an existing file. If the local file name already exists, and this parameter is **TRUE**, `GetFile` fails. Otherwise, `GetFile` will erase the existing copy of the file.  
  
 `dwAttributes`  
 Indicates the attributes of the file. This can be any combination of the following FILE_ATTRIBUTE_* flags.  
  
-   FILE_ATTRIBUTE_ARCHIVE   The file is an archive file. Applications use this attribute to mark files for backup or removal.  
  
-   FILE_ATTRIBUTE_COMPRESSED   The file or directory is compressed. For a file, compression means that all of the data in the file is compressed. For a directory, compression is the default for newly created files and subdirectories.  
  
-   FILE_ATTRIBUTE_DIRECTORY   The file is a directory.  
  
-   FILE_ATTRIBUTE_NORMAL   The file has no other attributes set. This attribute is valid only if used alone. All other file attributes override FILE_ATTRIBUTE_NORMAL:  
  
-   FILE_ATTRIBUTE_HIDDEN   The file is hidden. It is not to be included in an ordinary directory listing.  
  
-   FILE_ATTRIBUTE_READONLY   The file is read only. Applications can read the file but cannot write to it or delete it.  
  
-   FILE_ATTRIBUTE_SYSTEM   The file is part of or is used exclusively by the operating system.  
  
-   FILE_ATTRIBUTE_TEMPORARY   The file is being used for temporary storage. Applications should write to the file only if absolutely necessary. Most of the file's data remains in memory without being flushed to the media because the file will soon be deleted.  
  
 `dwFlags`  
 Specifies the conditions under which the transfer occurs. This parameter can be any of the `dwFlags` values described in [FtpGetFile](http://msdn.microsoft.com/library/windows/desktop/aa384157) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwContext`  
 The context identifier for the file retrieval. See **Remarks** for more information about `dwContext`.  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
### Remarks  
 `GetFile` is a high-level routine that handles all of the overhead associated with reading a file from an FTP server and storing it locally. Applications that only retrieve file data, or that require close control over the file transfer, should use `OpenFile` and [CInternetFile::Read](../../mfc/reference/cinternetfile-class.md#cinternetfile__read) instead.  
  
 If `dwFlags` is FILE_TRANSFER_TYPE_ASCII, translation of file data also converts control and formatting characters to Windows equivalents. The default transfer is binary mode, where the file is downloaded in the same format as it is stored on the server.  
  
 Both `pstrRemoteFile` and `pstrLocalFile` can be either partially qualified filenames relative to the current directory or fully qualified. A backslash (\\) or forward slash (/) can be used as the directory separator for either name. `GetFile` translates the directory name separators to the appropriate characters before they are used.  
  
 Override the `dwContext` default to set the context identifier to a value of your choosing. The context identifier is associated with this specific operation of the `CFtpConnection` object created by its [CInternetSession](../../mfc/reference/cinternetsession-class.md) object. The value is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#cinternetsession__onstatuscallback) to provide status on the operation with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.  
  
##  <a name="cftpconnection__openfile"></a>  CFtpConnection::OpenFile  
 Call this member function to open a file located on an FTP server for reading or writing.  
  
```  
CInternetFile* OpenFile(
    LPCTSTR pstrFileName,  
    DWORD dwAccess = GENERIC_READ,  
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,  
    DWORD_PTR dwContext = 1);
```  
  
### Parameters  
 `pstrFileName`  
 A pointer to a string containing the name of the file to be opened.  
  
 *dwAccess*  
 Determines how the file will be accessed. Can be either GENERIC_READ or GENERIC_WRITE, but not both.  
  
 `dwFlags`  
 Specifies the conditions under which subsequent transfers occur. This can be any of the following FTP_TRANSFER_* constants:  
  
-   FTP_TRANSFER_TYPE_ASCII   The file transfers using FTP ASCII (Type A) transfer method. Converts control and formatting information to local equivalents.  
  
-   FTP_TRANSFER_TYPE_BINARY   The file transfers data using FTP's Image (Type I) transfer method. The file transfers data exactly as it exists, with no changes. This is the default transfer method.  
  
 `dwContext`  
 The context identifier for opening the file. See **Remarks** for more information about `dwContext`.  
  
### Return Value  
 A pointer to a [CInternetFile](../../mfc/reference/cinternetfile-class.md) object.  
  
### Remarks  
 `OpenFile` should be used in the following situations:  
  
-   An application has data that needs to be sent and created as a file on the FTP server, but that data is not in a local file. Once `OpenFile` opens a file, the application uses [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#cinternetfile__write) to send the FTP file data to the server.  
  
-   An application must retrieve a file from the server and place it into application-controlled memory, instead of writing it to disk. The application uses [CInternetFile::Read](../../mfc/reference/cinternetfile-class.md#cinternetfile__read) after using `OpenFile` to open the file.  
  
-   An application needs a fine level of control over a file transfer. For example, the application may want to display a progress control indicate the progress of the file transfer status while downloading a file.  
  
 After calling `OpenFile` and until calling **CInternetConnection::Close**, the application can only call [CInternetFile::Read](../../mfc/reference/cinternetfile-class.md#cinternetfile__read), [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#cinternetfile__write), **CInternetConnection::Close**, or [CFtpFileFind::FindFile](../../mfc/reference/cftpfilefind-class.md#cftpfilefind__findfile). Calls to other FTP functions for the same FTP session will fail and set the error code to FTP_ETRANSFER_IN_PROGRESS.  
  
 The `pstrFileName` parameter can be either a partially qualified filename relative to the current directory or fully qualified. A backslash (\\) or forward slash (/) can be used as the directory separator for either name. `OpenFile` translates the directory name separators to the appropriate characters before using it.  
  
 Override the `dwContext` default to set the context identifier to a value of your choosing. The context identifier is associated with this specific operation of the `CFtpConnection` object created by its [CInternetSession](../../mfc/reference/cinternetsession-class.md) object. The value is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#cinternetsession__onstatuscallback) to provide status on the operation with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.  
  
##  <a name="cftpconnection__putfile"></a>  CFtpConnection::PutFile  
 Call this member function to store a file on an FTP server.  
  
```  
BOOL PutFile(
    LPCTSTR pstrLocalFile,  
    LPCTSTR pstrRemoteFile,  
    DWORD dwFlags = FTP_TRANSFER_TYPE_BINARY,  
    DWORD_PTR dwContext = 1);
```  
  
### Parameters  
 `pstrLocalFile`  
 A pointer to a string containing the name of the file to send from the local system.  
  
 `pstrRemoteFile`  
 A pointer to a string containing the name of the file to create on the FTP server.  
  
 `dwFlags`  
 Specifies the conditions under which the transfer of the file occurs. Can be any of the FTP_TRANSFER_* constants described in [OpenFile](#cftpconnection__openfile).  
  
 `dwContext`  
 The context identifier for placing the file. See **Remarks** for more information about `dwContext`.  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
### Remarks  
 `PutFile` is a high-level routine that handles all of the operations associated with storing a file on an FTP server. Applications that only send data, or that require closer control over the file transfer, should use [OpenFile](#cftpconnection__openfile) and [CInternetFile::Write](../../mfc/reference/cinternetfile-class.md#cinternetfile__write).  
  
 Override the `dwContext` default to set the context identifier to a value of your choosing. The context identifier is associated with this specific operation of the `CFtpConnection` object created by its [CInternetSession](../../mfc/reference/cinternetsession-class.md) object. The value is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#cinternetsession__onstatuscallback) to provide status on the operation with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.  
  
##  <a name="cftpconnection__remove"></a>  CFtpConnection::Remove  
 Call this member function to delete the specified file from the connected server.  
  
```  
BOOL Remove(LPCTSTR pstrFileName);
```  
  
### Parameters  
 `pstrFileName`  
 A pointer to a string containing the file name to remove.  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
### Remarks  
 The `pstrFileName` parameter can be either a partially qualified filename relative to the current directory or fully qualified. A backslash (\\) or forward slash (/) can be used as the directory separator for either name. The **Remove** function translates the directory name separators to the appropriate characters before they are used.  
  
##  <a name="cftpconnection__removedirectory"></a>  CFtpConnection::RemoveDirectory  
 Call this member function to remove the specified directory from the connected server.  
  
```  
BOOL RemoveDirectory(LPCTSTR pstrDirName);
```  
  
### Parameters  
 `pstrDirName`  
 A pointer to a string containing the directory to be removed.  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
### Remarks  
 Use [GetCurrentDirectory](#cftpconnection__getcurrentdirectory) to determine the server's current working directory. Do not assume that the remote system has connected you to the root directory.  
  
 The `pstrDirName` parameter can be either a partially or fully qualified filename relative to the current directory. A backslash (\\) or forward slash (/) can be used as the directory separator for either name. `RemoveDirectory` translates the directory name separators to the appropriate characters before they are used.  
  
##  <a name="cftpconnection__rename"></a>  CFtpConnection::Rename  
 Call this member function to rename the specified file on the connected server.  
  
```  
BOOL Rename(
    LPCTSTR pstrExisting,  
    LPCTSTR pstrNew);
```  
  
### Parameters  
 `pstrExisting`  
 A pointer to a string containing the current name of the file to be renamed.  
  
 `pstrNew`  
 A pointer to a string containing the file's new name.  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
### Remarks  
 The `pstrExisting` and `pstrNew` parameters can be either a partially qualified filename relative to the current directory or fully qualified. A backslash (\\) or forward slash (/) can be used as the directory separator for either name. **Rename** translates the directory name separators to the appropriate characters before they are used.  
  
##  <a name="cftpconnection__setcurrentdirectory"></a>  CFtpConnection::SetCurrentDirectory  
 Call this member function to change to a different directory on the FTP server.  
  
```  
BOOL SetCurrentDirectory(LPCTSTR pstrDirName);
```  
  
### Parameters  
 `pstrDirName`  
 A pointer to a string containing the name of the directory.  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
### Remarks  
 The `pstrDirName` parameter can be either a partially or fully qualified filename relative to the current directory. A backslash (\\) or forward slash (/) can be used as the directory separator for either name. `SetCurrentDirectory` translates the directory name separators to the appropriate characters before they are used.  
  
 Use [GetCurrentDirectory](#cftpconnection__getcurrentdirectory) to determine an FTP server's current working directory. Do not assume that the remote system has connected you to the root directory.  
  
## See Also  
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [CInternetSession Class](../../mfc/reference/cinternetsession-class.md)
