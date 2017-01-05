---
title: "event  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "event"
  - "event_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event keyword [C++]"
ms.assetid: c4998e42-883c-4419-bbf4-36cdc979dd27
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# event  (C++ Component Extensions)
The `event` keyword declares an *event*, which is a notification to registered subscribers (*event handlers*) that something of interest has occurred.  
  
## All Runtimes  
 C++/CX supports declaring an *event member* or an *event block*. An event member is shorthand for declaring an event block. By default, an event member declares the `add()`, `remove()`, and `raise()` functions that are declared explicitly in an event block. To customize the functions in an event member, declare an event block instead and then override the functions that you require.  
  
 **Syntax**  
  
```  
  
// event data member  
modifiereventdelegate^ event_name;     
  
// event block  
modifiereventdelegate^ event_name   
{  
   modifierreturn_valueadd(delegate^ name);  
   modifier void remove(delegate^ name);  
   modifier void raise(parameters);  
}  
```  
  
 **Parameters**  
  
 *modifier*  
 A modifier that can be used on either the event declaration or an event accessor method.  Possible values are `static` and `virtual`.  
  
 *delegate*  
 The [delegate](../windows/delegate-cpp-component-extensions.md), whose signature the event handler must match.  
  
 *event_name*  
 The name of the event.  
  
 *return_value*  
 The return value of the event accessor method.  To be verifiable, the return type must be `void`.  
  
 *parameters*  
 (optional) Parameters for the `raise` method, which match the signature of the *delegate* parameter.  
  
 **Remarks**  
  
 An event is an association between a delegate and a member function (event handler) that responds to the triggering of the event and allows clients from any class to register methods that comply with the signature and return type of the underlying delegate.  
  
 There are two kinds of events declarations:  
  
 *event data member*  
 The compiler automatically creates storage for the event in the form of a member of the delegate type, and creates internal `add()`, `remove()`, and `raise()` member functions. An event data member must be declared inside a class. The return type of the return type of the delegate must match the return type of the event handler.  
  
 *event block*  
 An event block enables you to explicitly declare and customize the behavior of the `add()`, `remove()`, and `raise()` methods.  
  
 You can use `operators+=` and `operator-=` to add and remove an event handler, or call the `add()` and `remove()` methods explicitly.  
  
 `event` is a context-sensitive keyword; see [Context-Sensitive Keywords](../windows/context-sensitive-keywords-cpp-component-extensions.md) for more information.  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
  
### Remarks  
 For more information, see [Events (C++/CX)](http://msdn.microsoft.com/library/windows/apps/hh755799.aspx).  
  
 If you intend to add and then remove an event handler, you must save the EventRegistrationToken structure that is returned by the add operation. Then in the remove operation, you must use the saved EventRegistrationToken structure to identify the event handler to be removed.  
  
### Requirements  
 Compiler option: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 The `event` keyword lets you declare an event. An event is a way for a class to provide notifications when something of interest happens.  
  
 **Syntax**  
  
```  
  
// event data member  
modifiereventdelegate^ event_name;   
  
// event block  
modifiereventdelegate^ event_name   
{  
   modifierreturn_valueadd(delegate^ name);  
   modifier void remove(delegate^ name);  
   modifier void raise(parameters);  
}  
```  
  
 **Parameters**  
  
 *modifier*  
 A modifier that can be used on either the event declaration or an event accessor method.  Possible values are `static` and `virtual`.  
  
 *delegate*  
 The [delegate](../windows/delegate-cpp-component-extensions.md), whose signature the event handler must match.  
  
 *event_name*  
 The name of the event.  
  
 *return_value*  
 The return value of the event accessor method.  To be verifiable, the return type must be `void`.  
  
 *parameters*  
 (optional) Parameters for the `raise` method, which match the signature of the *delegate* parameter.  
  
 **Remarks**  
  
 An event is an association between a delegate and a member function (event handler) that responds to the triggering of the event and allows clients from any class to register methods that comply with the signature and return type of the underlying delegate.  
  
 The delegate can have one or more associated methods that will be called when your code indicates that the event has occurred. An event in one program can be made available to other programs that target the .NET Framework common language runtime.  
  
 There are two kinds of events declarations:  
  
 *event data members*  
 Storage for the event, in the form of a member of the delegate type, is created by the compiler for data member events.  An event data member must be declared inside a class. This is also known as a trivial event (see code sample below.)  
  
 *event blocks*  
 Event blocks let you customize the behavior of the add, remove, and raise methods, by implementing add, remove, and raise methods. The signature of the add, remove, and raise methods must match the signature of the delegate.  Event block events are not data members and any use as a data member will generate a compiler error. 
  
 The return type of the event handler must match the return type of the delegate.  
  
 In the .NET Framework, you can treat a data member as if it were a method itself (that is, the `Invoke` method of its corresponding delegate). You must predefine the delegate type for declaring a managed event data member. In contrast, a managed event method implicitly defines the corresponding managed delegate if it is not already defined.  See the code sample at the end of this topic for an example.  
  
 When declaring a managed event, you can specify add and remove accessors that will be called when event handlers are added or removed using operators += and -=. The add, remove and raise methods can be called explicitly.  
  
 The following steps must be taken in order to create and use events in Visual C++:  
  
1.  Create or identify a delegate. If you are defining your own event, you must also ensure that there is a delegate to use with the `event` keyword. If the event is predefined, in the .NET Framework for example, then consumers of the event need only know the name of the delegate.  
  
2.  Create a class that contains:  
  
    -   An event created from the delegate.  
  
    -   (optional) A method that verifies that an instance of the delegate declared with the `event` keyword exists. Otherwise, this logic must be placed in the code that fires the event.  
  
    -   Methods that call the event. These methods can be overrides of some base class functionality.  
  
     This class defines the event.  
  
3.  Define one or more classes that connect methods to the event. Each of these classes will associate one or more methods with the event in the base class.  
  
4.  Use the event:  
  
    -   Create an object of the class that contains the event declaration.  
  
    -   Create an object of the class that contains the event definition.  
  
 For more information on [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)] events, see  
  
