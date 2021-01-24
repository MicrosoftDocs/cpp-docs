---
description: "Learn more about: Delegates (C++/CX)"
title: "Delegates (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: 3175bf1c-86d8-4eda-8d8f-c5b6753d8e38
---
# Delegates (C++/CX)

The **`delegate`** keyword is used to declare a reference type that is the Windows Runtime equivalent of a function object in standard C++. A delegate declaration similar to a function signature; it specifies the return type and parameter types that its wrapped function must have. This is a user-defined delegate declaration:

```cpp
public delegate void PrimeFoundHandler(int result);
```

Delegates are most commonly used in conjunction with events. An event has a delegate type, in much the same way that a class can have an interface type. The delegate represents a contract that event handlers much fulfill. Here’s an event class member whose type is the previously-defined delegate:

```cpp
event PrimeFoundHandler^ primeFoundEvent;
```

When declaring delegates that will be exposed to clients across the Windows Runtime application binary interface, use [Windows::Foundation::TypedEventHandler\<TSender, TResult>](/uwp/api/windows.foundation.typedeventhandler-2). This delegate has predefined proxy and stub binaries that enable it to be consumed by Javascript clients.

## Consuming delegates

When you create a Universal Windows Platform app, you often work with a delegate as the type of an event that a Windows Runtime class exposes. To subscribe to an event, create an instance of its delegate type by specifying a function—or lambda—that matches the delegate signature. Then use the `+=` operator to pass the delegate object to the event member on the class. This is known as subscribing to the event. When the class instance "fires" the event, your function is called, along with any other handlers that were added by your object or other objects.

> [!TIP]
> Visual Studio does a lot of work for you when you create an event handler. For example, if you specify an event handler in XAML markup, a tool tip appears. If you choose the tool tip, Visual Studio automatically creates the event handler method and associates it with the event on the publishing class.

The following example shows the basic pattern. `Windows::Foundation::TypedEventHandler` is the delegate type. The handler function is created by using a named function.

In app.h:

