---
title: "&lt;ostream&gt; operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 9282a62e-a3d1-4371-a284-fbc9515bb9a2
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;ostream&gt; operators
||  
|-|  
|[operator&lt;&lt;](#operator_lt__lt_)|  
  
##  <a name="operator_lt__lt_"></a>  operator&lt;&lt;  
 Writes various types to the stream.  
  
```
template <class _Elem, class _Tr>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>& _Ostr,
    const Elem* str);

template <class _Elem, class _Tr>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>& _Ostr,
    Elem _Ch);

template <class _Elem, class _Tr>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>& _Ostr,
    const char* str);

template <class _Elem, class _Tr>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>& _Ostr,
    char _Ch);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const char* str);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _ostr,
    char _Ch);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const signed char* str);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    signed char _Ch);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const unsigned char* str);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    unsigned char _Ch);

template <class _Elem, class _Tr, class T>
basic_ostream <_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>&& _Ostr,
    Ty val);
```  
  
### Parameters  
 `_Ch`  
 A character.  
  
 `_Elem`  
 The element type.  
  
 `_Ostr`  
 A `basic_ostream` object.  
  
 `str`  
 A character string.  
  
 `_Tr`  
 Character traits.  
  
 `val`  
 The type  
  
### Return Value  
 The stream.  
  
### Remarks  
 The `basic_ostream` class also defines several insertion operators. For more information, see [basic_ostream::operator&lt;&lt;](../standard-library/basic-ostream-class.md#basic_ostream_operator_lt_lt_).  
  
 The template function  
  
```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _ostr,
    const Elem *str);
```  
  
 determines the length N = `traits_type::`[length](../standard-library/char-traits-struct.md#char_traits__length)( `str`) of the sequence beginning at `str`, and inserts the sequence. If N < `_Ostr.`[width](../standard-library/ios-base-class.md#ios_base__width), then the function also inserts a repetition of `_Ostr.``width` - N fill characters. The repetition precedes the sequence if ( `_Ostr`. [flags](../standard-library/ios-base-class.md#ios_base__flags) & `adjustfield` != [left](../standard-library/ios-functions.md#left). Otherwise, the repetition follows the sequence. The function returns `_Ostr`.  
  
 The template function  
  
```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    Elem _Ch);
```  
  
 inserts the element `_Ch`. If 1 < `_Ostr.width`, then the function also inserts a repetition of `_Ostr.width` - 1 fill characters. The repetition precedes the sequence if `_Ostr.flags & adjustfield != left`. Otherwise, the repetition follows the sequence. It returns `_Ostr`.  
  
 The template function  
  
```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    const char *str);
```  
  
 behaves the same as  
  
```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    const Elem *str);
```  
  
 except that each element `_Ch` of the sequence beginning at `str` is converted to an object of type `Elem` by calling `_Ostr.`[put](../standard-library/basic-ostream-class.md#basic_ostream__put)( `_Ostr.`[widen](../standard-library/basic-ios-class.md#basic_ios__widen)( `_Ch`)).  
  
 The template function  
  
``cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    char _Ch);
```  
  
 behaves the same as  
  
```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    Elem _Ch);
```  
  
 except that `_Ch` is converted to an object of type `Elem` by calling `_Ostr.put`( `_Ostr.widen`( `_Ch`)).  
  
 The template function  
  
```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const char *str);
```  
  
 behaves the same as  
  
```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    const Elem *str);
```  
  
 (It does not have to widen the elements before inserting them.)  
  
 The template function  
  
```cpp
template <class _Tr>
basic_ostream<char, Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    char _Ch);
```  
  
 behaves the same as  
  
```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    Elem _Ch);
```  
  
 (It does not have to widen `_Ch` before inserting it.)  
  
 The template function  
  
```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const signed char *str);
```  
  
 returns `_Ostr` << ( `const char *`) `str`.  
  
 The template function  
  
```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    signed char _Ch);
```  
  
 returns `_Ostr` << ( `char`) `_Ch`.  
  
 The template function:  
  
```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const unsigned char *str);
```  
  
 returns `_Ostr` << ( `const char *`) `str`.  
  
 The template function:  
  
```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    unsigned char _Ch);
```  
  
 returns `_Ostr` << ( `char`) `_Ch`.  
  
 The template function:  
  
```cpp
template <class _Elem, class _Tr, class T>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<char, _Tr>&& _Ostr,
    T val);
```  
  
 returns `_Ostr` `<<` `val` (and converts a [RValue Reference](../cpp/rvalue-reference-declarator-amp-amp.md) to `_Ostr` to an lvalue in the process).  
  
### Example  
  See [flush](../standard-library/ostream-functions.md#flush) for an example using `operator<<`.  
  
## See Also  
 [\<ostream>](../standard-library/ostream.md)



