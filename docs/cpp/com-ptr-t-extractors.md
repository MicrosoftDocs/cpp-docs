---
title: "_com_ptr_t Extractors"
ms.date: "11/04/2016"
f1_keywords: ["_com_ptr_t::operatorInterface&", "_com_ptr_t::operatorbool", "_com_ptr_t::operator->", "_com_ptr_t::operator*"]
helpviewer_keywords: ["operator Interface& [C++]", "* operator [C++], with specific objects", "operator& [C++]", "operator* [C++]", "-> operator [C++], with specific objects", "& operator [C++], with specific objects", "operator Interface* [C++]", "operator * [C++]", "operator->", "operator bool", "extractors, _com_ptr_t class", "extractors [C++]"]
ms.assetid: 194b9e0e-123c-49ff-a187-0a7fcd68145a
---
# _com_ptr_t Extractors

**Microsoft Specific**

Extract the encapsulated COM interface pointer.

## Syntax

```
operator Interface*( ) const throw( );
operator Interface&( ) const;
Interface& operator*( ) const;
Interface* operator->( ) const;
Interface** operator&( ) throw( );
operator bool( ) const throw( );
```

## Remarks

- **operator Interface**<strong>\*</strong> Returns the encapsulated interface pointer, which may be NULL.

- **operator Interface&** Returns a reference to the encapsulated interface pointer, and issues an error if the pointer is NULL.

- **operator**<strong>\*</strong> Allows a smart pointer object to act as though it were the actual encapsulated interface when dereferenced.

- **operator->** Allows a smart pointer object to act as though it were the actual encapsulated interface when dereferenced.

- **operator&** Releases any encapsulated interface pointer, replacing it with NULL, and returns the address of the encapsulated pointer. This allows the smart pointer to be passed by address to a function that has an *out* parameter through which it returns an interface pointer.

- **operator bool** Allows a smart pointer object to be used in a conditional expression. This operator returns TRUE if the pointer is not NULL.

**END Microsoft Specific**

## See also

[_com_ptr_t Class](../cpp/com-ptr-t-class.md)
