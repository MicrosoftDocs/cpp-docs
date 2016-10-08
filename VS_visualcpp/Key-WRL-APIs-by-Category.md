---
title: "Key WRL APIs by Category"
ms.custom: na
ms.date: 10/08/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 7367bacf-6b7c-4ecd-a0ce-a662db46fc66
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Key WRL APIs by Category
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The following tables list primary <token>cppwrl</token> classes, structs, functions, and macros. Constructs in helper namespaces and classes are omitted. These lists augment the API documentation, which is arranged by namespace.</para>
  </introduction>
  <section>
    <title />
    <content />
    <sections>
      <section>
        <title>Classes</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Title</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="5faddf1f-43b6-4f8a-97de-8c9d3ae1e1ff">ActivationFactory Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Enables one or more classes to be activated by the Windows Runtime.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="64259b9b-f427-4ffd-a611-e7a2f82362b2">AsyncBase Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Implements the Windows Runtime asynchronous state machine.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="f13e6bce-722b-4f18-b7cf-3ffa6345c1db">ClassFactory Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Implements the basic functionality of the <unmanagedCodeEntityReference>IClassFactory</unmanagedCodeEntityReference> interface.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="a6551902-6819-478a-8df7-b6f312ab1fb0">ComPtr Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Creates a <newTerm>smart pointer</newTerm> type that represents the interface specified by the template parameter. ComPtr automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="55dfc9fc-62d4-4bb2-9d85-5b6dd88569e8">Event Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an event.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="91f1c072-6af4-44e6-b6d8-ac6d0c688dde">EventSource Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an event. <unmanagedCodeEntityReference>EventSource</unmanagedCodeEntityReference> member functions add, remove, and invoke event handlers.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="275f3b71-2975-4f92-89e7-d351e96496df">FtmBase Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a free-threaded marshaler object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="3822b32a-a426-4d94-a54d-919d4df60ee2">HandleT Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a handle to an object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6709dd2e-8d72-4675-8ec7-1baa7d71854d">HString Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Provides support for manipulating HSTRING handles.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="9bf823b1-17eb-4ac4-8c5d-27d27c7a4150">HStringReference Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an HSTRING that is created from an existing string.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Module Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a collection of related objects.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="244a8fbe-f89b-409b-aa65-db3e37f9b125">Module::GenericReleaseNotifier Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="5c2902be-964b-488f-9f1c-adf504995cbc">Module::MethodReleaseNotifier Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="17249cd1-4d88-42e3-8146-da9e942d12bd">Module::ReleaseNotifier Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Invokes an event handler when the last object in a module is released.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="4055fbe0-63a7-4c06-b5a0-414fda5640e5">RoInitializeWrapper Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Initializes the <token>wrt</token>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="d52f9d1a-98e5-41f2-a143-8fb629dd0727">RuntimeClass Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an instantiated class that inherits the specified number of interfaces, and provides the specified Windows Runtime, classic COM, and weak reference support.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="aff768e0-0038-4fd7-95d2-ad7d308da41c">SimpleActivationFactory Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Provides a fundamental mechanism to create a Windows Runtime or classic COM base class.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6edda1b2-4e44-4e14-9364-72f519249962">SimpleClassFactory Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Provides a fundamental mechanism to create a base class.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="572be703-c641-496c-8af5-ad6164670ba1">WeakRef Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a <newTerm>weak reference</newTerm> that can be used by only the Windows Runtime, not classic COM. A weak reference represents an object that might or might not be accessible.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Structures</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Title</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="d7415b59-5468-4bef-a3fd-8d82b12f0e9c">ChainInterfaces Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Specifies verification and initialization functions that can be applied to a set of interface IDs.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="82e0e377-ca3a-46bc-b850-ae2c46c15bb5">CloakedIid Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Indicates to the <unmanagedCodeEntityReference>RuntimeClass</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>Implements</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ChainInterfaces</unmanagedCodeEntityReference> templates that the specified interface is not accessible in the IID list.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="29b13e90-34d4-4a0b-babd-5187c9eb0c36">Implements Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Implements <unmanagedCodeEntityReference>QueryInterface</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>GetIid</unmanagedCodeEntityReference> for the specified interfaces.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="47e2df9b-3a2e-4ae8-8ba3-b1fd3aa73566">MixIn Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Ensures that a runtime class derives from Windows Runtime interfaces, if any, and then classic COM interfaces.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Functions</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Title</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="8cfd1dd9-5fda-4cc2-acf8-d40e783b3875">ActivateInstance Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Registers and retrieves an instance of a specified type defined in a specified class ID.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="a6f10cfc-c1d6-4761-adb9-1a119cc99913">AsWeak Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Retrieves a weak reference to a specified instance.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="afb15d25-3230-44f7-b321-e17c54872943">Callback Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Creates an object whose member function is a callback method.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="a1a53e04-6757-4faf-a4c8-ecf06e43b959">CreateActivationFactory Function</link>
                  </para>
                </TD>
                <TD>
                  <para>
                    <?Comment ta: TR: A guess. How does this differ fromCreateClassFactory? 2012-05-11T14:39:00Z  Id='1?>Creates a factory that produces instances of the specified class that can be activated by the Windows Runtime.<?CommentEnd Id='1'
    ?></para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="772d5d1b-8872-4745-81ca-521a39564713">CreateClassFactory Function</link>
                  </para>
                </TD>
                <TD>
                  <para>
                    <?Comment ta: TR: A guess. How does this differ fromCreateActivationFactory? 2012-05-11T14:39:00Z  Id='2?>Creates a factory that produces instances of the specified class.<?CommentEnd Id='2'
    ?></para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="5736d285-6beb-42aa-8788-e261c0010afe">GetActivationFactory Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Retrieves an activation factory for the type specified by the template parameter.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="66704143-df99-4a95-904d-ed99607e1034">Make Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Initializes the specified <token>wrt</token> class.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Macros</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Title</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="9bd64709-ec2c-4678-8c96-ea5982622bdd">ActivatableClass Macros</link>
                  </para>
                </TD>
                <TD>
                  <para>Populates an internal cache that contains a factory that can create an instance of the specified class.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="ff390b26-58cc-424f-87ac-1fe3cc692b59">InspectableClass Macro</link>
                  </para>
                </TD>
                <TD>
                  <para>Sets the runtime class name and trust level.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <relatedTopics>
    <link xlink:href="b915afce-553b-44a7-b8dc-0ab601758eb0">Windows Runtime C++ Template Library</link>
  </relatedTopics>
</developerConceptualDocument>