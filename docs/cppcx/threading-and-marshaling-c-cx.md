---
description: "Learn more about: Threading and Marshaling (C++/CX)"
title: "Threading and Marshaling (C++/CX)"
ms.date: "12/30/2016"
f1_keywords: ["C4451"]
helpviewer_keywords: ["threading issues, C++/CX", "agility, C++/CX", "C++/CX, threading issues"]
ms.assetid: 83e9ca1d-5107-4194-ae6f-e01bd928c614
---
# Threading and Marshaling (C++/CX)

In the vast majority of cases, instances of Windows Runtime classes, like standard C++ objects, can be accessed from any thread. Such classes are referred to as "agile". However, a small number of Windows Runtime classes that ship with Windows are non-agile, and must be consumed more like COM objects than standard C++ objects. You don't need to be a COM expert to use non-agile classes, but you do need to take into consideration the class's threading model and its marshaling behavior. This article provides background and guidance for those rare scenarios in which you need to consume an instance of a non-agile class.

## Threading model and marshaling behavior

A Windows Runtime class can support concurrent thread access in various ways, as indicated by two attributes that are applied to it:

- `ThreadingModel` attribute can have one of the values—STA, MTA, or Both, as defined by the `ThreadingModel` enumeration.

- `MarshallingBehavior` attribute can have one of the values—Agile, None, or Standard as defined by the `MarshallingType` enumeration.

The `ThreadingModel` attribute specifies where the class is loaded when activated: only in a user-interface thread (STA) context, only in a background thread (MTA) context, or in the context of the thread that creates the object (Both). The `MarshallingBehavior` attribute values refer to how the object behaves in the various threading contexts; in most cases, you don’t have to understand these values in detail.  Of the classes that are provided by the Windows API, about 90 percent have `ThreadingModel`=Both and `MarshallingType`=Agile. This means that they can handle low-level threading details transparently and efficiently.   When you use `ref new` to create an "agile" class, you can call methods on it from your main app thread or from one or more worker threads.  In other words, you can use an agile class—no matter whether it's provided by Windows or by a third party—from anywhere in your code. You don’t have to be concerned with the class’s threading model or marshaling behavior.

## Consuming Windows Runtime components

When you create a Universal Windows Platform app, you might interact with both agile and non-agile components. When you interact with non-agile components, you may encounter the following warning.

### Compiler warning C4451 when consuming non-agile classes

For various reasons, some classes can't be agile. If you are accessing instances of non-agile classes from both a user-interface thread and a background thread, then take extra care to ensure correct behavior at run time. The Microsoft C++ compiler issues warnings when you instantiate a non-agile run-time class in your app at global scope or declare a non-agile type as a class member in a ref class that itself is marked as agile.

Of the non-agile classes, the easiest to deal with are those that have `ThreadingModel`=Both and `MarshallingType`=Standard.  You can make these classes agile just by using the `Agile<T>` helper class.   The following example shows a declaration of a non-agile object of type `Windows::Security::Credentials::UI::CredentialPickerOptions^`, and the compiler warning that's issued as a result.

```

ref class MyOptions
    {
    public:
        property Windows::Security::Credentials::UI::CredentialPickerOptions^ Options

        {
            Windows::Security::Credentials::UI::CredentialPickerOptions^ get()
            {
                return _myOptions;
            }
        }
    private:
        Windows::Security::Credentials::UI::CredentialPickerOptions^ _myOptions;
    };
```

Here's the warning that's issued:

> `Warning 1 warning C4451: 'Platform::Agile<T>::_object' : Usage of ref class 'Windows::Security::Credentials::UI::CredentialPickerOptions' inside this context can lead to invalid marshaling of object across contexts. Consider using 'Platform::Agile<Windows::Security::Credentials::UI::CredentialPickerOptions>' instead`

