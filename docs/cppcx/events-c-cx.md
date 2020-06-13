---
title: "Events (C++/CX)"
description: "How to use C++/CX to create and use event handlers in the Windows Runtime."
ms.date: "02/03/2020"
ms.assetid: 31c8e08a-00ad-40f9-8f7e-124864aaad58
---
# Events (C++/CX)

A Windows Runtime type can declare (that is, publish) events, and client code in the same component or in other components can subscribe to those events by associating methods called *event handlers* with the event. Multiple event handlers can be associated with a single event. When the publishing object raises the event, it causes all event handlers to be invoked. In this way, a subscribing class can perform whatever custom action is appropriate when the publisher raises the event. An event has a delegate type that specifies the signature that all event handlers must have in order to subscribe to the event.

## Consuming events in Windows components

Many components in the Windows Runtime expose events. For example, a LightSensor object fires a ReadingChanged event when the sensor reports a new luminescence value. When you use a LightSensor object in your program, you can define a method that will be called when the ReadingChanged event is fired. The method can do whatever you want it to do; the only requirement is that its signature must match the signature of the delegate that is invoked. For more information about how to create an delegate event handler and subscribe to an event, see [Delegates](../cppcx/delegates-c-cx.md).

## Creating custom events

### Declaration

You can declare an event in a ref class or an interface, and it can have public, internal (public/private), public protected, protected, private protected, or private accessibility. When you declare an event, internally the compiler creates an object that exposes two accessor methods: add and remove. When subscribing objects register event handlers, the event object stores them in a collection. When an event is fired, the event object invokes all the handlers in its list in turn. A trivial event—like the one in the following example—has an implicit backing store as well as implicit `add` and `remove` accessor methods. You can also specify your own accessors, in the same way that you can specify custom `get` and `set` accessors on a property.  The implementing class cannot manually cycle through the event subscriber list in a trivial event.

The following example shows how to declare and fire an event. Notice that the event has a delegate type and is declared by using the "^" symbol.

[!code-cpp[cx_events#01](../cppcx/codesnippet/CPP/cx_events/class1.h#01)]

### Usage

The following example shows how a subscribing class uses the `+=` operator to subscribe to the event, and provide an event handler to be invoked when the event is fired. Notice that the function that's provided matches the signature of the delegate that's defined on the publisher side in the `EventTest` namespace.

[!code-cpp[cx_events#02](../cppcx/codesnippet/CPP/eventsupportinvs/eventclientclass.h#02)]

> [!WARNING]
> In general, it's better to use a named function, rather than a lambda, for an event handler unless you take great care to avoid circular references. A named function captures the "this" pointer by weak reference, whereas a lambda captures it by strong reference and creates a circular reference. For more information, see [Weak references and breaking cycles (C++/CX)](../cppcx/weak-references-and-breaking-cycles-c-cx.md).

### Custom add and remove methods

Internally, an event has an add method, a remove method, and a raise method. When client code subscribes to an event, the add method is called and the delegate that's passed in is added to the event's invocation list. The publishing class invokes the event, it causes the raise() method to be called, and each delegate in the list is invoked in turn. A subscriber can remove itself from the delegate list, which causes the event's remove method to be called. The compiler provides default versions of these methods if you don't define them in your code; these are known as trivial events. In many cases, a trivial event is all that's required.

You can specify custom add, remove, and raise methods for an event if you have to perform custom logic in response to the addition or removal of subscribers. For example, if you have an expensive object that is only required for event reporting, you can lazily defer the creation of the object until a client actually subscribes to the event.

The next example shows how to add custom add, remove, and raise methods to an event:

[!code-cpp[cx_events#03](../cppcx/codesnippet/CPP/cx_events/class1.h#03)]

## Removing an event handler from the subscriber side

In some rare cases, you may want to remove an event handler for an event that you previously subscribed to. For example, you may want to replace it with another event handler or you may want to delete some resources that are held by it. To remove a handler, you must store the EventRegistrationToken that's returned from the `+=` operation. You can then use the `-=` operator on the token to remove an event handler.  However, the original handler could still be invoked even after it's removed. For example, a race condition may arise when the event source gets a list of handlers and starts to invoke them. If an event handler gets removed while this happens, the list becomes out of date. So, if you intend to remove an event handler, create a member flag. Set it if the event is removed, and then in the event handler, check the flag, and return immediately if it's set. The next example shows the basic pattern.

[!code-cpp[cx_events#04](../cppcx/codesnippet/CPP/eventsupportinvs/eventclientclass.h#04)]

### Remarks

Multiple handlers may be associated with the same event. The event source sequentially calls into all event handlers from the same thread. If an event receiver blocks within the event handler method, it blocks the event source from invoking other event handlers for this event.

The order in which the event source invokes event handlers on event receivers is not guaranteed and may differ from call to call.

## See also

[Type System](../cppcx/type-system-c-cx.md)<br/>
[Delegates](../cppcx/delegates-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
