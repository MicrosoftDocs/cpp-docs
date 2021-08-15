---
description: "Learn more about: ATL Encoding Reference"
title: "ATL Encoding Reference"
ms.date: "11/04/2016"
helpviewer_keywords: ["encoding", "encoding, functions"]
ms.assetid: 82d4fdf3-3c4a-4fe2-b297-8ffb4714406f
---
# ATL Encoding Reference

Encoding in a range of common Internet standards such as uuencode, hexadecimal, and UTF8 is supported by the code found in *`atlenc.h`*.

### Functions

| Function | Use case |
|--|--|
| [AtlGetHexValue](reference/atl-text-encoding-functions.md#atlgethexvalue) | Call this function to get the numeric value of a hexadecimal digit. |
| [AtlHexDecode](reference/atl-text-encoding-functions.md#atlhexdecode) | Decodes a string of data that has been encoded as hexadecimal text such as by a previous call to [AtlHexEncode](reference/atl-text-encoding-functions.md#atlhexencode). |
| [AtlHexDecodeGetRequiredLength](reference/atl-text-encoding-functions.md#atlhexdecodegetrequiredlength) | Call this function to get the size in bytes of a buffer that could contain data decoded from a hex-encoded string of the specified length. |
| [AtlHexEncode](reference/atl-text-encoding-functions.md#atlhexencode) | Call this function to encode some data as a string of hexadecimal text. |
| [AtlHexEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#atlhexencodegetrequiredlength) | Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size. |
| [AtlUnicodeToUTF8](reference/atl-text-encoding-functions.md#atlunicodetoutf8) | Call this function to convert a Unicode string to UTF-8. |
| [BEncode](reference/atl-text-encoding-functions.md#bencode) | Call this function to convert some data using the "B" encoding. |
| [BEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#bencodegetrequiredlength) | Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size. |
| [EscapeXML](reference/atl-text-encoding-functions.md#escapexml) | Call this function to convert characters that are unsafe for use in XML to their safe equivalents. |
| [GetExtendedChars](reference/atl-text-encoding-functions.md#getextendedchars) | Call this function to get the number of extended characters in a string. |
| [IsExtendedChar](reference/atl-text-encoding-functions.md#isextendedchar) | Call this function to find out if a given character is an extended character (less than 32, greater than 126, and not a tab, line feed or carriage return) |
| [QEncode](reference/atl-text-encoding-functions.md#qencode) | Call this function to convert some data using the "Q" encoding. |
| [QEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#qencodegetrequiredlength) | Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size. |
| [QPDecode](reference/atl-text-encoding-functions.md#qpdecode) | Decodes a string of data that has been encoded in quoted-printable format such as by a previous call to [QPEncode](reference/atl-text-encoding-functions.md#qpencode). |
| [QPDecodeGetRequiredLength](reference/atl-text-encoding-functions.md#qpdecodegetrequiredlength) | Call this function to get the size in bytes of a buffer that could contain data decoded from quoted-printable-encoded string of the specified length. |
| [QPEncode](reference/atl-text-encoding-functions.md#qpencode) | Call this function to encode some data in quoted-printable format. |
| [QPEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#qpencodegetrequiredlength) | Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size. |
| [UUDecode](reference/atl-text-encoding-functions.md#uudecode) | Decodes a string of data that has been uuencoded such as by a previous call to [UUEncode](reference/atl-text-encoding-functions.md#uuencode). |
| [UUDecodeGetRequiredLength](reference/atl-text-encoding-functions.md#uudecodegetrequiredlength) | Call this function to get the size in bytes of a buffer that could contain data decoded from a uuencoded string of the specified length. |
| [UUEncode](reference/atl-text-encoding-functions.md#uuencode) | Call this function to uuencode some data. |
| [UUEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#uuencodegetrequiredlength) | Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size. |

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)<br/>
[ATL COM desktop components](../atl/atl-com-desktop-components.md)