When you add a reference—at member scope or global scope—to an object that has a marshaling behavior of "Standard", the compiler issues a warning that advises you to wrap the type in `Platform::Agile<T>`: `Consider using 'Platform::Agile<Windows::Security::Credentials::UI::CredentialPickerOptions>' instead` If you use `Agile<T>`, you can consume the class like you can any other agile class. Use `Platform::Agile<T>` in these circumstances:

- The non-agile variable is declared at global scope.

- The non-agile variable is declared at class scope and there is a chance that consuming code might smuggle the pointer—that is, use it in a different apartment without correct marshaling.

If neither of those conditions apply, then you can mark the containing class as non-agile. In other words, you should directly hold non-agile objects only in non-agile classes, and hold non-agile objects via Platform::Agile\<T> in agile classes.

The following example shows how to use `Agile<T>` so that you can safely ignore the warning.

```

#include <agile.h>
ref class MyOptions
    {
    public:
        property Windows::Security::Credentials::UI::CredentialPickerOptions^ Options

        {
            Windows::Security::Credentials::UI::CredentialPickerOptions^ get()
            {
                return m_myOptions.Get();
            }
        }
    private:
        Platform::Agile<Windows::Security::Credentials::UI::CredentialPickerOptions^> m_myOptions;

    };
```

Notice that `Agile` cannot be passed as a return value or parameter in a ref class. The `Agile<T>::Get()` method returns a handle-to-object (^) that you can pass across the application binary interface (ABI) in a public method or property.

When you create a reference to an in-proc Windows Runtime class that has a marshaling behavior of "None", the compiler issues warning C4451 but doesn't suggest that you consider using `Platform::Agile<T>`.  The compiler can't offer any help beyond this warning, so it's your responsibility to use the class correctly and ensure that your code calls STA components only from the user-interface thread, and MTA components only from a background thread.

## Authoring agile Windows Runtime components

When you define a ref class in C++/CX, it's agile by default—that is, it has `ThreadingModel`=Both and `MarshallingType`=Agile.  If you're using the Windows Runtime C++ Template Library, you can make your class agile by deriving from `FtmBase`, which uses the `FreeThreadedMarshaller`.  If you author a class that has `ThreadingModel`=Both or `ThreadingModel`=MTA, make sure that the class is thread-safe.

You can modify the threading model and marshaling behavior of a ref class. However, if you make changes that render the class non-agile, you must understand the implications that are associated with those changes.

The following example shows how to apply `MarshalingBehavior` and `ThreadingModel` attributes to a runtime class in a Windows Runtime class library. When an app uses the DLL and uses the `ref new` keyword to activate a `MySTAClass` class object, the object is activated in a single-threaded apartment and doesn't support marshaling.

```
using namespace Windows::Foundation::Metadata;
using namespace Platform;

[Threading(ThreadingModel::STA)]
[MarshalingBehavior(MarshalingType::None)]
public ref class MySTAClass
{
};
```

An unsealed class must have marshaling and threading attribute settings so that the compiler can verify that derived classes have the same value for these attributes. If the class doesn't have the settings set explicitly, the compiler generates an error and fails to compile. Any class that's derived from an unsealedclass generates a compiler error in either of these cases:

- The `ThreadingModel` and `MarshallingBehavior` attributes are not defined in the derived class.

- The values of the `ThreadingModel` and `MarshallingBehavior` attributes in the derived class don't match those in the base class.

The threading and marshaling information that's required by a third-party Windows Runtime component is specified in the app manifest registration information for the component. We recommend that you make all of your Windows Runtime components agile. This ensures that client code can call your component from any thread in the app, and improves the performance of those calls because they are direct calls that have no marshaling. If you author your class in this way, then client code doesn't have to use `Platform::Agile<T>` to consume your class.

## See also

[ThreadingModel](/uwp/api/windows.foundation.metadata.threadingmodel)<br/>
[MarshallingBehavior](/uwp/api/windows.foundation.metadata.marshalingbehaviorattribute)
