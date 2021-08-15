---
description: "Learn more about: STL/CLR Containers"
title: "STL/CLR Containers"
ms.date: "09/18/2018"
ms.topic: "reference"
helpviewer_keywords: ["STL/CLR, containers", "containers, STL/CLR"]
ms.assetid: 34ca8031-2041-46b9-aed9-29082d1972ea
---
# STL/CLR Containers

The STL/CLR Library consists of containers that are similar to those found in the C++ Standard Library, but it runs within the managed environment of the .NET Framework. It is not kept up-to-date with the actual C++ Standard Library and is maintained for legacy support.

This document provides an overview of the containers in STL/CLR, such as the requirements for container elements, the types of elements that you can insert into the containers, and ownership issues with the elements in the containers. Where appropriate, differences between the native C++ Standard Library and STL/CLR are mentioned.

## Requirements for Container Elements

All elements inserted into STL/CLR containers must obey certain guidelines. For more information, see [Requirements for STL/CLR Container Elements](../dotnet/requirements-for-stl-clr-container-elements.md).

## Valid Container Elements

STL/CLR containers can hold one of two types of elements:

- Handles to reference types.

- Reference types.

- Unboxed value types.

You cannot insert boxed value types into any of the STL/CLR containers.

### Handles to Reference Types

You can insert a handle to a reference type into an STL/CLR container. A handle in C++ that targets the CLR is analogous to a pointer in native C++. For more information, see [Handle to Object Operator (^)](../extensions/handle-to-object-operator-hat-cpp-component-extensions.md).

#### Example

The following example shows how to insert a handle to an Employee object into a [cliext::set](../dotnet/set-stl-clr.md).

```cpp
// cliext_container_valid_reference_handle.cpp
// compile with: /clr

#include <cliext/set>

using namespace cliext;
using namespace System;

ref class Employee
{
public:
    // STL/CLR containers might require a public constructor, so it
    // is a good idea to define one.
    Employee() :
        name(nullptr),
        employeeNumber(0) { }

    // All STL/CLR containers require a public copy constructor.
    Employee(const Employee% orig) :
        name(orig.name),
        employeeNumber(orig.employeeNumber) { }

    // All STL/CLR containers require a public assignment operator.
    Employee% operator=(const Employee% orig)
    {
        if (this != %orig)
        {
            name = orig.name;
            employeeNumber = orig.employeeNumber;
        }

        return *this;
    }

    // All STL/CLR containers require a public destructor.
    ~Employee() { }

    // Associative containers such as maps and sets
    // require a comparison operator to be defined
    // to determine proper ordering.
    bool operator<(const Employee^ rhs)
    {
        return (employeeNumber < rhs->employeeNumber);
    }

    // The employee's name.
    property String^ Name
    {
        String^ get() { return name; }
        void set(String^ value) { name = value; }
    }

    // The employee's employee number.
    property int EmployeeNumber
    {
        int get() { return employeeNumber; }
        void set(int value) { employeeNumber = value; }
    }

private:
    String^ name;
    int employeeNumber;
};

int main()
{
    // Create a new employee object.
    Employee^ empl1419 = gcnew Employee();
    empl1419->Name = L"Darin Lockert";
    empl1419->EmployeeNumber = 1419;

    // Add the employee to the set of all employees.
    set<Employee^>^ emplSet = gcnew set<Employee^>();
    emplSet->insert(empl1419);

    // List all employees of the company.
    for each (Employee^ empl in emplSet)
    {
        Console::WriteLine("Employee Number {0}: {1}",
            empl->EmployeeNumber, empl->Name);
    }

    return 0;
}
```

### Reference Types

It is also possible to insert a reference type (rather than a handle to a reference type) into a STL/CLR container. The main difference here is that when a container of reference types is deleted, the destructor is called for all elements inside that container. In a container of handles to reference types, the destructors for these elements would not be called.

#### Example

The following example shows how to insert an Employee object into a `cliext::set`.

