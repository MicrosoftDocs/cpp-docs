---
title: "&lt;ios&gt;"
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
ms.assetid: d3d4c161-2f37-4f04-93cc-0a2a89984a9c
caps.latest.revision: 18
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
# &lt;ios&gt;
Defines several types and functions basic to the operation of iostreams. This header is typically included for you by another iostream headers; you rarely include it directly.  
  
## Syntax  
  
```  
#include <ios>  
  
```  
  
## Remarks  
 A large group of functions are manipulators. A manipulator declared in <ios\> alters the values stored in its argument object of class [ios_base](../VS_visualcpp/ios_base-Class.md). Other manipulators perform actions on streams controlled by objects of a type derived from this class, such as a specialization of one of the template classes [basic_istream](../VS_visualcpp/basic_istream-Class.md) or [basic_ostream](../VS_visualcpp/basic_ostream-Class.md). For example, [noskipws](../VS_visualcpp/-ios--functions.md#noskipws)(**str**) clears the format flag `ios_base::skipws` in the object **str**, which can be of one of these types.  
  
 You can also call a manipulator by inserting it into an output stream or extracting it from an input stream, because of special insertion and extraction operations supplied for the classes derived from `ios_base`. For example:  
  
```  
istr >> noskipws;  
```  
  
 calls [noskipws](../VS_visualcpp/-ios--functions.md#noskipws)(**istr**).  
  
### Typedefs  
  
|||  
|-|-|  
|[ios](../VS_visualcpp/-ios--typedefs.md#ios)|Supports the ios class from the old iostream library.|  
|[streamoff](../VS_visualcpp/-ios--typedefs.md#streamoff)|Supports internal operations.|  
|[streampos](../VS_visualcpp/-ios--typedefs.md#streampos)|Holds the current position of the buffer pointer or file pointer.|  
|[streamsize](../VS_visualcpp/-ios--typedefs.md#streamsize)|Specifies the size of the stream.|  
|[wios](../VS_visualcpp/-ios--typedefs.md#wios)|Supports the wios class from the old iostream library.|  
|[wstreampos](../VS_visualcpp/-ios--typedefs.md#wstreampos)|Holds the current position of the buffer pointer or file pointer.|  
  
### Manipulators  
  
|||  
|-|-|  
|[boolalpha](../VS_visualcpp/-ios--functions.md#boolalpha)|Specifies that variables of type [bool](../VS_visualcpp/bool--C---.md) appear as **true** or **false** in the stream.|  
|[dec](../VS_visualcpp/-ios--functions.md#dec)|Specifies that integer variables appear in base 10 notation.|  
|[defaultfloat](../VS_visualcpp/-ios--functions.md#ios_defaultfloat)|Configures the flags of an `ios_base` object to use a default display format for float values.|  
|[fixed](../VS_visualcpp/-ios--functions.md#fixed)|Specifies that a floating-point number is displayed in fixed-decimal notation.|  
|[hex](../VS_visualcpp/-ios--functions.md#hex)|Specifies that integer variables appear in base 16 notation.|  
|[internal](../VS_visualcpp/-ios--functions.md#internal)|Causes a number's sign to be left justified and the number to be right justified.|  
|[left](../VS_visualcpp/-ios--functions.md#left)|Causes text that is not as wide as the output width to appear in the stream flush with the left margin.|  
|[noboolalpha](../VS_visualcpp/-ios--functions.md#noboolalpha)|Specifies that variables of type [bool](../VS_visualcpp/bool--C---.md) appear as 1 or 0 in the stream.|  
|[noshowbase](../VS_visualcpp/-ios--functions.md#noshowbase)|Turns off indicating the notational base in which a number is displayed.|  
|[noshowpoint](../VS_visualcpp/-ios--functions.md#noshowpoint)|Displays only the whole-number part of floating-point numbers whose fractional part is zero.|  
|[noshowpos](../VS_visualcpp/-ios--functions.md#noshowpos)|Causes positive numbers to not be explicitly signed.|  
|[noskipws](../VS_visualcpp/-ios--functions.md#noskipws)|Cause spaces to be read by the input stream.|  
|[nounitbuf](../VS_visualcpp/-ios--functions.md#nounitbuf)|Causes output to be buffered and processed when the buffer is full.|  
|[nouppercase](../VS_visualcpp/-ios--functions.md#nouppercase)|Specifies that hexadecimal digits and the exponent in scientific notation appear in lowercase.|  
|[oct](../VS_visualcpp/-ios--functions.md#oct)|Specifies that integer variables appear in base 8 notation.|  
|[right](../VS_visualcpp/-ios--functions.md#right)|Causes text that is not as wide as the output width to appear in the stream flush with the right margin.|  
|[scientific](../VS_visualcpp/-ios--functions.md#scientific)|Causes floating point numbers to be displayed using scientific notation.|  
|[showbase](../VS_visualcpp/-ios--functions.md#showbase)|Indicates the notational base in which a number is displayed.|  
|[showpoint](../VS_visualcpp/-ios--functions.md#showpoint)|Displays the whole-number part of a floating-point number and digits to the right of the decimal point even when the fractional part is zero.|  
|[showpos](../VS_visualcpp/-ios--functions.md#showpos)|Causes positive numbers to be explicitly signed.|  
|[skipws](../VS_visualcpp/-ios--functions.md#skipws)|Cause spaces to not be read by the input stream.|  
|[unitbuf](../VS_visualcpp/-ios--functions.md#unitbuf)|Causes output to be processed when the buffer is not empty.|  
|[uppercase](../VS_visualcpp/-ios--functions.md#uppercase)|Specifies that hexadecimal digits and the exponent in scientific notation appear in uppercase.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_ios](../VS_visualcpp/basic_ios-Class.md)|The template class describes the storage and member functions common to both input streams (of template class [basic_istream](../VS_visualcpp/basic_istream-Class.md)) and output streams (of template class [basic_ostream](../VS_visualcpp/basic_ostream-Class.md)) that depend on the template parameters.|  
|[fpos](../VS_visualcpp/fpos-Class.md)|The template class describes an object that can store all the information needed to restore an arbitrary file-position indicator within any stream.|  
|[ios_base](../VS_visualcpp/ios_base-Class.md)|The class describes the storage and member functions common to both input and output streams that do not depend on the template parameters.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)