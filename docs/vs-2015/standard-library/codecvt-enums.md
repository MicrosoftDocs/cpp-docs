---
title: "&lt;codecvt&gt; enums | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 46a8b073-01bc-46d3-b3d3-a8540f9422c1
caps.latest.revision: 17
manager: "ghogen"
---
# &lt;codecvt&gt; enums
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;codecvt&gt; enums](https://docs.microsoft.com/cpp/standard-library/codecvt-enums).  
  
## <a name="codecvt_mode_enumeration"></a>  codecvt_mode Enumeration  
 Specifies configuration information for [locale](../standard-library/locale-class.md) facets.  
  
```cpp  
enum class codecvt_mode {  
    consume_header = 4,  
    generate_header = 2,  
    little_endian = 1  
 };  
```  
  
### Remarks  
 The enumeration defines three constants that supply configuration information to the locale facets declared in [\<codecvt>](../standard-library/codecvt.md). The distinct values are:  
  
- `consume_header`, to consume an initial header sequence when reading a multibyte sequence and determine the endianness of the subsequent multibyte sequence to be read  
  
- `generate_header`, to generate an initial header sequence when writing a multibyte sequence to advertise the endianness of the subsequent multibyte sequence to be written  
  
- `little_endian`, to generate a multibyte sequence in little-endian order, as opposed to the default big-endian order  
  
 These constants can be ORed together in arbitrary combinations.  
  
## See Also  
 [\<codecvt>](../standard-library/codecvt.md)





