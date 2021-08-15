---
description: "Learn more about: Weak references and breaking cycles (C++/CX)"
title: "Weak references and breaking cycles (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: 1acb6402-05f0-4951-af94-0e9dab41c53e
---
# Weak references and breaking cycles (C++/CX)

In any type system that's based on reference-counting, references to types can form *cycles*—that is, one object refers to a second object, the second object refers to a third object, and so on until some final object refers back to the first object. In a cycle, objects can't be deleted correctly when one object's reference count becomes zero. To help you solve this problem, C++/CX provides the [Platform::WeakReference Class](../cppcx/platform-weakreference-class.md) class. A `WeakReference` object supports the [Resolve](../cppcx/platform-weakreference-class.md#resolve) method, which returns null if the object no longer exists, or throws an [Platform::InvalidCastException](../cppcx/platform-invalidcastexception-class.md) if the object is alive but is not of type `T`.

One scenario in which `WeakReference` must be used is when the **`this`** pointer is captured in a lambda expression that's used to define an event handler. We recommend that you use named methods when you define event handlers, but if you want to use a lambda for your event handler—or if you have to break a reference counting cycle in some other situation—use `WeakReference`. Here's an example:

```

using namespace Platform::Details;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Controls;

Class1::Class1()
{
    // Class1 has a reference to m_Page
    m_Page = ref new Page();

    // m_Page will have a reference to this Class1
    // so create a weak reference to this
    WeakReference wr(this);
    m_Page->DoubleTapped += ref new DoubleTappedEventHandler(
        [wr](Object^ sender, DoubleTappedRoutedEventArgs^ args)
    {
       // Use the weak reference to get the object
       Class1^ c = wr.Resolve<Class1>();
       if (c != nullptr)
       {
           c->m_eventFired = true;
       }
       else
       {
           // Inform the event that this handler should be removed
           // from the subscriber list
           throw ref new DisconnectedException();
       }
    });
}

}
```

When an event handler throws `DisconnectedException`, it causes the event to remove the handler from the subscriber list.
