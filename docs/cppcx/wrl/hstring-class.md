---
description: "Learn more about: HString Class"
title: "HString Class"
ms.date: "07/15/2019"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString", "corewrappers/Microsoft::WRL::Wrappers::HString::Attach", "corewrappers/Microsoft::WRL::Wrappers::HString::CopyTo", "corewrappers/Microsoft::WRL::Wrappers::HString::Detach", "corewrappers/Microsoft::WRL::Wrappers::HString::Get", "corewrappers/Microsoft::WRL::Wrappers::HString::GetRawBuffer","corewrappers/Microsoft::WRL::Wrappers::HString::GetAddressOf", "corewrappers/Microsoft::WRL::Wrappers::HString::HString", "corewrappers/Microsoft::WRL::Wrappers::HString::IsValid", "corewrappers/Microsoft::WRL::Wrappers::HString::MakeReference", "corewrappers/Microsoft::WRL::Wrappers::HString::operator=", "corewrappers/Microsoft::WRL::Wrappers::HString::operator==", "corewrappers/Microsoft::WRL::Wrappers::HString::operator!=", "corewrappers/Microsoft::WRL::Wrappers::HString::operator<", "corewrappers/Microsoft::WRL::Wrappers::HString::Release", "corewrappers/Microsoft::WRL::Wrappers::HString::Set", "corewrappers/Microsoft::WRL::Wrappers::HString::~HString"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HString class", "Microsoft::WRL::Wrappers::HString::Attach method", "Microsoft::WRL::Wrappers::HString::CopyTo method", "Microsoft::WRL::Wrappers::HString::Detach method", "Microsoft::WRL::Wrappers::HString::Get method", "Microsoft::WRL::Wrappers::HString::GetAddressOf method", "Microsoft::WRL::Wrappers::HString::HString, constructor", "Microsoft::WRL::Wrappers::HString::IsValid method", "Microsoft::WRL::Wrappers::HString::MakeReference method", "Microsoft::WRL::Wrappers::HString::operator= operator", "Microsoft::WRL::Wrappers::HString::operator== operator", "Microsoft::WRL::Wrappers::HString::operator!= operator", "Microsoft::WRL::Wrappers::HString::operator< operator", "Microsoft::WRL::Wrappers::HString::Release method", "Microsoft::WRL::Wrappers::HString::Set method", "Microsoft::WRL::Wrappers::HString::~HString, destructor"]
ms.assetid: 6709dd2e-8d72-4675-8ec7-1baa7d71854d
---
# HString Class

A helper class for managing the lifetime of an [HSTRING](/windows/win32/WinRT/hstring) using the RAII pattern.

## Syntax

```cpp
class HString;
```

## Remarks

The Windows Runtime provides access to strings through [HSTRING](/windows/win32/WinRT/hstring) handles. The `HString` class provides convenience functions and operators to simplify using HSTRING handles. This class can handle the lifetime of the HSTRING it owns through an RAII pattern.

## Members

### Public Constructors

