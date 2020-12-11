---
description: "Learn more about: _com_ptr_t Relational Operators"
title: "_com_ptr_t Relational Operators"
ms.date: "11/04/2016"
f1_keywords: ["_com_ptr_t::operator>", "_com_ptr_t::operator>=", "_com_ptr_t::operator<=", "_com_ptr_t::operator==", "_com_ptr_t::operator!=", "_com_ptr_t::operator<"]
helpviewer_keywords: [">= operator [C++], comparing specific objects", "!= operator", "operator > [C++], pointers", "operator>= [C++], pointers", "operator < [C++], pointers", "operator!= [C++], relational operators", "< operator [C++], comparing specific objects", "operator== [C++], pointers", "operator == [C++], pointers", "<= operator [C++], with specific objects", "relational operators [C++], _com_ptr_t class", "operator >= [C++], pointers", "operator != [C++], relational operators", "operator <= [C++], pointers", "> operator [C++], comparing specific objects", "operator<= [C++], pointers", "operator< [C++], pointers", "== operator [C++], with specific Visual C++ objects"]
ms.assetid: 5ae4028c-33ee-485d-bbda-88d2604d6d4b
---
# _com_ptr_t Relational Operators

**Microsoft Specific**

Compare the smart pointer object to another smart pointer, raw interface pointer, or NULL.

## Syntax

```
template<typename _OtherIID>
bool operator==( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID>
bool operator==( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType>
bool operator==( _InterfaceType* p );

template<>
bool operator==( Interface* p );

template<>
bool operator==( const _com_ptr_t& p ) throw();

template<>
bool operator==( _com_ptr_t& p ) throw();

bool operator==( Int null );

template<typename _OtherIID>
bool operator!=( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID>
bool operator!=( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType>
bool operator!=( _InterfaceType* p );

bool operator!=( Int null );

template<typename _OtherIID>
bool operator<( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID>
bool operator<( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType>
bool operator<( _InterfaceType* p );

template<typename _OtherIID>
bool operator>( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID>
bool operator>(_com_ptr_t< _OtherIID>& p );

template<typename _InterfaceType>
bool operator>( _InterfaceType* p );

template<typename _OtherIID>
bool operator<=( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID>
bool operator<=( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType>
bool operator<=( _InterfaceType* p );

template<typename _OtherIID>
bool operator>=( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID>
bool operator>=( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType>
bool operator>=( _InterfaceType* p );
```

## Remarks

Compares a smart pointer object to another smart pointer, raw interface pointer, or NULL. Except for the NULL pointer tests, these operators first query both pointers for `IUnknown`, and compare the results.

**END Microsoft Specific**

## See also

[_com_ptr_t Class](../cpp/com-ptr-t-class.md)
