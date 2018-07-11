---
title: "ATL Text Encoding Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["atlbase/ATL::AtlGetHexValue", "atlbase/ATL::AtlGetVersion", "atlenc/ATL::AtlHexDecode", "atlenc/ATL::AtlHexDecodeGetRequiredLength", "atlenc/ATL::AtlHexEncode", "atlenc/ATL::AtlHexEncodeGetRequiredLength", "atlenc/ATL::AtlHexValue", "atlenc/ATL::BEncode", "atlenc/ATL::BEncodeGetRequiredLength", "atlenc/ATL::EscapeXML", "atlenc/ATL::GetExtendedChars", "atlenc/ATL::IsExtendedChar", "atlenc/ATL::QEncode", "atlenc/ATL::QEncodeGetRequiredLength", "atlenc/ATL::QPDecode", "atlenc/ATL::QPDecodeGetRequiredLength", "atlenc/ATL::QPEncode", "atlenc/ATL::QPEncodeGetRequiredLength", "atlenc/ATL::UUDecode", "atlenc/ATL::UUDecodeGetRequiredLength", "atlenc/ATL::UUEncode", "atlenc/ATL::UUEncodeGetRequiredLength"]
ms.assetid: 2ae1648b-2b87-4112-92aa-0069fcfd23da
---
# ATL Text Encoding Functions
These functions support text encoding and decoding.

