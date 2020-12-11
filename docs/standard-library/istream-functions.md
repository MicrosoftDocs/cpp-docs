---
description: "Learn more about: &lt;istream&gt; functions"
title: "&lt;istream&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["istream/std::swap", "istream/std::ws"]
ms.assetid: 0301ea0d-4ded-4841-83dd-4253b55b3188
---
# &lt;istream&gt; functions

[swap](#istream_swap)\
[ws](#ws)

## <a name="istream_swap"></a> swap

Exchanges the elements of two stream objects.

```cpp
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

*left*\
A stream.

*right*\
A stream.

## <a name="ws"></a> ws

Skips white space in the stream.

```cpp
template class<Elem, Tr> basic_istream<Elem, Tr>& ws(basic_istream<Elem, Tr>& _Istr);
```

### Parameters

*_Istr*\
A stream.

### Return Value

The stream.

### Remarks

The manipulator extracts and discards any elements `ch` for which [use_facet](../standard-library/basic-filebuf-class.md#open)< **ctype**\< **Elem**> >( [getloc](../standard-library/ios-base-class.md#getloc)). **is**( **ctype**\< **Elem**>:: **space**, **ch**) is true.

The function calls [setstate](../standard-library/basic-ios-class.md#setstate)( **eofbit**) if it encounters end of file while extracting elements. It returns *_Istr*.

### Example

See [operator>>](../standard-library/istream-operators.md#op_gt_gt) for an example of using `ws`.

## See also

[\<istream>](../standard-library/istream.md)
