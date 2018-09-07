---
title: "Delegates and Events | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["__event keyword [C++]", "delegate keyword [C++]", "delegates [C++], upgrading from Managed Extensions for C++", "__delegate keyword", "events [C++], upgrading from Managed Extensions for C++", "event keyword [C++]"]
ms.assetid: 3505c626-7e5f-4492-a947-0e2248f7b84a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Delegates and Events
The way to declare delegates and events has changed from Managed Extensions for C++ to Visual C++.  
  
 The double underscore is no longer needed, as shown in the following sample. Here a sample code in Managed Extensions:  
  
```  
__delegate void ClickEventHandler(int, double);  
__delegate void DblClickEventHandler(String*);  
  
__gc class EventSource {  
   __event ClickEventHandler* OnClick;    
   __event DblClickEventHandler* OnDblClick;    
};  
```  
  
 The same code in the new syntax looks as follows:  
  
```  
delegate void ClickEventHandler( int, double );  
delegate void DblClickEventHandler( String^ );  
  
ref class EventSource {  
   event ClickEventHandler^ OnClick;   
   event DblClickEventHandler^ OnDblClick;   
};  
```  
  
 Events (and delegates) are reference types, which is clear in the new syntax because of the use of the hat (`^`).  Events support both an explicit declaration syntax and the trivial form shown in the preceding code. In the explicit form, the user specifies the `add`, `raise`, and `remove` methods associated with the event. (Only the `add` and `remove` methods are required; the `raise` method is optional.)  
  
 Under Managed Extensions, if you provide these methods, you do not also provide an explicit event declaration, but you must decide on a name for the event that is not present. Each method is specified in the form `add_EventName`, `raise_EventName`, and `remove_EventName`, as in the following example taken from the Managed Extensions specification:  
  
```  
// explicit implementations of add, remove, raise  
public __delegate void f(int);  
public __gc struct E {  
   f* _E;  
public:  
   E() { _E = 0; }  
  
   __event void add_E1(f* d) { _E += d; }  
  
   static void Go() {  
      E* pE = new E;  
      pE->E1 += new f(pE, &E::handler);  
      pE->E1(17);   
      pE->E1 -= new f(pE, &E::handler);  
      pE->E1(17);   
   }  
  
private:  
   __event void raise_E1(int i) {  
      if (_E)  
         _E(i);  
   }  
  
protected:  
   __event void remove_E1(f* d) {  
      _E -= d;  
   }  
};  
```  
  
 The new syntax simplifies the declaration, as the following translation demonstrates. An event specifies the two or three methods enclosed in a pair of braces  and placed immediately after the declaration of the event and its associated delegate type, as shown here:  
  
```  
public delegate void f( int );  
public ref struct E {  
private:  
   f^ _E; // delegates are also reference types  
  
public:  
   E() {  // note the replacement of 0 with nullptr!  
      _E = nullptr;   
   }  
  
   // the new aggregate syntax of an explicit event declaration  
   event f^ E1 {  
   public:  
      void add( f^ d ) {  
         _E += d;  
      }  
  
   protected:  
      void remove( f^ d ) {  
         _E -= d;  
      }  
  
   private:  
      void raise( int i ) {  
         if ( _E )  
            _E( i );  
      }  
   }  
  
   static void Go() {  
      E^ pE = gcnew E;  
      pE->E1 += gcnew f( pE, &E::handler );  
      pE->E1( 17 );   
      pE->E1 -= gcnew f( pE, &E::handler );  
      pE->E1( 17 );   
   }  
};  
```  
  
## See Also  
 [Member Declarations within a Class or Interface (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [delegate  (C++ Component Extensions)](../windows/delegate-cpp-component-extensions.md)   
 [event](../windows/event-cpp-component-extensions.md)