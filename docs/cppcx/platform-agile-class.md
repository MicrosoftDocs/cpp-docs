---
description: "Learn more about: Platform::Agile Class"
title: "Platform::Agile Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["AGILE/Platform::Platform", "AGILE/Platform::Platform::Agile::Agile", "AGILE/Platform::Platform::Agile::Get", "AGILE/Platform::Platform::Agile::GetAddressOf", "AGILE/Platform::Platform::Agile::GetAddressOfForInOut", "AGILE/Platform::Platform::Agile::Release"]
helpviewer_keywords: ["Platform::Agile"]
ms.assetid: e34459a9-c429-4c79-97fd-030c43ca4155
---
# Platform::Agile Class

Represents an object that has a MashalingBehavior=Standard as an agile object, which greatly reduces the chances for runtime threading exceptions. The `Agile<T>` enables the non-agile object to call, or be called from, the same or a different thread. For more information, see [Threading and Marshaling](../cppcx/threading-and-marshaling-c-cx.md).

## Syntax

```cpp
template <typename T>
class Agile;
```

#### Parameters

*T*<br/>
The typename for the non-agile class.

### Remarks

Most of the classes in the Windows Runtime are agile. An agile object can call, or be called by, an in-proc or out-of-proc object in the same or a different thread. If an object is not agile, wrap the non-agile object in a `Agile<T>` object, which is agile. Then the `Agile<T>` object can be marshaled, and the underlying non-agile object can be used.

The `Agile<T>` class is a native, standard C++ class and requires `agile.h`. It represents the non-agile object and the Agile object's *context*. The context specifies an agile object's threading model and marshaling behavior. The operating system uses the context to determine how to marshal an object.

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[Agile::Agile](#ctor)|Initializes a new instance of the Agile class.|
|[Agile::~Agile Destructor](#dtor)|Destroys the current instance of the Agile class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[Agile::Get](#get)|Returns a handle to the object that is represented by the current Agile object.|
|[Agile::GetAddressOf](#getaddressof)|Reinitializes the current Agile object, and then returns the address of a handle to an object of type `T`.|
|[Agile::GetAddressOfForInOut](#getaddressofforinout)|Returns the address of a handle to the object represented by the current Agile object.|
|[Agile::Release](#release)|Discards the current Agile object's underlying object and context.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[Agile::operator->](#operator-arrow)|Retrieves a handle to the object represented by the current Agile object.|
|[Agile::operator=](#operator-assign)|Assigns the specified value to the current Agile object.|

## Inheritance Hierarchy

`Object`

`Agile`

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Header:** agile.h

## <a name="ctor"></a> Agile::Agile Constructor

Initializes a new instance of the Agile class.

### Syntax

```cpp
Agile();
Agile(T^ object);
Agile(const Agile<T>& object);
Agile(Agile<T>&& object);
```

#### Parameters

*T*<br/>
A type specified by the template typename parameter.

*object*<br/>
In the second version of this constructor, an object used to initialize a new Agile instance. In the third version, the object that is copied to the new Agile instance. In the fourth version, the object that is moved to the new Agile instance.

### Remarks

The first version of this constructor is the default constructor. The second version initializes new Agile instance class from the object specified by the `object` parameter. The third version is the copy constructor. The fourth version is the move constructor. This constructor cannot throw exceptions.

## <a name="dtor"></a> Agile::~Agile Destructor

Destroys the current instance of the Agile class.

### Syntax

```cpp
~Agile();
```

### Remarks

This destructor also releases the object represented by the current Agile object.

## <a name="get"></a> Agile::Get Method

Returns a handle to the object that is represented by the current Agile object.

### Syntax

```cpp
T^ Get() const;
```

### Return Value

A handle to the object that is represented by the current Agile object.

The type of the return value is actually an undisclosed internal type. A convenient way to hold the return value is to assign it to a variable that is declared with the **`auto`** type deduction keyword. For example, `auto x = myAgileTvariable->Get();`.

## <a name="getaddressof"></a> Agile::GetAddressOf Method

Reinitializes the current Agile object, and then returns the address of a handle to an object of type `T`.

### Syntax

```cpp
T^* GetAddressOf() throw();
```

#### Parameters

*T*<br/>
A type specified by the template typename parameter.

### Return Value

The address of a handle to an object of type `T`.

### Remarks

This operation releases the current representation of a object of type `T`, if any; reinitializes the Agile object's data members; acquires the current threading context; and then returns the address of a handle-to-object variable that can represent a non-agile object. To cause an Agile class instance to represent an object, use the assignment operator ([Agile::operator=](#operator-assign)) to assign the object to the Agile class instance.

## <a name="getaddressofforinout"></a> Agile::GetAddressOfForInOut Method

Returns the address of a handle to the object represented by the current Agile object.

### Syntax

```cpp
T^* GetAddressOfForInOut()  throw();
```

#### Parameters

*T*<br/>
A type specified by the template typename parameter.

### Return Value

The address of a handle to the object represented by the current Agile object.

### Remarks

This operation acquires the current threading context and then returns the address of a handle to the underlying the object.

## <a name="release"></a> Agile::Release Method

Discards the current Agile object's underlying object and context.

### Syntax

```cpp
void Release() throw();
```

### Remarks

The current Agile object's underlying object and context are discarded, if they exist, and then the value of the Agile object is set to null.

## <a name="operator-arrow"></a> Agile::operator-&gt; Operator

Retrieves a handle to the object represented by the current Agile object.

### Syntax

```cpp
T^ operator->() const throw();
```

### Return Value

A handle to the object represented by the current Agile object.

This operator actually returns an undisclosed internal type. A convenient way to hold the return value is to assign it to a variable that is declared with the **`auto`** type deduction keyword.

## <a name="operator-assign"></a> Agile::operator= Operator

Assigns the specified object to the current Agile object.

### Syntax

```cpp
Agile<T> operator=( T^ object ) throw();
Agile<T> operator=( const Agile<T>& object ) throw();
Agile<T> operator=( Agile<T>&& object ) throw();
T^ operator=( IUnknown* lp ) throw();
```

#### Parameters

*T*<br/>
The type specified by the template typename.

*object*<br/>
The object or handle to an object that is copied or moved to the current Agile object.

*lp*<br/>
The IUnknown interface pointer of a object.

### Return Value

A handle to an object of type `T`

### Remarks

The first version of the assignment operator copies a handle to a reference type to the current Agile object. The second version copies a reference to an Agile type to the current Agile object. The third version moves an Agile type to the current Agile object. The fourth version moves a pointer to a COM object to the current Agile object.

The assignment operation automatically persists the context of the current Agile object.

## See also

[Platform Namespace](platform-namespace-c-cx.md)
