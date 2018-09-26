---
title: "HStringReference Class | Microsoft Docs"
ms.custom: ""
ms.date: "09/25/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HStringReference", "corewrappers/Microsoft::WRL::Wrappers::HStringReference::CopyTo", "corewrappers/Microsoft::WRL::Wrappers::HStringReference::Get", "corewrappers/Microsoft::WRL::Wrappers::HStringReference::HStringReference", "corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator=", "corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator==", "corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator!=", "corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator<"]
dev_langs: ["C++"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HStringReference class", "Microsoft::WRL::Wrappers::HStringReference::CopyTo method", "Microsoft::WRL::Wrappers::HStringReference::Get method", "Microsoft::WRL::Wrappers::HStringReference::HStringReference, constructor", "Microsoft::WRL::Wrappers::HStringReference::operator= operator", "Microsoft::WRL::Wrappers::HStringReference::operator== operator", "Microsoft::WRL::Wrappers::HStringReference::operator!= operator", "Microsoft::WRL::Wrappers::HStringReference::operator< operator"]
ms.assetid: 9bf823b1-17eb-4ac4-8c5d-27d27c7a4150
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HStringReference Class

Represents an HSTRING that is created from an existing string.

## Syntax

```cpp
class HStringReference;
```

## Remarks

The lifetime of the backing buffer in the new HSTRING is not managed by the Windows Runtime. The caller allocates a source string on the stack frame to avoid a heap allocation and to eliminate the risk of a memory leak. Also, the caller must ensure that source string remains unchanged during the lifetime of the attached HSTRING. For more information, see [WindowsCreateStringReference function](/windows/desktop/api/winstring/nf-winstring-windowscreatestringreference).

## Members

### Public Constructors

Name                                                    | Description
------------------------------------------------------- | -----------------------------------------------------------
[HStringReference::HStringReference](#hstringreference) | Initializes a new instance of the `HStringReference` class.

### Methods

Member                              | Description
----------------------------------- | ------------------------------------------------------------------
[HStringReference::CopyTo](#copyto) | Copies the current `HStringReference` object to an HSTRING object.
[HStringReference::Get](#get)       | Retrieves the value of the underlying HSTRING handle.

### Public Operators

Name                                                  | Description
----------------------------------------------------- | ----------------------------------------------------------------------------------------------
[HStringReference::operator=](#operator-assign)       | Moves the value of another `HStringReference` object to the current `HStringReference` object.
[HStringReference::operator==](#operator-equality)    | Indicates whether the two parameters are equal.
[HStringReference::operator!=](#operator-inequality)  | Indicates whether the two parameters are not equal.
[HStringReference::operator&lt;](#operator-less-than) | Indicates whether the first parameter is less than the second parameter.

## Inheritance Hierarchy

`HStringReference`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="copyto"></a>HStringReference::CopyTo

Copies the current `HStringReference` object to an HSTRING object.

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### Parameters

*str*<br/>
The HSTRING that receives the copy.

### Remarks

This method calls the [WindowsDuplicateString](https://msdn.microsoft.com/library/br224634.aspx) function.

## <a name="get"></a>HStringReference::Get

Retrieves the value of the underlying HSTRING handle.

```cpp
HSTRING Get() const throw()  
```

### Return Value

The value of the underlying HSTRING handle.

## <a name="hstringreference"></a>HStringReference::HStringReference

Initializes a new instance of the `HStringReference` class.

```cpp
template<unsigned int sizeDest>
HStringReference(wchar_t const (&str)[ sizeDest]) throw();

template<unsigned int sizeDest>
HStringReference(wchar_t const (&str)[ sizeDest],
                 unsigned int len) throw();

HStringReference(HStringReference&& other) throw();
```

### Parameters

*sizeDest*<br/>
A template parameter that specifies the size of the destination `HStringReference` buffer.

*str*<br/>
A reference to a wide-character string.

*len*<br/>
The maximum length of the *str* parameter buffer to use in this operation. If the *len* parameter isn't specified, the entire *str* parameter is used. If *len* is greater than *sizeDest*, *len* is set to *sizeDest*-1.

*other*<br/>
Another `HStringReference` object.

### Remarks

The first constructor initializes a new `HStringReference` object that the same size as parameter *str*.

The second constructor initializes a new `HStringReference` object that the size specifeid by parameter *len*.

The third constructor initializes a new `HStringReference` object to the value of the *other* parameter, and then destroys the *other* parameter.

## <a name="operator-assign"></a>HStringReference::operator=

Moves the value of another `HStringReference` object to the current `HStringReference` object.

```cpp
HStringReference& operator=(HStringReference&& other) throw()  
```

### Parameters

*other*<br/>
An existing `HStringReference` object.

### Remarks

The value of the existing *other* object is copied to the current `HStringReference` object, and then the *other* object is destroyed.

## <a name="operator-equality"></a>HStringReference::operator==

Indicates whether the two parameters are equal.

```cpp
inline bool operator==(
               const HStringReference& lhs,
               const HStringReference& rhs) throw()

inline bool operator==(
               const HSTRING& lhs,
               const HStringReference& rhs) throw()

inline bool operator==(
               const HStringReference& lhs,
               const HSTRING& rhs) throw()  
```

### Parameters

*lhs*<br/>
The first parameter to compare. *lhs* can be an `HStringReference` object or an HSTRING handle.

*rhs*<br/>
The second parameter to compare.  *rhs* can be an `HStringReference` object or an HSTRING handle.

### Return Value

`true` if the *lhs* and *rhs* parameters are equal; otherwise, `false`.

## <a name="operator-inequality"></a>HStringReference::operator!=

Indicates whether the two parameters are not equal.

```cpp
inline bool operator==(
               const HStringReference& lhs,
               const HSTRING& rhs) throw()

inline bool operator!=(
               const HStringReference& lhs,
               const HStringReference& rhs) throw()

inline bool operator!=(
               const HSTRING& lhs,
               const HStringReference& rhs) throw()

inline bool operator!=(
               const HStringReference& lhs,
               const HSTRING& rhs) throw()  
```

### Parameters

*lhs*<br/>
The first parameter to compare. *lhs* can be an `HStringReference` object or an HSTRING handle.

*rhs*<br/>
The second parameter to compare.  *rhs* can be an `HStringReference` object or an HSTRING handle.

### Return Value

`true` if the *lhs* and *rhs* parameters are not equal; otherwise, `false`.

## <a name="operator-less-than"></a>HStringReference::operator&lt;

Indicates whether the first parameter is less than the second parameter.

```cpp
inline bool operator<(
    const HStringReference& lhs,
    const HStringReference& rhs) throw()  
```

### Parameters

*lhs*<br/>
The first parameter to compare. *lhs* can be a reference to an `HStringReference`.

*rhs*<br/>
The second parameter to compare.  *rhs* can be a reference to an `HStringReference`.

### Return Value

`true` if the *lhs* parameter is less than the *rhs* parameter; otherwise, `false`.
