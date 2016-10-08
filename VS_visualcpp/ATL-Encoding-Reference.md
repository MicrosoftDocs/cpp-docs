---
title: "ATL Encoding Reference"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 82d4fdf3-3c4a-4fe2-b297-8ffb4714406f
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# ATL Encoding Reference
Encoding in a range of common Internet standards such as uuencode, hexadecimal, and UTF8 is supported by the code found in atlenc.h.  
  
### Functions  
  
|||  
|-|-|  
|[AtlGetHexValue](../Topic/AtlGetHexValue.md)|Call this function to get the numeric value of a hexadecimal digit.|  
|[AtlHexDecode](../Topic/AtlHexDecode.md)|Decodes a string of data that has been encoded as hexadecimal text such as by a previous call to [AtlHexEncode](../Topic/AtlHexEncode.md).|  
|[AtlHexDecodeGetRequiredLength](../Topic/AtlHexDecodeGetRequiredLength.md)|Call this function to get the size in bytes of a buffer that could contain data decoded from a hex-encoded string of the specified length.|  
|[AtlHexEncode](../Topic/AtlHexEncode.md)|Call this function to encode some data as a string of hexadecimal text.|  
|[AtlHexEncodeGetRequiredLength](../Topic/AtlHexEncodeGetRequiredLength.md)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
|[AtlUnicodeToUTF8](../Topic/AtlUnicodeToUTF8.md)|Call this function to convert a Unicode string to UTF-8.|  
|[BEncode](../Topic/BEncode.md)|Call this function to convert some data using the "B" encoding.|  
|[BEncodeGetRequiredLength](../Topic/BEncodeGetRequiredLength.md)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
|[EscapeXML](../Topic/EscapeXML.md)|Call this function to convert characters that are unsafe for use in XML to their safe equivalents.|  
|[GetExtendedChars](../Topic/GetExtendedChars.md)|Call this function to get the number of extended characters in a string.|  
|[IsExtendedChar](../Topic/IsExtendedChar.md)|Call this function to find out if a given character is an extended character (less than 32, greater than 126, and not a tab, linefeed or carriage return)|  
|[QEncode](../Topic/QEncode.md)|Call this function to convert some data using the "Q" encoding.|  
|[QEncodeGetRequiredLength](../Topic/QEncodeGetRequiredLength.md)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
|[QPDecode](../Topic/QPDecode.md)|Decodes a string of data that has been encoded in quoted-printable format such as by a previous call to [QPEncode](../Topic/QPEncode.md).|  
|[QPDecodeGetRequiredLength](../Topic/QPDecodeGetRequiredLength.md)|Call this function to get the size in bytes of a buffer that could contain data decoded from quoted-printable-encoded string of the specified length.|  
|[QPEncode](../Topic/QPEncode.md)|Call this function to encode some data in quoted-printable format.|  
|[QPEncodeGetRequiredLength](../Topic/QPEncodeGetRequiredLength.md)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
|[UUDecode](../Topic/UUDecode.md)|Decodes a string of data that has been uuencoded such as by a previous call to [UUEncode](../Topic/UUEncode.md).|  
|[UUDecodeGetRequiredLength](../Topic/UUDecodeGetRequiredLength.md)|Call this function to get the size in bytes of a buffer that could contain data decoded from a uuencoded string of the specified length.|  
|[UUEncode](../Topic/UUEncode.md)|Call this function to uuencode some data.|  
|[UUEncodeGetRequiredLength](../Topic/UUEncodeGetRequiredLength.md)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
  
### Macros  
  
|||  
|-|-|  
|[ATL_ESC Flags](../Topic/ATL_ESC%20Flags.md)|These flags are used to control the behavior of [EscapeXML](../Topic/EscapeXML.md).|  
|[ATLSMTP_QPENCODE Flags](../Topic/ATLSMTP_QPENCODE%20Flags.md)|These flags describe how quoted-printable encoding is to be performed by [QPEncode](../Topic/QPEncode.md).|  
|[ATLSMTP_UUENCODE Flags](../Topic/ATLSMTP_UUENCODE%20Flags.md)|These flags describe how uuencoding is to be performed by [UUEncode](../Topic/UUEncode.md).|  
  
## See Also  
 [Concepts](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)   
 [ATL COM Desktop Components](../VS_visualcpp/ATL-COM-Desktop-Components.md)