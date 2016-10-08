---
title: "Input-Output Streams"
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
H1: Input/Output Streams
ms.assetid: 21a97566-91a7-42d6-b2f8-a4c16bc926f1
caps.latest.revision: 10
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
# Input-Output Streams
`basic_iostream`, which is defined in the header file <istream\>, is the class template for objects that handle both input and output character-based I/O streams.  
  
 There are two typedefs that define character-specific specializations of `basic_iostream` and can help make code easier to read: `iostream` (not to be confused with the header file <iostream\>) is an I/O stream that is based on `basic_iostream<char>`; `wiostream` is an I/O stream that is based on `basic_iostream<wchar_t>`.  
  
 For more information, see [basic_iostream Class](../VS_visualcpp/basic_iostream-Class.md), [iostream](../Topic/iostream.md), and [wiostream](../Topic/wiostream.md).  
  
 Deriving from `basic_iostream` is the class template `basic_fstream`, which is used to stream character data to and from files.  
  
 There also are typedefs that provide character-specific specializations of `basic_fstream`. They are `fstream`, which is a file I/O stream that is based on `char`, and `wfstream`, which is a file I/O stream that is based on `wchar_t`. For more information, see [basic_fstream Class](../VS_visualcpp/basic_fstream-Class.md), [fstream](../Topic/fstream.md), and [wfstream](../Topic/wfstream.md). Using these typedefs requires the inclusion of the header file <fstream\>.  
  
> [!NOTE]
>  When a `basic_fstream` object is used to perform file I/O, although the underlying buffer contains separately designated positions for reading and writing, the current input and current output positions are tied together, and therefore, reading some data moves the output position.  
  
 The class template `basic_stringstream` and its common specialization, `stringstream`, are often used to work with I/O stream objects to insert and extract character data. For more information, see [basic_stringstream Class](../VS_visualcpp/basic_stringstream-Class.md).  
  
## See Also  
 [stringstream](../Topic/stringstream.md)   
 [basic_stringstream Class](../VS_visualcpp/basic_stringstream-Class.md)   
 [<sstream\>](../VS_visualcpp/-sstream-.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [C++ Standard Library](../VS_visualcpp/C---Standard-Library-Reference.md)