[!code-cpp[cx_delegates#120](../cppcx/codesnippet/CPP/delegatesevents/class1.h#120)]

In app.cpp:

[!code-cpp[cx_delegates#121](../cppcx/codesnippet/CPP/delegatesevents/class1.cpp#121)]

> [!WARNING]
> In general, for an event handler, it's better to use a named function instead of a lambda unless you take great care to avoid circular references. A named function captures the "this" pointer by weak reference, but a lambda captures it by strong reference and creates a circular reference. For more information, see [Weak references and breaking cycles](../cppcx/weak-references-and-breaking-cycles-c-cx.md).

By convention, event-handler delegate names that are defined by the Windows Runtime have the form *EventHandler—for example, RoutedEventHandler, SizeChangedEventHandler, or SuspendingEventHandler. Also by convention, event handler delegates have two parameters and return void. In a delegate that doesn't have type parameters, the first parameter is of type [Platform::Object^](../cppcx/platform-object-class.md); it holds a reference to the sender, which is the object that fired the event. You have to cast back to the original type before you use the argument in the event handler method. In an event handler delegate that has type parameters, the first type parameter specifies the type of the sender, and the second parameter is a handle to a ref class that holds information about the event. By convention, that class is named \*EventArgs. For example, a RoutedEventHandler delegate has a second parameter of type RoutedEventArgs^, and DragEventHander has a second parameter of type DragEventArgs^.

By convention, delegates that wrap the code that executes when an asynchronous operation completes are named *CompletedHandler. These delegates are defined as properties on the class, not as events. Therefore, you don't use the `+=` operator to subscribe to them; you just assign a delegate object to the property.

> [!TIP]
> C++ IntelliSense doesn't show the full delegate signature; therefore, it doesn't help you determine the specific type of the EventArgs parameter. To find the type, you can go to the **Object Browser** and look at the `Invoke` method for the delegate.

## Creating custom delegates

You can define your own delegates, to define event handlers or to enable consumers to pass in custom functionality to your Windows Runtime component. Like any other Windows Runtime type, a public delegate cannot be declared as generic.

### Declaration

The declaration of a delegate resembles a function declaration except that the delegate is a type. Typically, you declare a delegate at namespace scope, although you can also nest a delegate declaration in a class declaration. The following delegate encapsulates any function that takes a `ContactInfo^` as input and returns a `Platform::String^`.

[!code-cpp[cx_delegates#111](../cppcx/codesnippet/CPP/delegatesevents/class1.h#111)]

After you declare a delegate type, you can declare class members of that type or methods that take objects of that type as parameters. A method or function can also return a delegate type. In the following example, the `ToCustomString` method takes the delegate as an input parameter. The method enables client code to provide a custom function that constructs a string from some or all of the public properties of a `ContactInfo` object.

[!code-cpp[Cx_delegates#112](../cppcx/codesnippet/CPP/delegatesevents/class1.h#112)]

> [!NOTE]
> You use the "^" symbol when you refer to the delegate type, just as you do with any Windows Runtime reference type.

An event declaration always has a delegate type. This example shows a typical delegate type signature in the Windows Runtime:

[!code-cpp[cx_delegates#122](../cppcx/codesnippet/CPP/delegatesevents/class1.h#122)]

The `Click` event in the `Windows:: UI::Xaml::Controls::Primitives::ButtonBase` class is of type `RoutedEventHandler`. For more information, see [Events](../cppcx/events-c-cx.md).

Client code first constructs the delegate instance by using `ref new` and providing a lambda that's compatible with the delegate signature and defines the custom behavior.

[!code-cpp[Cx_delegates#113](../cppcx/codesnippet/CPP/delegatesevents/class1.cpp#113)]

It then calls the member function and passes the delegate. Assume that `ci` is a `ContactInfo^` instance and `textBlock` is a XAML `TextBlock^`.

[!code-cpp[Cx_delegates#114](../cppcx/codesnippet/CPP/delegatesevents/class1.cpp#114)]

In the next example, a client app passes a custom delegate to a public method in a Windows Runtime component that executes the delegate against each item in a `Vector`:

[!code-cpp[Cx_delegates#118](../cppcx/codesnippet/CPP/clientapp/mainpage.xaml.cpp#118)]

[!code-cpp[Cx_delegates#119](../cppcx/codesnippet/CPP/delegatesevents/class1.cpp#119)]

### Construction

You can construct a delegate from any of these objects:

- lambda

- static function

- pointer-to-member

- std::function

The following example shows how to construct a delegate from each of these objects. You consume the delegate in exactly the same way regardless of the type of object that's used to construct it.

[!code-cpp[Cx_delegates#115](../cppcx/codesnippet/CPP/delegatesevents/class1.cpp#115)]

> [!WARNING]
> If you use a lambda that captures the "this" pointer, be sure to use the `-=` operator to explicitly un-register from the event before you exit the lambda. For more information, see [Events](../cppcx/events-c-cx.md).

### Generic delegates

Generic delegates in C++/CX have restrictions similar to declarations of generic classes. They cannot be declared as public. You can declare a private or internal generic delegate and consume it from C++, but .NET or JavaScript clients can’t consume it because it is not emitted into the .winmd metadata. This example declares a generic delegate that can only be consumed by C++:

[!code-cpp[Cx_delegates#116](../cppcx/codesnippet/CPP/delegatesevents/class1.h#116)]

The next example declares a specialized instance of the delegate inside a class definition:

[!code-cpp[Cx_delegates#117](../cppcx/codesnippet/CPP/delegatesevents/class1.h#117)]

## Delegates and threads

A delegate, just like a function object, contains code that will execute at some time in the future. If the code that creates and passes the delegate, and the function that accepts and executes the delegate, are running on the same thread, then things are relatively simple. If that thread is the UI thread, then the delegate can directly manipulate user interface objects such as XAML controls.

If a client app loads a Windows Runtime component that runs in a threaded apartment, and provides a delegate to that component, then by default the delegate is invoked directly on the STA thread. Most Windows Runtime components can run in either STA or MTA.

If the code that executes the delegate is running on a different thread—for example, within the context of a concurrency::task object—then you are responsible for synchronizing access to shared data. For example, if your delegate contains a reference to a Vector, and a XAML control has a reference to that same Vector, you must take steps to avoid deadlocks or race conditions that might occur when both the delegate and XAML control attempt to access the Vector at the same time. You must also take care that the delegate doesn't attempt to capture by reference local variables that might go out of scope before the delegate is invoked.

If you want your created delegate to be called back on the same thread that it was created on—for example, if you pass it to a component that runs in an MTA apartment—and you want it to be invoked on the same thread as the creator, then use the delegate constructor overload that takes a second `CallbackContext` parameter. Only use this overload on delegates that have a registered proxy/stub; not all of the delegates that are defined in Windows.winmd are registered.

If you are familiar with event handlers in .NET, you know that the recommended practice is to make a local copy of an event before you fire it. This avoids race conditions in which an event handler might be removed just before the event is invoked. It isn’t necessary to do this in C++/CX because when event handlers are added or removed a new handler list is created. Because a C++ object increments the reference count on the handler list before invoking an event, it is guaranteed that all handlers will be valid. However, this also means that if you remove an event handler on the consuming thread, that handler might still get invoked if the publishing object is still operating on its copy of the list, which is now out-of-date. The publishing object will not get the updated list until the next time it fires the event.

## See also

[Type System](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
