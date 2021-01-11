---
description: "Learn more about: ATL HTTP Utility Functions"
title: "ATL HTTP Utility Functions"
ms.date: "11/04/2016"
ms.assetid: 4db57ef2-31fa-4696-bbeb-79a9035033ed
---
# ATL HTTP Utility Functions

These functions support manipulation of URLs.

|Function|Description|
|-|-|
|[AtlCanonicalizeUrl](#atlcanonicalizeurl)|Canonicalizes a URL, which includes converting unsafe characters and spaces into escape sequences.|
|[AtlCombineUrl](#atlcombineurl)|Combines a base URL and a relative URL into a single, canonical URL.|
|[AtlEscapeUrl](#atlescapeurl)|Converts all unsafe characters to escape sequences.|
|[AtlGetDefaultUrlPort](#atlgetdefaulturlport)|Gets the default port number associated with a particular Internet protocol or scheme.|
|[AtlIsUnsafeUrlChar](#atlisunsafeurlchar)|Determines whether a character is safe for use in a URL.|
|[AtlUnescapeUrl](#atlunescapeurl)|Converts escaped characters back to their original values.|
|[RGBToHtml](#rgbtohtml)|Converts a [COLORREF](/windows/win32/gdi/colorref) value to the HTML text corresponding to that color value.|
|[SystemTimeToHttpDate](#systemtimetohttpdate)|Call this function to convert a system time to a string in a format suitable for using in HTTP headers.|

## Requirements

**Header:** atlutil.h

## <a name="atlcanonicalizeurl"></a> AtlCanonicalizeUrl

Call this function to canonicalize a URL, which includes converting unsafe characters and spaces into escape sequences.

```cpp
inline BOOL AtlCanonicalizeUrl(
   LPCTSTR szUrl,
   LPTSTR szCanonicalized,
   DWORD* pdwMaxLength,
   DWORD dwFlags = 0) throw();
```

### Parameters

*szUrl*<br/>
The URL to be canonicalized.

*szCanonicalized*<br/>
Caller-allocated buffer to receive the canonicalized URL.

*pdwMaxLength*<br/>
Pointer to a variable that contains the length in characters of *szCanonicalized*. If the function succeeds, the variable receives the number of characters written to the buffer including the terminating null character. If the function fails, the variable receives the required length in bytes of the buffer including space for the terminating null character.

*dwFlags*<br/>
ATL_URL flags controlling the behavior of this function.

- ATL_URL_BROWSER_MODE Does not encode or decode characters after "#" or "?", and does not remove trailing white space after "?". If this value is not specified, the entire URL is encoded and trailing white space is removed.

- ATL_URL_DECODE Converts all %XX sequences to characters, including escape sequences, before the URL is parsed.

- ATL_URL_ENCODE_PERCENT Encodes any percent signs encountered. By default, percent signs are not encoded.

- ATL_URL_ENCODE_SPACES_ONLY Encodes spaces only.

- ATL_URL_ESCAPE Converts all escape sequences (%XX) to their corresponding characters.

- ATL_URL_NO_ENCODE Does not convert unsafe characters to escape sequences.

- ATL_URL_NO_META Does not remove meta sequences (such as "." and "..") from the URL.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

Behaves like the current version of [InternetCanonicalizeUrl](/windows/win32/api/wininet/nf-wininet-internetcanonicalizeurlw) but does not require WinInet or Internet Explorer to be installed.

## <a name="atlcombineurl"></a> AtlCombineUrl

Call this function to combine a base URL and a relative URL into a single, canonical URL.

```cpp
inline BOOL AtlCombineUrl(
   LPCTSTR szBaseUrl,
   LPCTSTR szRelativeUrl,
   LPTSTR szBuffer,
   DWORD* pdwMaxLength,
   DWORD dwFlags = 0) throw();
```

### Parameters

*szBaseUrl*<br/>
The base URL.

*szRelativeUrl*<br/>
The URL relative to the base URL.

*szBuffer*<br/>
Caller-allocated buffer to receive the canonicalized URL.

*pdwMaxLength*<br/>
Pointer to a variable that contains the length in characters of *szBuffer*. If the function succeeds, the variable receives the number of characters written to the buffer including the terminating null character. If the function fails, the variable receives the required length in bytes of the buffer including space for the terminating null character.

*dwFlags*<br/>
Flags controlling the behavior of this function. See [AtlCanonicalizeUrl](#atlcanonicalizeurl).

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

Behaves like the current version of [InternetCombineUrl](/windows/win32/api/wininet/nf-wininet-internetcombineurlw) but does not require WinInet or Internet Explorer to be installed.

## <a name="atlescapeurl"></a> AtlEscapeUrl

Call this function to convert all unsafe characters to escape sequences.

```cpp
inline BOOL AtlEscapeUrl(
   LPCSTR szStringIn,
   LPSTR szStringOut,
   DWORD* pdwStrLen,
   DWORD dwMaxLength,
   DWORD dwFlags = 0) throw();

inline BOOL AtlEscapeUrl(
   LPCWSTR szStringIn,
   LPWSTR szStringOut,
   DWORD* pdwStrLen,
   DWORD dwMaxLength,
   DWORD dwFlags = 0) throw();
```

### Parameters

*lpszStringIn*<br/>
The URL to be converted.

*lpszStringOut*<br/>
Caller-allocated buffer to which the converted URL will be written.

*pdwStrLen*<br/>
Pointer to a DWORD variable. If the function succeeds, *pdwStrLen* receives the number of characters written to the buffer including the terminating null character. If the function fails, the variable receives the required length in bytes of the buffer including space for the terminating null character. When using the wide character version of this method, *pdwStrLen* receives the number of characters required, not the number of bytes.

*dwMaxLength*<br/>
The size of the buffer *lpszStringOut*.

*dwFlags*<br/>
ATL_URL flags controlling the behavior of this function. See [ATLCanonicalizeUrl](#atlcanonicalizeurl) for possible values.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="atlgetdefaulturlport"></a> AtlGetDefaultUrlPort

Call this function to get the default port number associated with a particular Internet protocol or scheme.

```cpp
inline ATL_URL_PORT AtlGetDefaultUrlPort(ATL_URL_SCHEME m_nScheme) throw();
```

### Parameters

*m_nScheme*<br/>
The [ATL_URL_SCHEME](atl-url-scheme-enum.md) value identifying the scheme for which you want to obtain the port number.

### Return Value

The [ATL_URL_PORT](atl-typedefs.md#atl_url_port) associated with the specified scheme or ATL_URL_INVALID_PORT_NUMBER if the scheme is not recognized.

## <a name="atlisunsafeurlchar"></a> AtlIsUnsafeUrlChar

Call this function to find out whether a character is safe for use in a URL.

```cpp
inline BOOL AtlIsUnsafeUrlChar(char chIn) throw();
```

### Parameters

*chIn*<br/>
The character to be tested for safety.

### Return Value

Returns TRUE if the input character is unsafe, FALSE otherwise.

### Remarks

Characters that should not be used in URLs can be tested using this function and converted using [AtlCanonicalizeUrl](#atlcanonicalizeurl).

## <a name="atlunescapeurl"></a> AtlUnescapeUrl

Call this function to convert escaped characters back to their original values.

```cpp
inline BOOL AtlUnescapeUrl(
   LPCSTR szStringIn,
   LPSTR szStringOut,
   LPDWORD pdwStrLen,
   DWORD dwMaxLength) throw();

inline BOOL AtlUnescapeUrl(
   LPCWSTR szStringIn,
   LPWSTR szStringOut,
   LPDWORD pdwStrLen,
   DWORD dwMaxLength) throw();
```

### Parameters

*lpszStringIn*<br/>
The URL to be converted.

*lpszStringOut*<br/>
Caller-allocated buffer to which the converted URL will be written.

*pdwStrLen*<br/>
Pointer to a DWORD variable. If the function succeeds, the variable receives the number of characters written to the buffer including the terminating null character. If the function fails, the variable receives the required length in bytes of the buffer including space for the terminating null character.

*dwMaxLength*<br/>
The size of the buffer *lpszStringOut*.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

Reverses the conversion process applied by [AtlEscapeUrl](#atlescapeurl).

## <a name="rgbtohtml"></a> RGBToHtml

Converts a [COLORREF](/windows/win32/gdi/colorref) value to the HTML text corresponding to that color value.

```cpp
bool inline RGBToHtml(
   COLORREF color,
   LPTSTR pbOut,
   long nBuffer);
```

### Parameters

*color*<br/>
An RGB color value.

*pbOut*<br/>
Caller-allocated buffer to receive the text for the HTML color value. The buffer must have space for at least 8 characters including space for the null terminator).

*nBuffer*<br/>
The size in bytes of the buffer (including space for the null terminator).

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

An HTML color value is a pound sign followed by a 6-digit hexadecimal value using 2 digits for each of the red, green, and blue components of the color (for example, #FFFFFF is white).

## <a name="systemtimetohttpdate"></a> SystemTimeToHttpDate

Call this function to convert a system time to a string in a format suitable for using in HTTP headers.

```cpp
inline void SystemTimeToHttpDate(
   const SYSTEMTIME& st,
   CStringA& strTime);
```

### Parameters

*st*<br/>
The system time to be obtained as an HTTP format string.

*strTime*<br/>
A reference to a string variable to receive the HTTP date time as defined in RFC 2616 ([https://www.ietf.org/rfc/rfc2616.txt](https://www.ietf.org/rfc/rfc2616.txt)) and RFC 1123 ([https://www.ietf.org/rfc/rfc1123.txt](https://www.ietf.org/rfc/rfc1123.txt)).

## See also

[Concepts](../active-template-library-atl-concepts.md)<br/>
[ATL COM Desktop Components](../atl-com-desktop-components.md)<br/>
[InternetCanonicalizeUrl](/windows/win32/api/wininet/nf-wininet-internetcanonicalizeurlw)
