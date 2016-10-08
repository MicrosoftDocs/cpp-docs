---
title: "&lt;istream&gt; functions"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0301ea0d-4ded-4841-83dd-4253b55b3188
caps.latest.revision: 7
---
# &lt;istream&gt; functions
|||  
|-|-|  
|[&lt;istream&gt; swap](#istream_swap)|[ws](#ws)|  
  
##  <a name="istream_swap"></a>  &lt;istream&gt; swap  
 Exchanges the elements of two stream objects.  
  
```  
template<class Elem, class Tr>  
    void swap(  
        basic_istream<Elem, Tr>& _Left,  
        basic_istream<Elem, Tr>& _Right  
    );  
template<class Elem, class Tr>  
    void swap(  
        basic_iostream<Elem, Tr>& _Left,  
        basic_iostream<Elem, Tr>& _Right  
                );  
```  
  
### Parameters  
 `_Left`  
 A stream.  
  
 `_Right`  
 A stream.  
  
##  <a name="ws"></a>  ws  
 Skips white space in the stream.  
  
```  
template class<Elem, Tr>    basic _ istream<Elem, Tr>& ws(    basic _ istream<Elem, Tr>&  _Istr );  
  
```  
  
### Parameters  
 `_Istr`  
 A stream.  
  
### Return Value  
 The stream.  
  
### Remarks  
 The manipulator extracts and discards any elements `ch` for which [use_facet](../VS_visualcpp/basic_filebuf-Class.md#basic_filebuf__open)< **ctype**< **Elem**> >( [getloc](../VS_visualcpp/ios_base-Class.md#ios_base__getloc)). **is**( **ctype**< **Elem**>:: **space**, **ch**) is true.  
  
 The function calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **eofbit**) if it encounters end of file while extracting elements. It returns `_Istr`.  
  
### Example  
  See [operator>>](../VS_visualcpp/-istream--operators.md#operator_gt__gt_) for an example of using `ws`.  
  
## See Also  
 [<istream\>](../VS_visualcpp/-istream-.md)