-   [Events in an Interface](../dotnet/how-to-use-events-in-cpp-cli.md)  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 **Example**  
  
 The following code example demonstrates declaring pairs of delegates, events, and event handlers; subscribing (adding) the event handlers; invoking the event handlers; and then unsubscribing (removing) the event handlers.  
  
```  
// mcppv2_events.cpp  
// compile with: /clr  
using namespace System;  
  
// declare delegates  
delegate void ClickEventHandler(int, double);  
delegate void DblClickEventHandler(String^);  
  
// class that defines events  
ref class EventSource {  
public:  
   event ClickEventHandler^ OnClick;   // declare the event OnClick  
   event DblClickEventHandler^ OnDblClick;   // declare OnDblClick  
  
   void FireEvents() {  
      // raises events  
      OnClick(7, 3.14159);  
      OnDblClick("Hello");  
   }  
};  
  
// class that defines methods that will called when event occurs  
ref class EventReceiver {  
public:  
   void OnMyClick(int i, double d) {  
      Console::WriteLine("OnClick: {0}, {1}", i, d);  
   }  
  
   void OnMyDblClick(String^ str) {  
      Console::WriteLine("OnDblClick: {0}", str);  
   }  
};  
  
int main() {  
   EventSource ^ MyEventSource = gcnew EventSource();  
   EventReceiver^ MyEventReceiver = gcnew EventReceiver();  
  
   // hook handler to event  
   MyEventSource->OnClick += gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);  
   MyEventSource->OnDblClick += gcnew DblClickEventHandler(MyEventReceiver, &EventReceiver::OnMyDblClick);  
  
   // invoke events  
   MyEventSource->FireEvents();  
  
   // unhook handler to event  
   MyEventSource->OnClick -= gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);  
   MyEventSource->OnDblClick -= gcnew DblClickEventHandler(MyEventReceiver, &EventReceiver::OnMyDblClick);  
}  
```  
  
 **Output**  
  
```Output  
OnClick: 7, 3.14159  
  
OnDblClick: Hello  
```  
  
 **Example**  
  
 The following code example demonstrates the logic used to generate the `raise` method of a trivial event: If the event has one or more subscribers, calling the `raise` method implicitly or explicitly calls the delegate. If the delegate's return type is not `void` and if there are zero event subscribers, the `raise` method returns the default value for the delegate type. If there are no event subscribers, calling the `raise` method simply returns and no exception is raised. If the delegate return type is not `void`, the delegate type is returned.  
  
```  
// trivial_events.cpp  
// compile with: /clr /c  
using namespace System;  
public delegate int Del();  
public ref struct C {  
   int i;  
   event Del^ MyEvent;  
  
   void FireEvent() {  
      i = MyEvent();  
   }  
};  
  
ref struct EventReceiver {  
   int OnMyClick() { return 0; }  
};  
  
int main() {  
   C c;  
   c.i = 687;  
  
   c.FireEvent();  
   Console::WriteLine(c.i);  
   c.i = 688;  
  
   EventReceiver^ MyEventReceiver = gcnew EventReceiver();  
   c.MyEvent += gcnew Del(MyEventReceiver, &EventReceiver::OnMyClick);  
   Console::WriteLine(c.i);     
}  
```  
  
 **Output**  
  
```Output  
0  
  
688  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)