---
description: "Learn more about: CUrl Class"
title: "CUrl Class"
ms.date: "05/06/2019"
f1_keywords: ["CUrl", "ATLUTIL/ATL::CUrl", "ATLUTIL/ATL::CUrl::CUrl", "ATLUTIL/ATL::CUrl::Canonicalize", "ATLUTIL/ATL::CUrl::Clear", "ATLUTIL/ATL::CUrl::CrackUrl", "ATLUTIL/ATL::CUrl::CreateUrl", "ATLUTIL/ATL::CUrl::GetExtraInfo", "ATLUTIL/ATL::CUrl::GetExtraInfoLength", "ATLUTIL/ATL::CUrl::GetHostName", "ATLUTIL/ATL::CUrl::GetHostNameLength", "ATLUTIL/ATL::CUrl::GetPassword", "ATLUTIL/ATL::CUrl::GetPasswordLength", "ATLUTIL/ATL::CUrl::GetPortNumber", "ATLUTIL/ATL::CUrl::GetScheme", "ATLUTIL/ATL::CUrl::GetSchemeName", "ATLUTIL/ATL::CUrl::GetSchemeNameLength", "ATLUTIL/ATL::CUrl::GetUrlLength", "ATLUTIL/ATL::CUrl::GetUrlPath", "ATLUTIL/ATL::CUrl::GetUrlPathLength", "ATLUTIL/ATL::CUrl::GetUserName", "ATLUTIL/ATL::CUrl::GetUserNameLength", "ATLUTIL/ATL::CUrl::SetExtraInfo", "ATLUTIL/ATL::CUrl::SetHostName", "ATLUTIL/ATL::CUrl::SetPassword", "ATLUTIL/ATL::CUrl::SetPortNumber", "ATLUTIL/ATL::CUrl::SetScheme", "ATLUTIL/ATL::CUrl::SetSchemeName", "ATLUTIL/ATL::CUrl::SetUrlPath", "ATLUTIL/ATL::CUrl::SetUserName"]
helpviewer_keywords: ["CUrl class"]
ms.assetid: b3894d34-47b9-4961-9719-4197153793da
---
# CUrl Class