Name                                | Description
----------------------------------- | -----------------------------------------------------
[HString::HString](#hstring)        | Initializes a new instance of the `HString` class.
[HString::~HString](#tilde-hstring) | Destroys the current instance of the `HString` class.

### Public Methods

Name                                     | Description
---------------------------------------- | -------------------------------------------------------------------------------------------------------------
[HString::Attach](#attach)               | Associates the specified `HString` object with the current `HString` object.
[HString::CopyTo](#copyto)               | Copies the current `HString` object to an HSTRING object.
[HString::Detach](#detach)               | Disassociates the specified `HString` object from its underlying value.
[HString::Get](#get)                     | Retrieves the value of the underlying HSTRING handle.
[HString::GetAddressOf](#getaddressof)   | Retrieves a pointer to the underlying HSTRING handle.
[HString::GetRawBuffer](#getrawbuffer)   | Retrieves a pointer to the underlying string data.
[HString::IsValid](#isvalid)             | Indicates whether the current `HString` object is valid.
[HString::MakeReference](#makereference) | Creates an `HStringReference` object from a specified string parameter.
[HString::Release](#release)             | Deletes the underlying string value and intializes the current `HString` object to an empty value.
[HString::Set](#set)                     | Sets the value of the current `HString` object to the specified wide-character string or `HString` parameter.

### Public Operators

Name                                         | Description
-------------------------------------------- | ----------------------------------------------------------------------------
[HString::operator=](#operator-assign)       | Moves the value of another `HString` object to the current `HString` object.
[HString::operator==](#operator-equality)    | Indicates whether the two parameters are equal.
[HString::operator!=](#operator-inequality)  | Indicates whether the two parameters are not equal.
[HString::operator&lt;](#operator-less-than) | Indicates whether the first parameter is less than the second parameter.

## Inheritance Hierarchy

`HString`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="tilde-hstring"></a> HString::~HString

Destroys the current instance of the `HString` class.

```cpp
~HString() throw()
```

## <a name="attach"></a> HString::Attach

Associates the specified `HString` object with the current `HString` object.

```cpp
void Attach(
       HSTRING hstr
       ) throw()
```

### Parameters

*hstr*<br/>
An existing `HString` object.

## <a name="copyto"></a> HString::CopyTo

Copies the current `HString` object to an HSTRING object.

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### Parameters

*str*<br/>
The HSTRING that receives the copy.

### Remarks

This method calls the [WindowsDuplicateString](/windows/win32/api/winstring/nf-winstring-windowsduplicatestring) function.

## <a name="detach"></a> HString::Detach

Disassociates the specified `HString` object from its underlying value.

```cpp
HSTRING Detach() throw()
```

### Return Value

The underlying `HString` value before the detach operation started.

## <a name="get"></a> HString::Get

Retrieves the value of the underlying HSTRING handle.

```cpp
HSTRING Get() const throw()
```

### Return Value

The value of the underlying HSTRING handle

## <a name="getaddressof"></a> HString::GetAddressOf

Retrieves a pointer to the underlying HSTRING handle.

```cpp
HSTRING* GetAddressOf() throw()
```

### Return Value

A pointer to the underlying HSTRING handle.

### Remarks

After this operation, the string value of the underlying HSTRING handle is destroyed.

## <a name="getrawbuffer"></a> HString::GetRawBuffer

Retrieves a pointer to the underlying string data.

```cpp
const wchar_t* GetRawBuffer(unsigned int* length) const;
```

### Parameters

*length*
Pointer to an **`int`** variable that receives the length of the data.

### Return Value

A **`const`** pointer to the underlying string data.

## <a name="hstring"></a> HString::HString

Initializes a new instance of the `HString` class.

```cpp
HString() throw();
HString(HString&& other) throw();
```

### Parameters

*hstr*<br/>
An HSTRING handle.

*other*<br/>
An existing `HString` object.

### Remarks

The first constructor initializes a new `HString` object that is empty.

The second constructor initializes a new `HString` object to the value of the existing *other* parameter, and then destroys the *other* parameter.

## <a name="isvalid"></a> HString::IsValid

Indicates whether the current `HString` object is empty or not.

```cpp
bool IsValid() const throw()
```

### Parameters

**`true`** if the current `HString` object is not empty; otherwise, **`false`**.

## <a name="makereference"></a> HString::MakeReference

Creates an `HStringReference` object from a specified string parameter.

```cpp
template<unsigned int sizeDest>
    static HStringReference MakeReference(
              wchar_t const (&str)[ sizeDest]);

    template<unsigned int sizeDest>
    static HStringReference MakeReference(
              wchar_t const (&str)[sizeDest],
              unsigned int len);
```

### Parameters

*sizeDest*<br/>
A template parameter that specifies the size of the destination `HStringReference` buffer.

*str*<br/>
A reference to a wide-character string.

*len*<br/>
The maximum length of the *str* parameter buffer to use in this operation. If the *len* parameter isn't specified, the entire *str* parameter is used.

### Return Value

An `HStringReference` object whose value is the same as the specified *str* parameter.

## <a name="operator-assign"></a> HString::operator= Operator

Moves the value of another `HString` object to the current `HString` object.

```cpp
HString& operator=(HString&& other) throw()
```

### Parameters

*other*<br/>
An existing `HString` object.

### Remarks

The value of the existing *other* object is copied to the current `HString` object, and then the *other* object is destroyed.

## <a name="operator-equality"></a> HString::operator== Operator

Indicates whether the two parameters are equal.

```cpp
inline bool operator==(
               const HString& lhs,
               const HString& rhs) throw()

inline bool operator==(
                const HString& lhs,
                const HStringReference& rhs) throw()

inline bool operator==(
                const HStringReference& lhs,
                const HString& rhs) throw()

inline bool operator==(
                 const HSTRING& lhs,
                 const HString& rhs) throw()

inline bool operator==(
                 const HString& lhs,
                 const HSTRING& rhs) throw()
```

### Parameters

*lhs*<br/>
The first parameter to compare. *lhs* can be an `HString` or `HStringReference` object, or an HSTRING handle.

*rhs*<br/>
The second parameter to compare.*rhs* can be an `HString` or `HStringReference` object, or an HSTRING handle.

### Return Value

**`true`** if the *lhs* and *rhs* parameters are equal; otherwise, **`false`**.

## <a name="operator-inequality"></a> HString::operator!= Operator

Indicates whether the two parameters are not equal.

```cpp
inline bool operator!=( const HString& lhs,
                        const HString& rhs) throw()

inline bool operator!=( const HStringReference& lhs,
                        const HString& rhs) throw()

inline bool operator!=( const HString& lhs,
                        const HStringReference& rhs) throw()

inline bool operator!=( const HSTRING& lhs,
                        const HString& rhs) throw()

inline bool operator!=( const HString& lhs,
                        const HSTRING& rhs) throw()
```

### Parameters

*lhs*<br/>
The first parameter to compare. *lhs* can be an `HString` or `HStringReference` object, or an HSTRING handle.

*rhs*<br/>
The second parameter to compare.*rhs* can be an `HString` or `HStringReference` object, or an HSTRING handle.

### Return Value

**`true`** if the *lhs* and *rhs* parameters are not equal; otherwise, **`false`**.

## <a name="operator-less-than"></a> HString::operator&lt; Operator

Indicates whether the first parameter is less than the second parameter.

```cpp
inline bool operator<(
    const HString& lhs,
    const HString& rhs) throw()
```

### Parameters

*lhs*<br/>
The first parameter to compare. *lhs* can be a reference to an `HString`.

*rhs*<br/>
The second parameter to compare. *rhs* can be a reference to an `HString`.

### Return Value

**`true`** if the *lhs* parameter is less than the *rhs* parameter; otherwise, **`false`**.

## <a name="release"></a> HString::Release

Deletes the underlying string value and intializes the current `HString` object to an empty value.

```cpp
void Release() throw()
```

## <a name="set"></a> HString::Set

Sets the value of the current `HString` object to the specified wide-character string or `HString` parameter.

```cpp
HRESULT Set(
          const wchar_t* str) throw();
HRESULT Set(
          const wchar_t* str,
          unsigned int len
           ) throw();
HRESULT Set(
          const HSTRING& hstr
           ) throw();
```

### Parameters

*str*<br/>
A wide-character string.

*len*<br/>
The maximum length of the *str* parameter that is assigned to the current `HString` object.

*hstr*<br/>
An existing `HString` object.
