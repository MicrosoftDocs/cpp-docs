---
title: "&lt;ostream&gt; operators"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 9282a62e-a3d1-4371-a284-fbc9515bb9a2
caps.latest.revision: 8
---
# &lt;ostream&gt; operators
||  
|-|  
|[operator&lt;&lt;](#operator_lt__lt_)|  
  
##  <a name="operator_lt__lt_"></a>  operator&lt;&lt;  
 Writes various types to the stream.  
  
```  
template<class _Elem, class _Tr>  
   basic_ostream< _Elem, _Tr>& operator<<(  
      basic_ostream< _Elem, _Tr>& _Ostr,  
      const Elem * _Str  
   );  
template<class _Elem, class _Tr>  
   basic_ostream< _Elem, _Tr>& operator<<(  
      basic_ostream< _Elem, _Tr>& _Ostr,  
      Elem _Ch  
   );  
template<class _Elem, class _Tr>  
   basic_ostream< _Elem, _Tr>& operator<<(  
      basic_ostream< _Elem, _Tr>& _Ostr,  
      const char * _Str  
   );  
template<class _Elem, class _Tr>  
   basic_ostream< _Elem, _Tr>& operator<< (  
      basic_ostream< _Elem, _Tr>& _Ostr,  
      char _Ch  
   );  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<< (  
      basic_ostream<char, _Tr>& _Ostr,  
      const char * _Str  
   );  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<< (  
      basic_ostream<char, _Tr>& _ostr,  
      char _Ch  
   );  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      const signed char * _Str  
   );  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      signed char _Ch  
   );  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      const unsigned char * _Str  
   );  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      unsigned char _Ch  
   );  
template<class _Elem, class _Tr, class _Ty>  
    basic_ostream <_Elem, _Tr>& operator<<(  
        basic_ostream< _Elem, _Tr>&& _Ostr,  
        Ty _Val  
    );  
  
```  
  
### Parameters  
 `_Ch`  
 A character.  
  
 `_Elem`  
 The element type.  
  
 `_Ostr`  
 A `basic_ostream` object.  
  
 `_Str`  
 A character string.  
  
 `_Tr`  
 Character traits.  
  
 `_Val`  
 The type  
  
### Return Value  
 The stream.  
  
### Remarks  
 The `basic_ostream` class also defines several insertion operators. For more information, see [basic_ostream::operator&lt;&lt;](../VS_visualcpp/basic_ostream-Class.md#basic_ostream__operator_lt__lt_).  
  
 The template function  
  
```  
template<class _Elem, class _Tr>  
   basic_ostream<Elem, _Tr>& operator<<(  
      basic_ostream<Elem, _Tr>& _ostr,  
      const Elem *_Str);  
```  
  
 determines the length N = `traits_type::`[length](../VS_visualcpp/char_traits-Struct.md#char_traits__length)( `_Str`) of the sequence beginning at `_Str`, and inserts the sequence. If N < `_Ostr.`[width](../VS_visualcpp/ios_base-Class.md#ios_base__width), then the function also inserts a repetition of `_Ostr.``width` - N fill characters. The repetition precedes the sequence if ( `_Ostr`. [flags](../VS_visualcpp/ios_base-Class.md#ios_base__flags) & `adjustfield` != [left](../VS_visualcpp/-ios--functions.md#left). Otherwise, the repetition follows the sequence. The function returns `_Ostr`.  
  
 The template function  
  
```  
template<class _Elem, class _Tr>  
   basic_ostream<Elem, _Tr>& operator<<(  
      basic_ostream<Elem, _Tr>& _Ostr,  
      Elem _Ch);  
```  
  
 inserts the element `_Ch`. If 1 < `_Ostr.width`, then the function also inserts a repetition of `_Ostr.width` - 1 fill characters. The repetition precedes the sequence if `_Ostr.flags & adjustfield != left`. Otherwise, the repetition follows the sequence. It returns `_Ostr`.  
  
 The template function  
  
```  
template<class _Elem, class _Tr>  
   basic_ostream<Elem, _Tr>& operator<<(  
      basic_ostream<Elem, _Tr>& _Ostr,  
      const char *_Str);  
```  
  
 behaves the same as  
  
```  
template<class _Elem, class _Tr>  
   basic_ostream<Elem, _Tr>& operator<<(  
      basic_ostream<Elem, _Tr>& _Ostr,  
      const Elem *_Str);  
```  
  
 except that each element `_Ch` of the sequence beginning at `_Str` is converted to an object of type `Elem` by calling `_Ostr.`[put](../VS_visualcpp/basic_ostream-Class.md#basic_ostream__put)( `_Ostr.`[widen](../VS_visualcpp/basic_ios-Class.md#basic_ios__widen)( `_Ch`)).  
  
 The template function  
  
```  
template<class _Elem, class _Tr>  
   basic_ostream<Elem, _Tr>& operator<<(  
      basic_ostream<Elem, _Tr>& _Ostr,  
      char _Ch);  
```  
  
 behaves the same as  
  
```  
template<class _Elem, class _Tr>  
   basic_ostream<Elem, _Tr>& operator<<(  
      basic_ostream<Elem, _Tr>& _Ostr,  
      Elem _Ch);  
```  
  
 except that `_Ch` is converted to an object of type `Elem` by calling `_Ostr.put`( `_Ostr.widen`( `_Ch`)).  
  
 The template function  
  
```  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      const char *_Str);  
```  
  
 behaves the same as  
  
```  
template<class _Elem, class _Tr>  
   basic_ostream<Elem, _Tr>& operator<<(  
      basic_ostream<Elem, _Tr>& _Ostr,  
      const Elem *_Str);  
```  
  
 (It does not have to widen the elements before inserting them.)  
  
 The template function  
  
```  
template<class _Tr>  
   basic_ostream<char, Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      char _Ch);  
```  
  
 behaves the same as  
  
```  
template<class _Elem, class _Tr>  
   basic_ostream<Elem, _Tr>& operator<<(  
      basic_ostream<Elem, _Tr>& _Ostr,  
      Elem _Ch);  
```  
  
 (It does not have to widen `_Ch` before inserting it.)  
  
 The template function  
  
```  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      const signed char *_Str);  
```  
  
 returns `_Ostr` << ( `const char *`) `_Str`.  
  
 The template function  
  
```  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      signed char _Ch);  
```  
  
 returns `_Ostr` << ( `char`) `_Ch`.  
  
 The template function:  
  
```  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      const unsigned char *_Str);  
```  
  
 returns `_Ostr` << ( `const char *`) `_Str`.  
  
 The template function:  
  
```  
template<class _Tr>  
   basic_ostream<char, _Tr>& operator<<(  
      basic_ostream<char, _Tr>& _Ostr,  
      unsigned char _Ch);  
```  
  
 returns `_Ostr` << ( `char`) `_Ch`.  
  
 The template function:  
  
```  
template<class _Elem, class _Tr, class _Ty>  
    basic_ostream<_Elem, _Tr>& operator<<(  
        basic_ostream<char, _Tr>&& _Ostr,  
        _Ty _Val  
    );  
```  
  
 returns `_Ostr` `<<` `_Val` (and converts a [RValue Reference](../VS_visualcpp/Rvalue-Reference-Declarator----.md) to `_Ostr` to an lvalue in the process).  
  
### Example  
  See [flush](../VS_visualcpp/-ostream--functions.md#flush) for an example using `operator<<`.  
  
## See Also  
 [<ostream\>](../VS_visualcpp/-ostream-.md)