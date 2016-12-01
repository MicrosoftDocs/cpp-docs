---
title: "ATL Encoding Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "encoding"
  - "encoding, functions"
ms.assetid: 82d4fdf3-3c4a-4fe2-b297-8ffb4714406f
caps.latest.revision: 8
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
# ATL Encoding Reference
Encoding in a range of common Internet standards such as uuencode, hexadecimal, and UTF8 is supported by the code found in atlenc.h.  
  
### Functions  
  
|||  
|-|-|  
|[AtlGetHexValue](http://msdn.microsoft.com/library/d6868900-7e1b-44c0-9a73-9635f3f2811e)|Call this function to get the numeric value of a hexadecimal digit.|  
|[AtlHexDecode](http://msdn.microsoft.com/library/305ccc56-7f96-4795-b297-b04e58c98187)|Decodes a string of data that has been encoded as hexadecimal text such as by a previous call to [AtlHexEncode](http://msdn.microsoft.com/library/256f1d5c-ca40-488e-bcfb-503cf6ac0ea8).|  
|[AtlHexDecodeGetRequiredLength](http://msdn.microsoft.com/library/d2a28877-fe5e-420d-93b4-3b46d910d752)|Call this function to get the size in bytes of a buffer that could contain data decoded from a hex-encoded string of the specified length.|  
|[AtlHexEncode](http://msdn.microsoft.com/library/256f1d5c-ca40-488e-bcfb-503cf6ac0ea8)|Call this function to encode some data as a string of hexadecimal text.|  
|[AtlHexEncodeGetRequiredLength](http://msdn.microsoft.com/library/7decfd9b-7227-4676-b16f-f50ffc6c0caa)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
|[AtlUnicodeToUTF8](http://msdn.microsoft.com/library/104f13d8-379c-4bb0-b894-e54cad7ed9aa)|Call this function to convert a Unicode string to UTF-8.|  
|[BEncode](http://msdn.microsoft.com/library/cb8f07fb-d0a6-438f-97e9-459ac34df11f)|Call this function to convert some data using the "B" encoding.|  
|[BEncodeGetRequiredLength](http://msdn.microsoft.com/library/2bd75b97-fe14-4b30-99c6-b943269eef25)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
|[EscapeXML](http://msdn.microsoft.com/library/bc8793f9-538a-487a-b47d-2ef95e84a15b)|Call this function to convert characters that are unsafe for use in XML to their safe equivalents.|  
|[GetExtendedChars](http://msdn.microsoft.com/library/26c5fa33-f313-4c4b-baf7-cca2ac11885c)|Call this function to get the number of extended characters in a string.|  
|[IsExtendedChar](http://msdn.microsoft.com/library/9c6721f5-ddfb-478b-a976-fe015bdf2ec1)|Call this function to find out if a given character is an extended character (less than 32, greater than 126, and not a tab, linefeed or carriage return)|  
|[QEncode](http://msdn.microsoft.com/library/6dba5385-ecfc-4a18-85ab-4e8a224384f9)|Call this function to convert some data using the "Q" encoding.|  
|[QEncodeGetRequiredLength](http://msdn.microsoft.com/library/7f9faf68-66a5-4f33-87c4-dcd97eeaae4f)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
|[QPDecode](http://msdn.microsoft.com/library/c5caf731-9bc4-4740-8899-720f84ed014c)|Decodes a string of data that has been encoded in quoted-printable format such as by a previous call to [QPEncode](http://msdn.microsoft.com/library/f6ea53d6-3677-48bd-8717-74a3900fa3c5).|  
|[QPDecodeGetRequiredLength](http://msdn.microsoft.com/library/84750f57-75c3-4c0d-bcfa-57a55d034198)|Call this function to get the size in bytes of a buffer that could contain data decoded from quoted-printable-encoded string of the specified length.|  
|[QPEncode](http://msdn.microsoft.com/library/f6ea53d6-3677-48bd-8717-74a3900fa3c5)|Call this function to encode some data in quoted-printable format.|  
|[QPEncodeGetRequiredLength](http://msdn.microsoft.com/library/68652cfd-17f0-45c6-a12a-3a6096ea11e5)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
|[UUDecode](http://msdn.microsoft.com/library/5841f625-166f-4f4a-a4f8-841982fa7a22)|Decodes a string of data that has been uuencoded such as by a previous call to [UUEncode](http://msdn.microsoft.com/library/26fc4290-23ed-4f40-935a-93f30edab161).|  
|[UUDecodeGetRequiredLength](http://msdn.microsoft.com/library/abfa1d1f-caf6-4029-a94c-1a48937791dd)|Call this function to get the size in bytes of a buffer that could contain data decoded from a uuencoded string of the specified length.|  
|[UUEncode](http://msdn.microsoft.com/library/26fc4290-23ed-4f40-935a-93f30edab161)|Call this function to uuencode some data.|  
|[UUEncodeGetRequiredLength](http://msdn.microsoft.com/library/df54060a-ed3b-4883-bdae-5d4b28db7c86)|Call this function to get the size in characters of a buffer that could contain a string encoded from data of the specified size.|  
  
### Macros  
  
|||  
|-|-|  
|[ATL_ESC Flags](http://msdn.microsoft.com/library/daf3aa3c-7498-4d63-9fb6-e05b4815c2b8)|These flags are used to control the behavior of [EscapeXML](http://msdn.microsoft.com/library/bc8793f9-538a-487a-b47d-2ef95e84a15b).|  
|[ATLSMTP_QPENCODE Flags](http://msdn.microsoft.com/library/6b15a3ab-8e57-49e4-8104-09b26ebb96c4)|These flags describe how quoted-printable encoding is to be performed by [QPEncode](http://msdn.microsoft.com/library/f6ea53d6-3677-48bd-8717-74a3900fa3c5).|  
|[ATLSMTP_UUENCODE Flags](http://msdn.microsoft.com/library/ecb79b81-b764-4a48-a05c-a9dee6e7bbce)|These flags describe how uuencoding is to be performed by [UUEncode](http://msdn.microsoft.com/library/26fc4290-23ed-4f40-935a-93f30edab161).|  
  
## See Also  
 [Concepts](../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../atl/atl-com-desktop-components.md)

