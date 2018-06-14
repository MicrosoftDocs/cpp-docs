---
title: "ATL HTTP Utility Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.topic: "reference"
ms.assetid: 4db57ef2-31fa-4696-bbeb-79a9035033ed
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# ATL HTTP Utility Functions

These functions support manipulation of URLs.

|||  
|-|-|  
|[AtlCanonicalizeUrl](#atlcanonicalizeurl)|Canonicalizes a URL, which includes converting unsafe characters and spaces into escape sequences.|  
|[AtlCombineUrl](#atlcombineurl)|Combines a base URL and a relative URL into a single, canonical URL.|  
|[AtlEscapeUrl](#atlescapeurl)|Converts all unsafe characters to escape sequences.|  
|[AtlGetDefaultUrlPort](#atlgetdefaulturlport)|Gets the default port number associated with a particular Internet protocol or scheme.|  
|[AtlIsUnsafeUrlChar](#atlisunsafeurlchar)|Determines whether a character is safe for use in a URL.|  
|[AtlUnescapeUrl](#atlunescapeurl)|Converts escaped characters back to their original values.|  
|[RGBToHtml](#rgbtohtml)|Converts a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value to the HTML text corresponding to that color value.|
|[SystemTimeToHttpDate](#systemtimetohttpdate)|Call this function to convert a system time to a string in a format suitable for using in HTTP headers.|

## Requirements  
 **Header:** atlutil.h  

## <a name="atlcanonicalizeurl"></a> AtlCanonicalizeUrl
Call this function to canonicalize a URL, which includes converting unsafe characters and spaces into escape sequences.  
  
```    
inline BOOL AtlCanonicalizeUrl(  
   LPCTSTR szUrl,  
   LPTSTR szCanonicalized,  
   DWORD* pdwMaxLength,  
   DWORD dwFlags = 0) throw();  
```  
  
### Parameters  
 `szUrl`  
 The URL to be canonicalized.  
  
 `szCanonicalized`  
 Caller-allocated buffer to receive the canonicalized URL.  
  
 `pdwMaxLength`  
 Pointer to a variable that contains the length in characters of `szCanonicalized`. If the function succeeds, the variable receives the number of characters written to the buffer including the terminating null character. If the function fails, the variable receives the required length in bytes of the buffer including space for the terminating null character.  
  
 `dwFlags`  
 ATL_URL flags controlling the behavior of this function. 

- `ATL_URL_BROWSER_MODE` Does not encode or decode characters after "#" or "?", and does not remove trailing white space after "?". If this value is not specified, the entire URL is encoded and trailing white space is removed.
- `ATL_URL_DECODE` Converts all %XX sequences to characters, including escape sequences, before the URL is parsed.
- `ATL_URL_ENCODE_PERCENT` Encodes any percent signs encountered. By default, percent signs are not encoded.
- `ATL_URL_ENCODE_SPACES_ONLY` Encodes spaces only.
- `ATL_URL_ESCAPE` Converts all escape sequences (%XX) to their corresponding characters.
- `ATL_URL_NO_ENCODE` Does not convert unsafe characters to escape sequences.
- `ATL_URL_NO_META` Does not remove meta sequences (such as "." and "..") from the URL. 
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 Behaves like the current version of [InternetCanonicalizeUrl](http://msdn.microsoft.com/library/windows/desktop/aa384342) but does not require WinInet or Internet Explorer to be installed.  
  
### See Also  
 [InternetCanonicalizeUrl](http://msdn.microsoft.com/library/windows/desktop/aa384342)

 ## <a name="atlcombineurl"></a> AtlCombineUrl
 Call this function to combine a base URL and a relative URL into a single, canonical URL.  
  
```    
inline BOOL AtlCombineUrl(  
   LPCTSTR szBaseUrl,  
   LPCTSTR szRelativeUrl,  
   LPTSTR szBuffer,  
   DWORD* pdwMaxLength,  
   DWORD dwFlags = 0) throw();  
```  
  
### Parameters  
 *szBaseUrl*  
 The base URL.  
  
 *szRelativeUrl*  
 The URL relative to the base URL.  
  
 `szBuffer`  
 Caller-allocated buffer to receive the canonicalized URL.  
  
 `pdwMaxLength`  
 Pointer to a variable that contains the length in characters of `szBuffer`. If the function succeeds, the variable receives the number of characters written to the buffer including the terminating null character. If the function fails, the variable receives the required length in bytes of the buffer including space for the terminating null character.  
  
 `dwFlags`  
 Flags controlling the behavior of this function. See [AtlCanonicalizeUrl](#atlcanonicalizeurl).  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 Behaves like the current version of [InternetCombineUrl](http://msdn.microsoft.com/library/windows/desktop/aa384355) but does not require WinInet or Internet Explorer to be installed.  
  
## <a name="atlescapeurl"></a> AtlEscapeUrl
 Call this function to convert all unsafe characters to escape sequences.  
  
```    
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
 `lpszStringIn`  
 The URL to be converted.  
  
 `lpszStringOut`  
 Caller-allocated buffer to which the converted URL will be written.  
  
 `pdwStrLen`  
 Pointer to a DWORD variable. If the function succeeds, `pdwStrLen` receives the number of characters written to the buffer including the terminating null character. If the function fails, the variable receives the required length in bytes of the buffer including space for the terminating null character. When using the wide character version of this method, `pdwStrLen` receives the number of characters required, not the number of bytes.  
  
 `dwMaxLength`  
 The size of the buffer `lpszStringOut`.  
  
 `dwFlags`  
 ATL_URL flags controlling the behavior of this function. See [ATLCanonicalizeUrl](#atlcanonicalizeurl) for possible values.  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
## <a name="atlgetdefaulturlport"></a> 
 Call this function to get the default port number associated with a particular Internet protocol or scheme.  
  
```  
inline ATL_URL_PORT AtlGetDefaultUrlPort(ATL_URL_SCHEME m_nScheme) throw();  
```  
  
### Parameters  
 *m_nScheme*  
 The [ATL_URL_SCHEME](atl-url-scheme-enum.md) value identifying the scheme for which you want to obtain the port number.  
  
### Return Value  
 The [ATL_URL_PORT](atl-typedefs.md#atl_url_port) associated with the specified scheme or ATL_URL_INVALID_PORT_NUMBER if the scheme is not recognized.  

## <a name="atlisunsafeurlchar"></a> AtlIsUnsafeUrlChar
 Call this function to find out whether a character is safe for use in a URL.  
  
```  
inline BOOL AtlIsUnsafeUrlChar(char chIn) throw();  
```  
  
### Parameters  
 `chIn`  
 The character to be tested for safety.  
  
### Return Value  
 Returns **TRUE** if the input character is unsafe, **FALSE** otherwise.  
  
### Remarks  
 Characters that should not be used in URLs can be tested using this function and converted using [AtlCanonicalizeUrl](#atlcanonicalizeurl).  
  
## <a name="atlunescapeurl"></a> AtlUnescapeUrl
 Call this function to convert escaped characters back to their original values.  
  
```    
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
 `lpszStringIn`  
 The URL to be converted.  
  
 `lpszStringOut`  
 Caller-allocated buffer to which the converted URL will be written.  
  
 `pdwStrLen`  
 Pointer to a DWORD variable. If the function succeeds, the variable receives the number of characters written to the buffer including the terminating null character. If the function fails, the variable receives the required length in bytes of the buffer including space for the terminating null character.  
  
 `dwMaxLength`  
 The size of the buffer `lpszStringOut`.  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 Reverses the conversion process applied by [AtlEscapeUrl](#atlescapeurl).  
  
## <a name="rgbtohtml"></a> RGBToHtml
Converts a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value to the HTML text corresponding to that color value.  
  
```  
bool inline RGBToHtml(  
   COLORREF color,  
   LPTSTR pbOut,  
   long nBuffer);  
```  
  
### Parameters  
 `color`  
 An RGB color value.  
  
 `pbOut`  
 Caller-allocated buffer to receive the text for the HTML color value. The buffer must have space for at least 8 characters including space for the null terminator).  
  
 *nBuffer*  
 The size in bytes of the buffer (including space for the null terminator).  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 An HTML color value is a pound sign followed by a 6-digit hexadecimal value using 2 digits for each of the red, green, and blue components of the color (for example, #FFFFFF is white).  
  
## <a name="systemtimetohttpdate"></a> SystemTimeToHttpDate
Call this function to convert a system time to a string in a format suitable for using in HTTP headers.  
  
```  
inline void SystemTimeToHttpDate( 
   const SYSTEMTIME& st,  
   CStringA& strTime);  
```  
  
### Parameters  
 `st`  
 The system time to be obtained as an HTTP format string.  
  
 *strTime*  
 A reference to a string variable to receive the HTTP date time as defined in RFC 2616 ([http://www.ietf.org/rfc/rfc2616.txt](http://www.ietf.org/rfc/rfc2616.txt)) and RFC 1123 ([http://www.ietf.org/rfc/rfc1123.txt](http://www.ietf.org/rfc/rfc1123.txt)).  
  
## See Also  
 [Concepts](../../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)   