|||  
|-|-|  
|[AtlGetHexValue](#atlgethexvalue)|Call this function to get the numeric value of a hexadecimal digit.|   
|[AtlGetVersion](#atlgetversion)|Call this function to get the version of the ATL library that you are using.  |  
|[AtlHexDecode](#atlhexdecode)|Decodes a string of data that has been encoded as hexadecimal text such as by a previous call to [AtlHexEncode](#atlhexencode).|
|[AtlHexDecodeGetRequiredLength](#atlhexdecodegetrequiredlength)|Call this function to get the size in bytes of a buffer that could contain data decoded from a hex-encoded string of the specified length.|
|[AtlHexEncode](#atlhexencode)|Call this function to encode some data as a string of hexadecimal text.|
|[AtlHexEncodeGetRequiredLength](#atlhexencodegetrequiredlength)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|
|[AtlHexValue](#atlhexvalue)|Call this function to get the numeric value of a hexadecimal digit. |
|[AtlUnicodeToUTF8](#atlunicodetoutf8)|Call this function to convert a Unicode string to UTF-8. |
|[BEncode](#bencode)|Call this function to convert some data using the "B" encoding.|
|[BEncodeGetRequiredLength](#bencodegetrequiredlength)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|
|[EscapeXML](#escapexml)|Call this function to convert characters that are unsafe for use in XML to their safe equivalents.|
|[GetExtendedChars](#getextendedchars)|Call this function to get the number of extended characters in a string.|
|[IsExtendedChar](#isextendedchar)|Call this function to find out if a given character is an extended character (less than 32, greater than 126, and not a tab, linefeed or carriage return)|
|[QEncode](#qencode)|Call this function to convert some data using the "Q" encoding.  |
|[QEncodeGetRequiredLength](#qencodegetrequiredlength)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|
|[QPDecode](#qpdecode)|Decodes a string of data that has been encoded in quoted-printable format such as by a previous call to [QPEncode](#qpencode).|
|[QPDecodeGetRequiredLength](#qpdecodegetrequiredlength)|Call this function to get the size in bytes of a buffer that could contain data decoded from quoted-printable-encoded string of the specified length.|
|[QPEncode](#qpencode)|Call this function to encode some data in quoted-printable format.|
|[QPEncodeGetRequiredLength](#qpencodegetrequiredlength)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|
|[UUDecode](#uudecode)|Decodes a string of data that has been uuencoded such as by a previous call to [UUEncode](#uuencode).|
|[UUDecodeGetRequiredLength](#uudecodegetrequiredlength)|Call this function to get the size in bytes of a buffer that could contain data decoded from a uuencoded string of the specified length.|
|[UUEncode](#uuencode)|Call this function to uuencode some data. |
|[UUEncodeGetRequiredLength](#uuencodegetrequiredlength)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|

## Requirements  
 **Header:** atlenc.h  
 
## <a name="atlgethexvalue"></a> AtlGetHexValue
Call this function to get the numeric value of a hexadecimal digit.  
  
```    
inline char AtlGetHexValue(char chIn) throw();  
```  
  
### Parameters  
 *chIn*  
 The hexadecimal character '0'-'9', 'A'-'F', or 'a'-'f'.  
  
### Return Value  
 The numeric value of the input character interpreted as a hexadecimal digit. For example, an input of '0' returns a value of 0 and an input of 'A' returns a value of 10. If the input character is not a hexadecimal digit, this function returns -1.  
  
## <a name="atlgetversion"></a> AtlGetVersion
Call this function to get the version of the ATL library that you are using.  
  
```  
ATLAPI_(DWORD) AtlGetVersion(void* pReserved);  
```  
  
### Parameters  
 *pReserved*  
 A reserved pointer.  
  
### Return Value  
 Returns a DWORD integer value of the version of the ATL library that you are compiling or running.  
  
## Example  
 The function should be called as follows.  
  
 [!code-cpp[NVC_ATL_Utilities#95](../../atl/codesnippet/cpp/atl-text-encoding-functions_1.cpp)]  
  
### Requirements  
 **Header:** atlbase.h  

## <a name="atlhexdecode"></a> AtlHexDecode
Decodes a string of data that has been encoded as hexadecimal text such as by a previous call to [AtlHexEncode](#atlhexencode).  
  
```    
inline BOOL AtlHexDecode(  
   LPCSTR pSrcData,  
   int nSrcLen,  
   LPBYTE pbDest,  
   int* pnDestLen) throw();  
```  
  
### Parameters  
 *pSrcData*  
 The string containing the data to be decoded.  
  
 *nSrcLen*  
 The length in characters of *pSrcData*.  
  
 *pbDest*  
 Caller-allocated buffer to receive the decoded data.  
  
 *pnDestLen*  
 Pointer to a variable that contains the length in bytes of *pbDest*. If the function succeeds, the variable receives the number of bytes written to the buffer. If the function fails, the variable receives the required length in bytes of the buffer.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
## <a name="atlhexdecodegetrequiredlength"></a> AtlHexDecodeGetRequiredLength
Call this function to get the size in bytes of a buffer that could contain data decoded from a hex-encoded string of the specified length.  
  
```  
inline int AtlHexDecodeGetRequiredLength(int nSrcLen) throw();  
```  
  
### Parameters  
 *nSrcLen*  
 The number of characters in the encoded string.  
  
### Return Value  
 The number of bytes required for a buffer that could hold a decoded string of *nSrcLen* characters.  
  
## <a name="atlhexencode"></a> AtlHexEncode
Call this function to encode some data as a string of hexadecimal text.  
  
```  
inline BOOL AtlHexEncode(  
   const BYTE * pbSrcData,  
   int nSrcLen,  
   LPSTR szDest,  
int * pnDestLen) throw();  
```  
  
### Parameters  
 *pbSrcData*  
 The buffer containing the data to be encoded.  
  
 *nSrcLen*  
 The length in bytes of the data to be encoded.  
  
 *szDest*  
 Caller-allocated buffer to receive the encoded data.  
  
 *pnDestLen*  
 Pointer to a variable that contains the length in characters of *szDest*. If the function succeeds, the variable receives the number of characters written to the buffer. If the function fails, the variable receives the required length in characters of the buffer.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 Each byte of source data is encoded as 2 hexadecimal characters.  
  
## <a name="atlhexencodegetrequiredlength"></a> AtlHexEncodeGetRequiredLength
Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.  
  
```  
inline int AtlHexEncodeGetRequiredLength(int nSrcLen) throw();  
```  
  
### Parameters  
 *nSrcLen*  
 The number of bytes of data to be encoded.  
  
### Return Value  
 The number of characters required for a buffer that could hold encoded data of *nSrcLen* bytes.  
  
## <a name="atlhexvalue"></a> AtlHexValue
Call this function to get the numeric value of a hexadecimal digit.  
  
```  
inline short AtlHexValue(char chIn) throw();  
```  
  
### Parameters  
 *chIn*  
 The hexadecimal character '0'-'9', 'A'-'F', or 'a'-'f'.  
  
### Return Value  
 The numeric value of the input character interpreted as a hexadecimal digit. For example, an input of '0' returns a value of 0 and an input of 'A' returns a value of 10. If the input character is not a hexadecimal digit, this function returns -1.  
  
## <a name="atlunicodetoutf8"></a> AtlUnicodeToUTF8
Call this function to convert a Unicode string to UTF-8.  
  
```  
ATL_NOINLINE inline int AtlUnicodeToUTF8(  
   LPCWSTR wszSrc,  
   int nSrc,  
   LPSTR szDest,  
   int nDest) throw();  
```  
  
### Parameters  
 *wszSrc*  
 The Unicode string to be converted  
  
 *nSrc*  
 The length in characters of the Unicode string.  
  
 *szDest*  
 Caller-allocated buffer to receive the converted string.  
  
 *nDest*  
 The length in bytes of the buffer.  
  
### Return Value  
 Returns the number of characters for the converted string.  
  
### Remarks  
 To determine the size of the buffer required for the converted string, call this function passing 0 for *szDest* and *nDest*.  
  
## <a name="bencode"></a> BEncode  
Call this function to convert some data using the "B" encoding.  
  
```  
inline BOOL BEncode(  
   BYTE* pbSrcData,  
   int nSrcLen,  
   LPSTR szDest,  
   int* pnDestLen,  
   LPCSTR pszCharSet) throw();  
```  
  
### Parameters  
 *pbSrcData*  
 The buffer containing the data to be encoded.  
  
 *nSrcLen*  
 The length in bytes of the data to be encoded.  
  
 *szDest*  
 Caller-allocated buffer to receive the encoded data.  
  
 *pnDestLen*  
 Pointer to a variable that contains the length in characters of *szDest*. If the function succeeds, the variable receives the number of characters written to the buffer. If the function fails, the variable receives the required length in characters of the buffer.  
  
 *pszCharSet*  
 The character set to use for the conversion.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 The "B" encoding scheme is described in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).  
  
## <a name="bencodegetrequiredlength"></a> BEncodeGetRequiredLength 
Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.  
  
```  
inline int BEncodeGetRequiredLength(int nSrcLen, int nCharsetLen) throw();  
```  
  
### Parameters  
 *nSrcLen*  
 The number of bytes of data to be encoded.  
  
 *nCharsetLen*  
 The length in characters of the character set to use for the conversion.  
  
### Return Value  
 The number of characters required for a buffer that could hold encoded data of *nSrcLen* bytes.  
  
### Remarks  
 The "B" encoding scheme is described in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).  
  
## <a name="escapexml"></a> EscapeXML
Call this function to convert characters that are unsafe for use in XML to their safe equivalents.  
  
```  
inline int EscapeXML(  
   const wchar_t * szIn,  
   int nSrcLen,  
   wchar_t * szEsc,  
   int nDestLen,  
   DWORD dwFlags = ATL_ESC_FLAG_NONE) throw();  
```  
  
### Parameters  
 *szIn*  
 The string to be converted.  
  
 *nSrclen*  
 The length in characters of the string to be converted.  
  
 *szEsc*  
 Caller-allocated buffer to receive the converted string.  
  
 *nDestLen*  
 The length in characters of the caller-allocated buffer.  
  
 *dwFlags*  
 ATL_ESC Flags describing how the conversion is to be performed. 

- ATL_ESC_FLAG_NONE Default behavior. Quote marks and apostrophes are not converted.
- ATL_ESC_FLAG_ATTR Quote marks and apostrophes are converted to `&quot;` and `&apos;` respectively.


  
### Return Value  
 The length in characters of the converted string.  
  
### Remarks  
 Possible conversions performed by this function are shown in the table:  
  
|Source|Destination|  
|------------|-----------------|  
|\<|&lt;|  
|>|&gt;|  
|&|&amp;|  
|'|&apos;|  
|"|&quot;|  
  
## <a name="getextendedchars"></a> GetExtendedChars
Call this function to get the number of extended characters in a string.  
  
```  
inline int GetExtendedChars(LPCSTR szSrc, int nSrcLen) throw();  
```  
  
### Parameters  
 *szSrc*  
 The string to be analyzed.  
  
 *nSrcLen*  
 The length of the string in characters.  
  
### Return Value  
 Returns the number of extended characters found within the string as determined by [IsExtendedChar](#isextendedchar).  
  
## <a name="isextendedchar"></a> IsExtendedChar
Call this function to find out if a given character is an extended character (less than 32, greater than 126, and not a tab, linefeed or carriage return)  
  
```  
inline int IsExtendedChar(char ch) throw();  
```  
  
### Parameters  
 *ch*  
 The character to be tested  
  
### Return Value  
 TRUE if the character is extended, FALSE otherwise.  
  
## <a name="qencode"></a> QEncode
Call this function to convert some data using the "Q" encoding.  
  
```  
inline BOOL QEncode(  
   BYTE* pbSrcData,  
   int nSrcLen,  
   LPSTR szDest,  
   int* pnDestLen,  
   LPCSTR pszCharSet,  
   int* pnNumEncoded = NULL) throw();  
```  
  
### Parameters  
 *pbSrcData*  
 The buffer containing the data to be encoded.  
  
 *nSrcLen*  
 The length in bytes of the data to be encoded.  
  
 *szDest*  
 Caller-allocated buffer to receive the encoded data.  
  
 *pnDestLen*  
 Pointer to a variable that contains the length in characters of *szDest*. If the function succeeds, the variable receives the number of characters written to the buffer. If the function fails, the variable receives the required length in characters of the buffer.  
  
 *pszCharSet*  
 The character set to use for the conversion.  
  
 *pnNumEncoded*  
 A pointer to a variable that on return contains the number of unsafe characters that had to be converted.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 The "Q" encoding scheme is described in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).  
  
## <a name="qencodegetrequiredlength"></a> QEncodeGetRequiredLength 
Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.  
  
```  
inline int QEncodeGetRequiredLength(int nSrcLen, int nCharsetLen) throw();  
```  
  
### Parameters  
 *nSrcLen*  
 The number of bytes of data to be encoded.  
  
 *nCharsetLen*  
 The length in characters of the character set to use for the conversion.  
  
### Return Value  
 The number of characters required for a buffer that could hold encoded data of *nSrcLen* bytes.  
  
### Remarks  
 The "Q" encoding scheme is described in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).  
  
## <a name="qpdecode"></a> QPDecode
Decodes a string of data that has been encoded in quoted-printable format such as by a previous call to [QPEncode](#qpencode).  
  
```  
inline BOOL QPDecode(  
   BYTE* pbSrcData,  
   int nSrcLen,  
   LPSTR szDest,  
   int* pnDestLen,  
   DWORD dwFlags = 0) throw();  
```  
  
### Parameters  
 [in] *pbSrcData*  
 The buffer containing the data to be decoded.  
  
 [in] *nSrcLen*  
 The length in bytes of *pbSrcData*.  
  
 [out] *szDest*  
 Caller-allocated buffer to receive the decoded data.  
  
 [out] *pnDestLen*  
 Pointer to a variable that contains the length in bytes of *szDest*. If the function succeeds, the variable receives the number of bytes written to the buffer. If the function fails, the variable receives the required length in bytes of the buffer.  
  
 [in] *dwFlags*  
 Flags describing how the conversion is to be performed. See [ATLSMTP_QPENCODE Flags](http://msdn.microsoft.com/library/6b15a3ab-8e57-49e4-8104-09b26ebb96c4).  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 The quoted-printable encoding scheme is described in RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).  
  
## <a name="qpdecodegetrequiredlength"></a> QPDecodeGetRequiredLength
Call this function to get the size in bytes of a buffer that could contain data decoded from quoted-printable-encoded string of the specified length.  
  
```  
inline int QPDecodeGetRequiredLength(int nSrcLen) throw();  
```  
  
### Parameters  
 *nSrcLen*  
 The number of characters in the encoded string.  
  
### Return Value  
 The number of bytes required for a buffer that could hold a decoded string of *nSrcLen* characters.  
  
### Remarks  
 The quoted-printable encoding scheme is described in RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).  
  
## <a name="qpencode"></a> QPEncode
Call this function to encode some data in quoted-printable format.  
  
```  
inline BOOL QPEncode(  
   BYTE* pbSrcData,  
   int nSrcLen,  
   LPSTR szDest,  
   int* pnDestLen,  
   DWORD dwFlags = 0) throw ();  
```  
  
### Parameters  
 *pbSrcData*  
 The buffer containing the data to be encoded.  
  
 *nSrcLen*  
 The length in bytes of the data to be encoded.  
  
 *szDest*  
 Caller-allocated buffer to receive the encoded data.  
  
 *pnDestLen*  
 Pointer to a variable that contains the length in characters of *szDest*. If the function succeeds, the variable receives the number of characters written to the buffer. If the function fails, the variable receives the required length in characters of the buffer.  
  
 *dwFlags*  
 ATLSMTP_QPENCODE flags describing how the conversion is to be performed. 
- ATLSMTP_QPENCODE_DOT If a period appears at the start of a line, it is added to the output as well as encoded.
- ATLSMTP_QPENCODE_TRAILING_SOFT Appends `=\r\n` to the encoded string.

The quoted-printable encoding scheme is described in [RFC 2045](http://www.ietf.org/rfc/rfc2045.txt).
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 The quoted-printable encoding scheme is described in RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).  
  
## <a name="qpencodegetrequiredlength"></a> QPEncodeGetRequiredLength
Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.  
  
```  
inline int QPEncodeGetRequiredLength(int nSrcLen) throw ();  
```  
  
### Parameters  
 *nSrcLen*  
 The number of bytes of data to be encoded.  
  
### Return Value  
 The number of characters required for a buffer that could hold encoded data of *nSrcLen* bytes.  
  
### Remarks  
 The quoted-printable encoding scheme is described in RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).  
  
## <a name="uudecode"></a> UUDecode
Decodes a string of data that has been uuencoded such as by a previous call to [UUEncode](#uuencode).  
  
```  
inline BOOL UUDecode(  
   BYTE* pbSrcData,  
   int nSrcLen,  
   BYTE* pbDest,  
   int* pnDestLen) throw ();  
```  
  
### Parameters  
 *pbSrcData*  
 The string containing the data to be decoded.  
  
 *nSrcLen*  
 The length in bytes of *pbSrcData*.  
  
 *pbDest*  
 Caller-allocated buffer to receive the decoded data.  
  
 *pnDestLen*  
 Pointer to a variable that contains the length in bytes of *pbDest*. If the function succeeds, the variable receives the number of bytes written to the buffer. If the function fails, the variable receives the required length in bytes of the buffer.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 This uuencoding implementation follows the POSIX P1003.2b/D11 specification.  
  
## <a name="uudecodegetrequiredlength"></a> UUDecodeGetRequiredLength
Call this function to get the size in bytes of a buffer that could contain data decoded from a uuencoded string of the specified length.  
  
```  
inline int UUDecodeGetRequiredLength(int nSrcLen) throw ();  
```  
  
### Parameters  
 *nSrcLen*  
 The number of characters in the encoded string.  
  
### Return Value  
 The number of bytes required for a buffer that could hold a decoded string of *nSrcLen* characters.  
  
### Remarks  
 This uuencoding implementation follows the POSIX P1003.2b/D11 specification.  
  
## <a name="uuencode"></a> UUEncode
Call this function to uuencode some data.  
  
```  
inline BOOL UUEncode(  
   const BYTE* pbSrcData,  
   int nSrcLen,  
   LPSTR szDest,  
   int* pnDestLen,  
   LPCTSTR lpszFile = _T("file"),  
   DWORD dwFlags = 0) throw ();  
```  
  
### Parameters  
 *pbSrcData*  
 The buffer containing the data to be encoded.  
  
 *nSrcLen*  
 The length in bytes of the data to be encoded.  
  
 *szDest*  
 Caller-allocated buffer to receive the encoded data.  
  
 *pnDestLen*  
 Pointer to a variable that contains the length in characters of *szDest*. If the function succeeds, the variable receives the number of characters written to the buffer. If the function fails, the variable receives the required length in characters of the buffer.  
  
 *lpszFile*  
 The file to be added to the header when ATLSMTP_UUENCODE_HEADER is specified in *dwFlags*.  
  
 *dwFlags*  
 Flags controlling the behavior of this function. 
- ATLSMTP_UUENCODE_HEADE The header will be encoded.
- ATLSMTP_UUENCODE_END The end will be encoded.
- ATLSMTP_UUENCODE_DOT Data stuffing will be performed.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 This uuencoding implementation follows the POSIX P1003.2b/D11 specification.  
  
## <a name="uuencodegetrequiredlength"></a> UUEncodeGetRequiredLength
Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.  
  
```  
inline int UUEncodeGetRequiredLength(int nSrcLen) throw ();  
```  
  
### Parameters  
 *nSrcLen*  
 The number of bytes of data to be encoded.  
  
### Return Value  
 The number of characters required for a buffer that could hold encoded data of *nSrcLen* bytes.  
  
### Remarks  
 This uuencoding implementation follows the POSIX P1003.2b/D11 specification.  
  
### See Also  
 [Concepts](../../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)   