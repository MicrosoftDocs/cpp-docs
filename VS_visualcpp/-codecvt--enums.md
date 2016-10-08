---
title: "&lt;codecvt&gt; enums"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 46a8b073-01bc-46d3-b3d3-a8540f9422c1
caps.latest.revision: 9
---
# &lt;codecvt&gt; enums
||  
|-|  
|[codecvt_mode Enumeration](#codecvt_mode_enumeration)|  
  
##  <a name="codecvt_mode_enumeration"></a>  codecvt_mode Enumeration  
 Specifies configuration information for [locale](../VS_visualcpp/locale-Class.md) facets.  
  
```  
enum codecvt_mode {  
    consume_header = 4,  
    generate_header = 2,  
    little_endian = 1  
    };  
```  
  
### Remarks  
 The enumeration defines three constants that supply configuration information to the locale facets declared in [<codecvt\>](../VS_visualcpp/-codecvt-.md). The distinct values are:  
  
-   `consume_header`, to consume an initial header sequence when reading a multibyte sequence and determine the endianness of the subsequent multibyte sequence to be read  
  
-   `generate_header`, to generate an initial header sequence when writing a multibyte sequence to advertise the endianness of the subsequent multibyte sequence to be written  
  
-   `little_endian`, to generate a multibyte sequence in little-endian order, as opposed to the default big-endian order  
  
 These constants can be ORed together in arbitrary combinations.  
  
## See Also  
 [<codecvt\>](../VS_visualcpp/-codecvt-.md)