This class represents a URL. It allows you to manipulate each element of the URL independently of the others whether parsing an existing URL string or building a string from scratch.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CUrl
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CUrl::CUrl](#curl)|The constructor.|
|[CUrl::~CUrl](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CUrl::Canonicalize](#canonicalize)|Call this method to convert the URL string to canonical form.|
|[CUrl::Clear](#clear)|Call this method to clear all of the URL fields.|
|[CUrl::CrackUrl](#crackurl)|Call this method to decode and parse the URL.|
|[CUrl::CreateUrl](#createurl)|Call this method to create the URL.|
|[CUrl::GetExtraInfo](#getextrainfo)|Call this method to get extra information (such as *text* or # *text*) from the URL.|
|[CUrl::GetExtraInfoLength](#getextrainfolength)|Call this method to get the length of the extra information (such as *text* or # *text*) to retrieve from the URL.|
|[CUrl::GetHostName](#gethostname)|Call this method to get the host name from the URL.|
|[CUrl::GetHostNameLength](#gethostnamelength)|Call this method to get the length of the host name.|
|[CUrl::GetPassword](#getpassword)|Call this method to get the password from the URL.|
|[CUrl::GetPasswordLength](#getpasswordlength)|Call this method to get the length of the password.|
|[CUrl::GetPortNumber](#getportnumber)|Call this method to get the port number in terms of ATL_URL_PORT.|
|[CUrl::GetScheme](#getscheme)|Call this method to get the URL scheme.|
|[CUrl::GetSchemeName](#getschemename)|Call this method to get the URL scheme name.|
|[CUrl::GetSchemeNameLength](#getschemenamelength)|Call this method to get the length of the URL scheme name.|
|[CUrl::GetUrlLength](#geturllength)|Call this method to get the URL length.|
|[CUrl::GetUrlPath](#geturlpath)|Call this method to get the URL path.|
|[CUrl::GetUrlPathLength](#geturlpathlength)|Call this method to get the URL path length.|
|[CUrl::GetUserName](#getusername)|Call this method to get the user name from the URL.|
|[CUrl::GetUserNameLength](#getusernamelength)|Call this method to get the length of the user name.|
|[CUrl::SetExtraInfo](#setextrainfo)|Call this method to set the extra information (such as *text* or # *text*) of the URL.|
|[CUrl::SetHostName](#sethostname)|Call this method to set the host name.|
|[CUrl::SetPassword](#setpassword)|Call this method to set the password.|
|[CUrl::SetPortNumber](#setportnumber)|Call this method to set the port number in terms of ATL_URL_PORT.|
|[CUrl::SetScheme](#setscheme)|Call this method to set the URL scheme.|
|[CUrl::SetSchemeName](#setschemename)|Call this method to set the URL scheme name.|
|[CUrl::SetUrlPath](#seturlpath)|Call this method to set the URL path.|
|[CUrl::SetUserName](#setusername)|Call this method to set the user name.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CUrl::operator =](#operator_eq)|Assigns the specified `CUrl` object to the current `CUrl` object.|

## Remarks

`CUrl` allows you to manipulate the fields of a URL, such as the path or port number. `CUrl` understands URLs of the following form:

\<Scheme>://\<UserName>:\<Password>\@\<HostName>:\<PortNumber>/\<UrlPath>\<ExtraInfo>

(Some fields are optional.) For example, consider this URL:

`http://someone:secret@www.microsoft.com:80/visualc/stuff.htm#contents`

[CUrl::CrackUrl](#crackurl) parses it as follows:

- Scheme: "http" or [ATL_URL_SCHEME_HTTP](atl-url-scheme-enum.md)

- UserName: "someone"

- Password: "secret"

- HostName: "`www.microsoft.com`"

- PortNumber: 80

- UrlPath: "visualc/stuff.htm"

- ExtraInfo: "#contents"

To manipulate the UrlPath field (for instance), you would use [GetUrlPath](#geturlpath), [GetUrlPathLength](#geturlpathlength), and [SetUrlPath](#seturlpath). You would use [CreateUrl](#createurl) to create the complete URL string.

## Requirements

**Header:** atlutil.h

## <a name="canonicalize"></a> CUrl::Canonicalize

Call this method to convert the URL string to canonical form.

```
inline BOOL Canonicalize(DWORD dwFlags = 0) throw();
```

### Parameters

*dwFlags*<br/>
The flags that control canonicalization. If no flags are specified (*dwFlags* = 0), the method converts all unsafe characters and meta sequences (such as \\.,\ .., and \\...) to escape sequences. *dwFlags* can be one of the following values:

- ATL_URL_BROWSER_MODE: Does not encode or decode characters after "#" or "" and does not remove trailing white space after "". If this value is not specified, the entire URL is encoded and trailing white space is removed.

- ATL_URL _DECODE: Converts all %XX sequences to characters, including escape sequences, before the URL is parsed.

- ATL_URL _ENCODE_PERCENT: Encodes any percent signs encountered. By default, percent signs are not encoded.

- ATL_URL _ENCODE_SPACES_ONLY: Encodes spaces only.

- ATL_URL _NO_ENCODE: Does not convert unsafe characters to escape sequences.

- ATL_URL _NO_META: Does not remove meta sequences (such as "." and "..") from the URL.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

Converting to canonical form involves converting unsafe characters and spaces to escape sequences.

## <a name="clear"></a> CUrl::Clear

Call this method to clear all of the URL fields.

```
inline void Clear() throw();
```

## <a name="crackurl"></a> CUrl::CrackUrl

Call this method to decode and parse the URL.

```
BOOL CrackUrl(LPCTSTR lpszUrl, DWORD dwFlags = 0) throw();
```

### Parameters

*lpszUrl*<br/>
The URL.

*dwFlags*<br/>
Specify ATL_URL_DECODE or ATL_URL_ESCAPE to convert all escape characters in *lpszUrl* to their real values after parsing. (Before Visual C++ 2005, ATL_URL_DECODE converted all escape characters before parsing.)

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="createurl"></a> CUrl::CreateUrl

This method constructs a URL string from a CUrl object's component fields.

```
inline BOOL CreateUrl(
    LPTSTR lpszUrl,
    DWORD* pdwMaxLength,
    DWORD dwFlags = 0) const throw();
```

### Parameters

*lpszUrl*<br/>
A string buffer to hold the complete URL string.

*pdwMaxLength*<br/>
The maximum length of the *lpszUrl* string buffer.

*dwFlags*<br/>
Specify ATL_URL_ESCAPE to convert all escape characters in *lpszUrl* to their real values.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

This method appends its individual fields in order to construct the complete URL string using the following format:

**\<scheme>://\<user>:\<pass>\@\<domain>:\<port>\<path>\<extra>**

When calling this method, the *pdwMaxLength* parameter should initially contain the maximum length of the string buffer referenced by the *lpszUrl* parameter. The value of the *pdwMaxLength* parameter will be updated with the actual length of the URL string.

### Example

This sample demonstrates creation of a CUrl object and retrieving its URL string

[!code-cpp[NVC_ATL_Utilities#133](../../atl/codesnippet/cpp/curl-class_1.cpp)]

## <a name="curl"></a> CUrl::CUrl

The constructor.

```
CUrl() throw();
CUrl(const CUrl& urlThat) throw();
```

### Parameters

*urlThat*<br/>
The `CUrl` object to copy to create the URL.

## <a name="dtor"></a> CUrl::~CUrl

The destructor.

```
~CUrl() throw();
```

## <a name="getextrainfo"></a> CUrl::GetExtraInfo

Call this method to get extra information (such as *text* or # *text*) from the URL.

```
inline LPCTSTR GetExtraInfo() const throw();
```

### Return Value

Returns a string containing the extra information.

## <a name="getextrainfolength"></a> CUrl::GetExtraInfoLength

Call this method to get the length of the extra information (such as *text* or # *text*) to retrieve from the URL.

```
inline DWORD GetExtraInfoLength() const throw();
```

### Return Value

Returns the length of the string containing the extra information.

## <a name="gethostname"></a> CUrl::GetHostName

Call this method to get the host name from the URL.

```
inline LPCTSTR GetHostName() const throw();
```

### Return Value

Returns the host name.

## <a name="gethostnamelength"></a> CUrl::GetHostNameLength

Call this method to get the length of the host name.

```
inline DWORD GetHostNameLength() const throw();
```

### Return Value

Returns the host name length.

## <a name="getpassword"></a> CUrl::GetPassword

Call this method to get the password from the URL.

```
inline LPCTSTR GetPassword() const throw();
```

### Return Value

Returns the password.

## <a name="getpasswordlength"></a> CUrl::GetPasswordLength

Call this method to get the length of the password.

```
inline DWORD GetPasswordLength() const throw();
```

### Return Value

Returns the password length.

## <a name="getportnumber"></a> CUrl::GetPortNumber

Call this method to get the port number.

```
inline ATL_URL_PORT GetPortNumber() const throw();
```

### Return Value

Returns the port number.

## <a name="getscheme"></a> CUrl::GetScheme

Call this method to get the URL scheme.

```
inline ATL_URL_SCHEME GetScheme() const throw();
```

### Return Value

Returns the [ATL_URL_SCHEME](atl-url-scheme-enum.md) value describing the scheme of the URL.

## <a name="getschemename"></a> CUrl::GetSchemeName

Call this method to get the URL scheme name.

```
inline LPCTSTR GetSchemeName() const throw();
```

### Return Value

Returns the URL scheme name (such as "http" or "ftp").

## <a name="getschemenamelength"></a> CUrl::GetSchemeNameLength

Call this method to get the length of the URL scheme name.

```
inline DWORD GetSchemeNameLength() const throw();
```

### Return Value

Returns the URL scheme name length.

## <a name="geturllength"></a> CUrl::GetUrlLength

Call this method to get the URL length.

```
inline DWORD GetUrlLength() const throw();
```

### Return Value

Returns the URL length.

## <a name="geturlpath"></a> CUrl::GetUrlPath

Call this method to get the URL path.

```
inline LPCTSTR GetUrlPath() const throw();
```

### Return Value

Returns the URL path.

## <a name="geturlpathlength"></a> CUrl::GetUrlPathLength

Call this method to get the URL path length.

```
inline DWORD GetUrlPathLength() const throw();
```

### Return Value

Returns the URL path length.

## <a name="getusername"></a> CUrl::GetUserName

Call this method to get the user name from the URL.

```
inline LPCTSTR GetUserName() const throw();
```

### Return Value

Returns the user name.

## <a name="getusernamelength"></a> CUrl::GetUserNameLength

Call this method to get the length of the user name.

```
inline DWORD GetUserNameLength() const throw();
```

### Return Value

Returns the user name length.

## <a name="operator_eq"></a> CUrl::operator =

Assigns the specified `CUrl` object to the current `CUrl` object.

```
CUrl& operator= (const CUrl& urlThat) throw();
```

### Parameters

*urlThat*<br/>
The `CUrl` object to copy into the current object.

### Return Value

Returns a reference to the current object.

## <a name="setextrainfo"></a> CUrl::SetExtraInfo

Call this method to set the extra information (such as *text* or # *text*) of the URL.

```
inline BOOL SetExtraInfo(LPCTSTR lpszInfo) throw();
```

### Parameters

*lpszInfo*<br/>
The string containing the extra information to include in the URL.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="sethostname"></a> CUrl::SetHostName

Call this method to set the host name.

```
inline BOOL SetHostName(LPCTSTR lpszHost) throw();
```

### Parameters

*lpszHost*<br/>
The host name.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="setpassword"></a> CUrl::SetPassword

Call this method to set the password.

```
inline BOOL SetPassword(LPCTSTR lpszPass) throw();
```

### Parameters

*lpszPass*<br/>
The password.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="setportnumber"></a> CUrl::SetPortNumber

Call this method to set the port number.

```
inline BOOL SetPortNumber(ATL_URL_PORT nPrt) throw();
```

### Parameters

*nPrt*<br/>
The port number.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="setscheme"></a> CUrl::SetScheme

Call this method to set the URL scheme.

```
inline BOOL SetScheme(ATL_URL_SCHEME nScheme) throw();
```

### Parameters

*nScheme*<br/>
One of the [ATL_URL_SCHEME](atl-url-scheme-enum.md) values for the scheme.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

You can also set the scheme by name (see [CUrl::SetSchemeName](#setschemename)).

## <a name="setschemename"></a> CUrl::SetSchemeName

Call this method to set the URL scheme name.

```
inline BOOL SetSchemeName(LPCTSTR lpszSchm) throw();
```

### Parameters

*lpszSchm*<br/>
The URL scheme name.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

You can also set the scheme by using an [ATL_URL_SCHEME](atl-url-scheme-enum.md) constant (see [CUrl::SetScheme](#setscheme)).

## <a name="seturlpath"></a> CUrl::SetUrlPath

Call this method to set the URL path.

```
inline BOOL SetUrlPath(LPCTSTR lpszPath) throw();
```

### Parameters

*lpszPath*<br/>
The URL path.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="setusername"></a> CUrl::SetUserName

Call this method to set the user name.

```
inline BOOL SetUserName(LPCTSTR lpszUser) throw();
```

### Parameters

*lpszUser*<br/>
The user name.

### Return Value

Returns TRUE on success, FALSE on failure.

## See also

[Classes](../../atl/reference/atl-classes.md)
