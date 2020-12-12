---
description: "Learn more about: Properties (C++/CX)"
title: "Properties (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: 64c7bc56-3191-4cd5-bdf4-476d07d285d5
---
# Properties (C++/CX)

Windows Runtime types expose public data as properties. Client code accesses the property like a public datamember. Internally, the property is implemented as a block that contains a get accessor method, a set accessor method, or both. By using the accessor methods, you can perform additional actions before or after you retrieve the value, for example, you could fire an event or perform validation checks.

### Remarks

The value of a property is contained in a private variable—known as the *backing store*—which is the same type as the property. A property can contain both a set accessor, which assigns a value to the backing store, and a get accessor that retrieves the value of the backing store. The property is read-only if it provides only a get accessor, write-only if it provides only a set accessor, and read/write (modifiable) if it provides both accessors.

A *trivial* property is a read/write property for which the compiler automatically implements the accessors and backing store. You don't have access to the compiler's implementation. However, you can declare a custom property and explicitly declare its accessors and backing store. Within an accessor, you can perform any logic that you require, such as validating the input to the set accessor, calculating a value from the property value, accessing a database, or firing an event when the property changes.

When a C++/CX ref class is instantiated, its memory is zero-initialized before its constructor is called; therefore all properties are assigned a default value of zero or nullptr at the point of declaration.

### Examples

The following code example shows how to declare and access a property. The first property, `Name`, is known as a *trivial* property because the compiler automatically generates a `set` accessor, `get` accessor, and a backing store.

The second property, `Doctor`, is a read-only property because it specifies a *property block* that explicitly declares only a `get` accessor. Because the property block is declared, you must explicitly declare a backing store; that is, the private String^ variable, `doctor_`. Typically, a read-only property just returns the value of the backing store. Only the class itself can set the value of the backing store, typically in the constructor.

The third property, `Quantity`, is a read-write property because it declares a property block that declares both a `set` accessor and a `get` accessor.

The `set` accessor performs a user-defined validity test on the assigned value. And unlike C#, here the name *value* is just the identifier for the parameter in the `set` accessor; it's not a keyword. If *value* isn't greater than zero, Platform::InvalidArgumentException is thrown. Otherwise, the backing store, `quantity_`, is updated with the assigned value.

Note that a property cannot be initialized in a member list. You can of course initialize backing store variables in a member list.

[!code-cpp[cx_properties#01](../cppcx/codesnippet/CPP/cx_properties/class1.h#01)]

## See also

[Type System](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
