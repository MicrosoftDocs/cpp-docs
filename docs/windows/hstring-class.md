---
title: "HString Class | Microsoft Docs"
ms.custom: ""
ms.date: "09/24/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString", "corewrappers/Microsoft::WRL::Wrappers::HString::Attach", "corewrappers/Microsoft::WRL::Wrappers::HString::CopyTo", "corewrappers/Microsoft::WRL::Wrappers::HString::Detach", "corewrappers/Microsoft::WRL::Wrappers::HString::Get", "corewrappers/Microsoft::WRL::Wrappers::HString::GetAddressOf", "corewrappers/Microsoft::WRL::Wrappers::HString::HString", "corewrappers/Microsoft::WRL::Wrappers::HString::IsValid", "corewrappers/Microsoft::WRL::Wrappers::HString::MakeReference", "corewrappers/Microsoft::WRL::Wrappers::HString::operator=", "corewrappers/Microsoft::WRL::Wrappers::HString::operator==", "corewrappers/Microsoft::WRL::Wrappers::HString::operator!=", "corewrappers/Microsoft::WRL::Wrappers::HString::operator<", "corewrappers/Microsoft::WRL::Wrappers::HString::Release", "corewrappers/Microsoft::WRL::Wrappers::HString::Set", "corewrappers/Microsoft::WRL::Wrappers::HString::~HString"]
dev_langs: ["C++"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HString class", "Microsoft::WRL::Wrappers::HString::Attach method", "Microsoft::WRL::Wrappers::HString::CopyTo method", "Microsoft::WRL::Wrappers::HString::Detach method", "Microsoft::WRL::Wrappers::HString::Get method", "Microsoft::WRL::Wrappers::HString::GetAddressOf method", "Microsoft::WRL::Wrappers::HString::HString, constructor", "Microsoft::WRL::Wrappers::HString::IsValid method", "Microsoft::WRL::Wrappers::HString::MakeReference method", "Microsoft::WRL::Wrappers::HString::operator= operator", "Microsoft::WRL::Wrappers::HString::operator== operator", "Microsoft::WRL::Wrappers::HString::operator!= operator", "Microsoft::WRL::Wrappers::HString::operator< operator", "Microsoft::WRL::Wrappers::HString::Release method", "Microsoft::WRL::Wrappers::HString::Set method", "Microsoft::WRL::Wrappers::HString::~HString, destructor"]
ms.assetid: 6709dd2e-8d72-4675-8ec7-1baa7d71854d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString Class

A helper class for managing the lifetime of an HSTRING using the RAII pattern.

## Syntax

```cpp
class HString;
```

## Remarks

The Windows Runtime provides access to strings through HSTRING handles. The **HString** class provides convenience functions and operators to simplify using HSTRING handles. This class can handle the lifetime of the HSTRING it owns through an RAII pattern.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[HString::HString Constructor](../windows/hstring-hstring-constructor.md)|Initializes a new instance of the **HString** class.|
|[HString::~HString Destructor](../windows/hstring-tilde-hstring-destructor.md)|Destroys the current instance of the **HString** class.|

### Members

|Name|Description|
|----------|-----------------|
|[HString::Set Method](../windows/hstring-set-method.md)|Sets the value of the current **HString** object to the specified wide-character string or **HString** parameter.|
|[HString::Attach Method](../windows/hstring-attach-method.md)|Associates the specified **HString** object with the current **HString** object.|
|[HString::CopyTo Method](../windows/hstring-copyto-method.md)|Copies the current **HString** object to an HSTRING object.|
|[HString::Detach Method](../windows/hstring-detach-method.md)|Disassociates the specified **HString** object from its underlying value.|
|[HString::GetAddressOf Method](../windows/hstring-getaddressof-method.md)|Retrieves a pointer to the underlying HSTRING handle.|
|[HString::Get Method](../windows/hstring-get-method.md)|Retrieves the value of the underlying HSTRING handle.|
|[HString::Release Method](../windows/hstring-release-method.md)|Deletes the underlying string value and intializes the current **HString** object to an empty value.|
|[HString::MakeReference Method](../windows/hstring-makereference-method.md)|Creates an `HStringReference` object from a specified string parameter.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[HString::Operator= Operator](../windows/hstring-operator-assign-operator.md)|Moves the value of another **HString** object to the current **HString** object.|
|[HString::Operator== Operator](../windows/hstring-operator-equality-operator.md)|Indicates whether the two parameters are equal.|
|[HString::Operator!= Operator](../windows/hstring-operator-inequality-operator.md)|Indicates whether the two parameters are not equal.|

## Inheritance Hierarchy

`HString`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

# HString::~HString Destructor

Destroys the current instance of the **HString** class.

## Syntax

```cpp
~HString() throw()  
```

# HString::Attach Method

Associates the specified **HString** object with the current **HString** object.

## Syntax

```cpp
void Attach(
       HSTRING hstr
       ) throw()  
```

### Parameters

*hstr*<br/>
An existing **HString** object.

# HString::CopyTo Method

Copies the current **HString** object to an HSTRING object.

## Syntax

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### Parameters

*str*<br/>
The HSTRING that receives the copy.

## Remarks

This method calls the [WindowsDuplicateString](https://msdn.microsoft.com/library/br224634.aspx) function.

# HString::Detach Method

Disassociates the specified **HString** object from its underlying value.

## Syntax

```cpp
HSTRING Detach() throw()  
```

## Return Value

The underlying **HString** value before the detach operation started.

# HString::Get Method

Retrieves the value of the underlying HSTRING handle.

## Syntax

```cpp
HSTRING Get() const throw()  
```

## Return Value

The value of the underlying HSTRING handle

# HString::GetAddressOf Method

Retrieves a pointer to the underlying HSTRING handle.

## Syntax

```cpp
HSTRING* GetAddressOf() throw()  
```

## Return Value

A pointer to the underlying HSTRING handle.

## Remarks

After this operation, the string value of the underlying HSTRING handle is destroyed.

# HString::HString Constructor

Initializes a new instance of the **HString** class.

## Syntax

```cpp
HString(HSTRING hstr = nullptr) throw();
HString(HString&& other) throw();
```

#### Parameters

*hstr*<br/>
An HSTRING handle.

*other*<br/>
An existing **HString** object.

## Remarks

The first constructor initializes a new **HString** object that is empty.

The second constructor initializes a new **HString** object to the value of the existing *other* parameter, and then destroys the *other* parameter.

# HString::IsValid Method

Indicates whether the current **HString** object is empty or not.

## Syntax

```cpp
bool IsValid() const throw()  
```

### Parameters

**true** if the current **HString** object is not empty; otherwise, **false**.

# HString::MakeReference Method

Creates an `HStringReference` object from a specified string parameter.

## Syntax

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

## Return Value

An `HStringReference` object whose value is the same as the specified *str* parameter.

# HString::Operator= Operator

Moves the value of another **HString** object to the current **HString** object.

## Syntax

```cpp
HString& operator=(HString&& other) throw()  
```

### Parameters

*other*<br/>
An existing **HString** object.

## Remarks

The value of the existing *other* object is copied to the current **HString** object, and then the *other* object is destroyed.

# HString::Operator== Operator

Indicates whether the two parameters are equal.

## Syntax

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
The first parameter to compare. *lhs* can be an **HString** or `HStringReference` object, or an HSTRING handle.

*rhs*<br/>
The second parameter to compare.*rhs* can be an **HString** or `HStringReference` object, or an HSTRING handle.

## Return Value

**true** if the *lhs* and *rhs* parameters are equal; otherwise, **false**.

# HString::Operator!= Operator

Indicates whether the two parameters are not equal.

## Syntax

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
The first parameter to compare. *lhs* can be an **HString** or `HStringReference` object, or an HSTRING handle.

*rhs*<br/>
The second parameter to compare.*rhs* can be an **HString** or `HStringReference` object, or an HSTRING handle.

## Return Value

**true** if the *lhs* and *rhs* parameters are not equal; otherwise, **false**.

# HString::Operator&lt; Operator

Indicates whether the first parameter is less than the second parameter.

## Syntax

```cpp
inline bool operator<(
    const HString& lhs,
    const HString& rhs) throw()  
```

### Parameters

*lhs*<br/>
The first parameter to compare. *lhs* can be a reference to an **HString**.

*rhs*<br/>
The second parameter to compare. *rhs* can be a reference to an **HString**.

## Return Value

**true** if the *lhs* parameter is less than the *rhs* parameter; otherwise, **false**.

# HString::Release Method

Deletes the underlying string value and intializes the current **HString** object to an empty value.

## Syntax

```cpp
void Release() throw()  
```

# HString::Set Method

Sets the value of the current **HString** object to the specified wide-character string or **HString** parameter.

## Syntax

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
The maximum length of the *str* parameter that is assigned to the current **HString** object.

*hstr*<br/>
An existing **HString** object.