```cpp
// cliext_container_valid_reference.cpp
// compile with: /clr

#include <cliext/set>

using namespace cliext;
using namespace System;

ref class Employee
{
public:
    // STL/CLR containers might require a public constructor, so it
    // is a good idea to define one.
    Employee() :
        name(nullptr),
        employeeNumber(0) { }

    // All STL/CLR containers require a public copy constructor.
    Employee(const Employee% orig) :
        name(orig.name),
        employeeNumber(orig.employeeNumber) { }

    // All STL/CLR containers require a public assignment operator.
    Employee% operator=(const Employee% orig)
    {
        if (this != %orig)
        {
            name = orig.name;
            employeeNumber = orig.employeeNumber;
        }

        return *this;
    }

    // All STL/CLR containers require a public destructor.
    ~Employee() { }

    // Associative containers such as maps and sets
    // require a comparison operator to be defined
    // to determine proper ordering.
    bool operator<(const Employee^ rhs)
    {
        return (employeeNumber < rhs->employeeNumber);
    }

    // The employee's name.
    property String^ Name
    {
        String^ get() { return name; }
        void set(String^ value) { name = value; }
    }

    // The employee's employee number.
    property int EmployeeNumber
    {
        int get() { return employeeNumber; }
        void set(int value) { employeeNumber = value; }
    }

private:
    String^ name;
    int employeeNumber;
};

int main()
{
    // Create a new employee object.
    Employee empl1419;
    empl1419.Name = L"Darin Lockert";
    empl1419.EmployeeNumber = 1419;

    // Add the employee to the set of all employees.
    set<Employee>^ emplSet = gcnew set<Employee>();
    emplSet->insert(empl1419);

    // List all employees of the company.
    for each (Employee^ empl in emplSet)
    {
        Console::WriteLine("Employee Number {0}: {1}",
            empl->EmployeeNumber, empl->Name);
    }

    return 0;
}
```

### Unboxed Value Types

You can also insert an unboxed value type into an STL/CLR container. An unboxed value type is a value type that has not been *boxed* into a reference type.

A value type element can be one of the standard value types, such as an **`int`**, or it can be a user-defined value type, such as a **`value class`**. For more information, see [Classes and Structs](../extensions/classes-and-structs-cpp-component-extensions.md)

#### Example

The following example modifies the first example by making the Employee class a value type. This value type is then inserted into a `cliext::set` just as in the first example.

```cpp
// cliext_container_valid_valuetype.cpp
// compile with: /clr

#include <cliext/set>

using namespace cliext;
using namespace System;

value class Employee
{
public:
    // Associative containers such as maps and sets
    // require a comparison operator to be defined
    // to determine proper ordering.
    bool operator<(const Employee^ rhs)
    {
        return (employeeNumber < rhs->employeeNumber);
    }

    // The employee's name.
    property String^ Name
    {
        String^ get() { return name; }
        void set(String^ value) { name = value; }
    }

    // The employee's employee number.
    property int EmployeeNumber
    {
        int get() { return employeeNumber; }
        void set(int value) { employeeNumber = value; }
    }

private:
    String^ name;
    int employeeNumber;
};

int main()
{
    // Create a new employee object.
    Employee empl1419;
    empl1419.Name = L"Darin Lockert";
    empl1419.EmployeeNumber = 1419;

    // Add the employee to the set of all employees.
    set<Employee>^ emplSet = gcnew set<Employee>();
    emplSet->insert(empl1419);

    // List all employees of the company.
    for each (Employee empl in emplSet)
    {
        Console::WriteLine("Employee Number {0}: {1}",
            empl.EmployeeNumber, empl.Name);
    }

    return 0;
}
```

If you attempt to insert a handle to a value type into a container, [Compiler Error C3225](../error-messages/compiler-errors-2/compiler-error-c3225.md) is generated.

### Performance and Memory Implications

You must consider several factors when determining whether to use handles to reference types or value types as container elements. If you decide to use value types, remember that a copy of the element is made every time an element is inserted into the container. For small objects, this should not be a problem, but if the objects being inserted are large, performance might suffer. Also, if you are using value types, it is impossible to store one element in multiple containers at the same time because each container would have its own copy of the element.

If you decide to use handles to reference types instead, performance might increase because it is not necessary to make a copy of the element when it is inserted in the container. Also, unlike with value types, the same element can exist in multiple containers. However, if you decide to use handles, you must take care to ensure that the handle is valid and that the object it refers to has not been deleted elsewhere in the program.

## Ownership Issues with Containers

Containers in STL/CLR work on value semantics. Every time you insert an element into a container, a copy of that element is inserted. If you want to get reference-like semantics, you can insert a handle to an object rather than the object itself.

When you call the clear or erase method of a container of handle objects, the objects that the handles refer to are not freed from memory. You must either explicitly delete the object, or, because these objects reside on the managed heap, allow the garbage collector to free the memory once it determines that the object is no longer being used.

## See also

[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
