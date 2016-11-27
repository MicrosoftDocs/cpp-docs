---
title: "Internet URL Parsing Globals | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.isapi"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "parsing, URLs"
  - "URLs, parsing"
ms.assetid: 46c6384f-e4a6-4dbd-9196-219c19040ec5
caps.latest.revision: 14
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
# Internet URL Parsing Globals
When a client sends a query to the Internet server, you can use one of the URL parsing globals to extract information about the client.  
  
### Internet URL Parsing Globals  
  
|||  
|-|-|  
|[AfxParseURL](#afxparseurl)|Parses a URL string and returns the type of service and its components.|  
|[AfxParseURLEx](#afxparseurlex)|Parses a URL string and returns the type of service and its components, as well as providing the user name and password.|  
  
##  <a name="afxparseurl"></a>  AfxParseURL  
 This global is used in [CInternetSession::OpenURL](../../mfc/reference/cinternetsession-class.md#cinternetsession__openurl).  
  
```   
BOOL AFXAPI AfxParseURL(
    LPCTSTR pstrURL,  
    DWORD& dwServiceType,  
    CString& strServer,  
    CString& strObject,  
    INTERNET_PORT& nPort); 
```  
  
### Parameters  
 *pstrURL*  
 A pointer to a string containing the URL to be parsed.  
  
 `dwServiceType`  
 Indicates the type of Internet service. Possible values are as follows:  
  
-   AFX_INET_SERVICE_FTP  
  
-   AFX_INET_SERVICE_HTTP  
  
-   AFX_INET_SERVICE_HTTPS  
  
-   AFX_INET_SERVICE_GOPHER  
  
-   AFX_INET_SERVICE_FILE  
  
-   AFX_INET_SERVICE_MAILTO  
  
-   AFX_INET_SERVICE_NEWS  
  
-   AFX_INET_SERVICE_NNTP  
  
-   AFX_INET_SERVICE_TELNET  
  
-   AFX_INET_SERVICE_WAIS  
  
-   AFX_INET_SERVICE_MID  
  
-   AFX_INET_SERVICE_CID  
  
-   AFX_INET_SERVICE_PROSPERO  
  
-   AFX_INET_SERVICE_AFS  
  
-   AFX_INET_SERVICE_UNK  
  
 `strServer`  
 The first segment of the URL following the service type.  
  
 `strObject`  
 An object that the URL refers to (may be empty).  
  
 `nPort`  
 Determined from either the Server or Object portions of the URL, if either exists.  
  
### Return Value  
 Nonzero if the URL was successfully parsed; otherwise, 0 if it is empty or does not contain a known Internet service type.  
  
### Remarks  
 It parses a URL string and returns the type of service and its components.  
  
 For example, `AfxParseURL` parses URLs of the form **service://server/dir/dir/object.ext:port** and returns its components stored as follows:  
  
 `strServer` == "server"  
  
 `strObject` == "/dir/dir/object/object.ext"  
  
 `nPort` == #port  
  
 `dwServiceType` == #service  
  
> [!NOTE]
>  To call this function, your project must include AFXINET.H.  
  
##  <a name="afxparseurlex"></a>  AfxParseURLEx  
 This global function is the extended version of [AfxParseURL](#afxparseurl) and is used in [CInternetSession::OpenURL](../../mfc/reference/cinternetsession-class.md#cinternetsession__openurl).  
  
```   
BOOL AFXAPI AfxParseURLEx(
    LPCTSTR pstrURL,  
    DWORD& dwServiceType,  
    CString& strServer,  
    CString& strObject,  
    INTERNET_PORT& nPort,  
    CString& strUsername,  
    CString& strPassword,  
    DWORD dwFlags = 0); 
```  
  
### Parameters  
 *pstrURL*  
 A pointer to a string containing the URL to be parsed.  
  
 `dwServiceType`  
 Indicates the type of Internet service. Possible values are as follows:  
  
-   AFX_INET_SERVICE_FTP  
  
-   AFX_INET_SERVICE_HTTP  
  
-   AFX_INET_SERVICE_HTTPS  
  
-   AFX_INET_SERVICE_GOPHER  
  
-   AFX_INET_SERVICE_FILE  
  
-   AFX_INET_SERVICE_MAILTO  
  
-   AFX_INET_SERVICE_NEWS  
  
-   AFX_INET_SERVICE_NNTP  
  
-   AFX_INET_SERVICE_TELNET  
  
-   AFX_INET_SERVICE_WAIS  
  
-   AFX_INET_SERVICE_MID  
  
-   AFX_INET_SERVICE_CID  
  
-   AFX_INET_SERVICE_PROSPERO  
  
-   AFX_INET_SERVICE_AFS  
  
-   AFX_INET_SERVICE_UNK  
  
 `strServer`  
 The first segment of the URL following the service type.  
  
 `strObject`  
 An object that the URL refers to (may be empty).  
  
 `nPort`  
 Determined from either the Server or Object portions of the URL, if either exists.  
  
 *strUsername*  
 A reference to a `CString` object containing the name of the user.  
  
 `strPassword`  
 A reference to a `CString` object containing the password of the user.  
  
 `dwFlags`  
 The flags controlling how to parse the URL. Can be a combination of the following values:  
  
|Value|Meaning|  
|-----------|-------------|  
|**ICU_DECODE**|Convert %XX escape sequences to characters.|  
|**ICU_NO_ENCODE**|Do not convert unsafe characters to escape sequence.|  
|**ICU_NO_META**|Do not remove meta sequences (such as "\ ." and "\ ..") from the URL.|  
|**ICU_ENCODE_SPACES_ONLY**|Encode spaces only.|  
|**ICU_BROWSER_MODE**|Do not encode or decode characters after '#' or '', and do not remove trailing white space after ''. If this value is not specified, the entire URL is encoded and trailing white space is removed.|  
  
 If you use the MFC default, which is no flags, the function converts all unsafe characters and meta sequences (such as \\.,\ .., and \\...) to escape sequences.  
  
### Return Value  
 Nonzero if the URL was successfully parsed; otherwise, 0 if it is empty or does not contain a known Internet service type.  
  
### Remarks  
 It parses a URL string and returns the type of service and its components, as well as providing the user's name and password. The flags indicate how unsafe characters are handled.  
  
> [!NOTE]
>  To call this function, your project must include AFXINET.H.  
  
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
