---
description: "Learn more about: messages Class"
title: "messages Class"
ms.date: "11/04/2016"
f1_keywords: ["xlocmes/std::messages", "xlocmes/std::messages::char_type", "xlocmes/std::messages::string_type", "xlocmes/std::messages::close", "xlocmes/std::messages::do_close", "xlocmes/std::messages::do_get", "xlocmes/std::messages::do_open", "xlocmes/std::messages::get", "xlocmes/std::messages::open"]
helpviewer_keywords: ["std::messages [C++]", "std::messages [C++], char_type", "std::messages [C++], string_type", "std::messages [C++], close", "std::messages [C++], do_close", "std::messages [C++], do_get", "std::messages [C++], do_open", "std::messages [C++], get", "std::messages [C++], open"]
ms.assetid: c4c71f40-4f24-48ab-9f7c-daccd8d5bd83
---
# messages Class

The class template describes an object that can serve as a locale facet to retrieve localized messages from a catalog of internationalized messages for a given locale.

Currently, while the messages class is implemented, there are no messages.

## Syntax

```cpp
template <class CharType>
class messages : public messages_base;
```

### Parameters

*CharType*\
The type used within a program to encode characters in a locale.

## Remarks

As with any locale facet, the static object ID has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in **id.**

This facet basically opens a catalog of messages defined in the base class messages_base, retrieves the information required, and closes the catalog.

### Constructors

|Constructor|Description|
|-|-|
|[messages](#messages)|The message facet constructor function.|

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|A character type that is used display messages.|
|[string_type](#string_type)|A type that describes a string of type `basic_string` containing characters of type `CharType`.|

### Member functions

|Member function|Description|
|-|-|
|[close](#close)|Closes the message catalog.|
|[do_close](#do_close)|A virtual function called to lose the message catalog.|
|[do_get](#do_get)|A virtual function called to retrieve the message catalog.|
|[do_open](#do_open)|A virtual function called to open the message catalog.|
|[get](#get)|Retrieves the message catalog.|
|[open](#open)|Opens the message catalog.|

## Requirements

**Header:** \<locale>

**Namespace:** std

## <a name="char_type"></a> messages::char_type

A character type that is used display messages.

```cpp
typedef CharType char_type;
```

### Remarks

The type is a synonym for the template parameter **CharType**.

## <a name="close"></a> messages::close

Closes the message catalog.

```cpp
void close(catalog _Catval) const;
```

### Parameters

*_Catval*\
The catalog to be closed.

### Remarks

The member function calls [do_close](#do_close)(_ *Catval*).

## <a name="do_close"></a> messages::do_close

A virtual function called to lose the message catalog.

```cpp
virtual void do_close(catalog _Catval) const;
```

### Parameters

*_Catval*\
The catalog to be closed.

### Remarks

The protected member function closes the message catalog *_Catval*, which must have been opened by an earlier call to [do_open](#do_open).

*_Catval* must be obtained from a previously opened catalog that is not closed.

### Example

See the example for [close](#close), which calls `do_close`.

## <a name="do_get"></a> messages::do_get

A virtual function called to retrieve the message catalog.

```cpp
virtual string_type do_get(
    catalog _Catval,
    int _Set,
    int _Message,
    const string_type& _Dfault) const;
```

### Parameters

*_Catval*\
The identification value specifying the message catalog to be searched.

*_Set*\
The first identified used to locate a message in a message catalog.

*_Message*\
The second identified used to locate a message in a message catalog.

*_Dfault*\
The string to be returned on failure.

### Return Value

It returns a copy of *_Dfault* on failure. Otherwise, it returns a copy of the specified message sequence.

### Remarks

The protected member function tries to obtain a message sequence from the message catalog *_Catval*. It may make use of *_Set*, *_Message*, and *_Dfault* in doing so.

### Example

See the example for [get](#get), which calls `do_get`.

## <a name="do_open"></a> messages::do_open

A virtual function called to open the message catalog.

```cpp
virtual catalog do_open(
    const string& _Catname,
    const locale& _Loc) const;
```

### Parameters

*_Catname*\
The name of the catalog to be searched.

*_Loc*\
The locale being searched for in the catalog.

### Return Value

It returns a value that compares less than zero on failure. Otherwise, the returned value can be used as the first argument on a later call to [get](#get).

### Remarks

The protected member function tries to open a message catalog whose name is *_Catname*. It may make use of the locale *_Loc* in doing so

The return value should be used as the argument on a later call to [close](#close).

### Example

See the example for [open](#open), which calls `do_open`.

## <a name="get"></a> messages::get

Retrieves the message catalog.

```cpp
string_type get(
    catalog _CatVal,
    int _Set,
    int _Message,
    const string_type& _Dfault) const;
```

### Parameters

*_Catval*\
The identification value specifying the message catalog to be searched.

*_Set*\
The first identified used to locate a message in a message catalog.

*_Message*\
The second identified used to locate a message in a message catalog.

*_Dfault*\
The string to be returned on failure.

### Return Value

It returns a copy of *_Dfault* on failure. Otherwise, it returns a copy of the specified message sequence.

### Remarks

The member function returns [do_get](#do_get)( `_Catval`, `_Set`, `_Message`, `_Dfault`).

## <a name="messages"></a> messages::messages

The message facet constructor function.

```cpp
explicit messages(
    size_t _Refs = 0);

protected: messages(
    const char* _Locname,
    size_t _Refs = 0);
```

### Parameters

*_Refs*\
Integer value used to specify the type of memory management for the object.

*_Locname*\
The name of the locale.

### Remarks

The possible values for the *_Refs* parameter and their significance are:

- 0: The lifetime of the object is managed by the locales that contain it.

- 1: The lifetime of the object must be manually managed.

- \> 1: These values are not defined.

No direct examples are possible, because the destructor is protected.

The constructor initializes its base object with **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).

## <a name="open"></a> messages::open

Opens the message catalog.

```cpp
catalog open(
    const string& _Catname,
    const locale& _Loc) const;
```

### Parameters

*_Catname*\
The name of the catalog to be searched.

*_Loc*\
The locale being searched for in the catalog.

### Return Value

It returns a value that compares less than zero on failure. Otherwise, the returned value can be used as the first argument on a later call to [get](#get).

### Remarks

The member function returns [do_open](#do_open)( `_Catname`, `_Loc`).

## <a name="string_type"></a> messages::string_type

A type that describes a string of type `basic_string` containing characters of type `CharType`.

```cpp
typedef basic_string<CharType, Traits, Allocator> string_type;
```

### Remarks

The type describes a specialization of class template [basic_string](../standard-library/basic-string-class.md) whose objects can store copies of the message sequences.

## See also

[\<locale>](../standard-library/locale.md)\
[messages_base Class](../standard-library/messages-base-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
