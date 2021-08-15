---
description: "Learn more about: Value classes and structs (C++/CX)"
title: "Value classes and structs (C++/CX)"
ms.date: "12/30/2016"
helpviewer_keywords: ["value struct", "value class"]
ms.assetid: 262a0992-9721-4c02-8297-efc07d90e5a4
---
# Value classes and structs (C++/CX)

A *value struct* or *value class* is a Windows Runtime-compatible POD ("plain old data structure"). It has a fixed size and consists of fields only; unlike a ref class, it has no properties.

The following examples show how to declare and initialize value structs.

```

// in mainpage.xaml.h:
    value struct TestStruct
    {
        Platform::String^ str;
        int i;
    };

    value struct TestStruct2
    {
        TestStruct ts;
        Platform::String^ str;
        int i;
    };

// in mainpage.cpp:
    // Initialize a value struct with an int and String
    TestStruct ts = {"I am a TestStruct", 1};

    // Initialize a value struct that contains
    // another value struct, an int and a String
    TestStruct2 ts2 = {{"I am a TestStruct", 1}, "I am a TestStruct2", 2};

    // Initialize value struct members individually.
    TestStruct ts3;
    ts3.i = 108;
    ts3.str = "Another way to init a value struct.";
```

When a variable of a value type is assigned to another variable, the value is copied, so that each of the two variables has its own copy of the data. A *value struct* is a fixed-size structure that contains only public data fields and is declared by using the **`value struct`** keyword.

A *value class* is just like a **`value struct`** except that its fields must be explicitly given public accessibility. It's declared by using the **`value class`** keyword.

A value struct or value class can contain as fields only fundamental numeric types, enum classes, `Platform::String^`, or [Platform::IBox \<T>^](../cppcx/platform-ibox-interface.md) where T is a numeric type or enum class or value class or struct. An `IBox<T>^` field can have a value of **`nullptr`**—this is how C++ implements the concept of *nullable value types*.

A value class or value struct that contains a `Platform::String^` or `IBox<T>^` type as a member is not `memcpy`-able.

Because all members of a **`value class`** or **`value struct`** are public and are emitted into metadata, standard C++ types are not allowed as members. This is different from ref classes, which may contain **`private`** or **`internal`** standard C++ types..

The following code fragment declares the `Coordinates` and `City` types as value structs. Notice that one of the `City` data members is a `GeoCoordinates` type. A **`value struct`** can contain other value structs as members.

[!code-cpp[cx_classes#07](../cppcx/codesnippet/CPP/classesstructs/class1.h#07)]

## Parameter passing for value types

If you have a value type as a function or method parameter, it is normally passed by value. For larger objects, this can cause a performance problem. In Visual Studio 2013 and earlier, value types in C++/CX were always passed by value. In Visual Studio 2015 and later, you can pass value types by reference or by value.

To declare a parameter that passes a value type by value, use code like the following:

```cpp
void Method1(MyValueType obj);
```

To declare a parameter that passes a value type by reference, use the reference symbol (&), as in the following:

```cpp
void Method2(MyValueType& obj);
```

The type inside Method2 is a reference to MyValueType and works the same way as a reference type in standard C++.

When you call Method1 from another language, like C#, you do not need to use the `ref` or `out` keyword. When you call Method2, use the `ref` keyword.

```
Method2(ref obj);
```

You can also use a pointer symbol (*) to pass a value type by reference. The behavior with respect to callers in other languages is the same (callers in C# use the `ref` keyword), but in the method, the type is a pointer to the value type.

## Nullable value types

As mentioned earlier, a value class or value struct can have a field of type [Platform::IBox\<T>^](../cppcx/platform-ibox-interface.md)—for example, `IBox<int>^`. Such a field can have any numeric value that is valid for the **`int`** type, or it can have a value of **`nullptr`**. You can pass a nullable field as an argument to a method whose parameter is declared as optional, or anywhere else that a value type is not required to have a value.

The following example shows how to initialize a struct that has a nullable field.

```
public value struct Student
{
    Platform::String^ Name;
    int EnrollmentYear;
    Platform::IBox<int>^ GraduationYear; // Null if not yet graduated.
};
//To create a Student struct, one must populate the nullable type.
MainPage::MainPage()
{
    InitializeComponent();

    Student A;
    A.Name = "Alice";
    A.EnrollmentYear = 2008;
    A.GraduationYear = ref new Platform::Box<int>(2012);

    Student B;
    B.Name = "Bob";
    B.EnrollmentYear = 2011;
    B.GraduationYear = nullptr;

    IsCurrentlyEnrolled(A);
    IsCurrentlyEnrolled(B);
}
bool MainPage::IsCurrentlyEnrolled(Student s)
{
    if (s.GraduationYear == nullptr)
    {
        return true;
    }
    return false;
}
```

A value struct itself may be made nullable in the same way, as shown here:

```

public value struct MyStruct
{
public:
    int i;
    Platform::String^ s;
};

public ref class MyClass sealed
{
public:
    property Platform::IBox<MyStruct>^ myNullableStruct;
};
```

## See also

[Type System (C++/CX)](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)<br/>
[Ref classes and structs (C++/CX)](../cppcx/ref-classes-and-structs-c-cx.md)
