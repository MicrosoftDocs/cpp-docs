---
title: "&lt;istream&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 0301ea0d-4ded-4841-83dd-4253b55b3188
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;istream&gt; functions
|||  
|-|-|  
|[swap](#istream_swap)|[ws](#ws)|  
  
##  <a name="istream_swap"></a>  swap  
 Exchanges the elements of two stream objects.  
  
```  
template <class Elem, class Tr>  
void swap(
    basic_istream<Elem, Tr>& left,  
    basic_istream<Elem, Tr>& right);

template <class Elem, class Tr>  
void swap(
    basic_iostream<Elem, Tr>& left,  
    basic_iostream<Elem, Tr>& right);
```  
  
### Parameters  
 ` left`  
 A stream.  
  
 ` right`  
 A stream.  
  
##  <a name="ws"></a>  ws  
 Skips white space in the stream.  
  
```  
template class<Elem, Tr> basic_istream<Elem, Tr>& ws(basic_istream<Elem, Tr>& _Istr);
```  
  
### Parameters  
 `_Istr`  
 A stream.  
  
### Return Value  
 The stream.  
  
### Remarks  
 The manipulator extracts and discards any elements `ch` for which [use_facet](../standard-library/basic-filebuf-class.md#basic_filebuf__open)< **ctype**\< **Elem**> >( [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). **is**( **ctype**\< **Elem**>:: **space**, **ch**) is true.  
  
 The function calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **eofbit**) if it encounters end of file while extracting elements. It returns `_Istr`.  
  
### Example  
  See [operator>>](../standard-library/istream-operators.md#operator_gt__gt_) for an example of using `ws`.  
  
## See Also  
 [\<istream>](../standard-library/istream.md)

