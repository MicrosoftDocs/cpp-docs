---
title: "Microsoft::WRL::Details Namespace"
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
ms.assetid: d71fe149-d804-4c6f-961d-43fe21ef8630
caps.latest.revision: 4
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
# Microsoft::WRL::Details Namespace
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Supports the WRL infrastructure and is not intended to be used directly from your code.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>namespace Microsoft::WRL::Details;</legacySyntax>
  </syntaxSection>
  <section>
    <title>Members</title>
    <content />
    <sections>
      <section>
        <title>Classes</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
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
                    <link xlink:href="d6bdfd20-e977-45b4-9ac1-1b8efbdb77de">ComPtrRef Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a reference to an object of type ComPtr&lt;T&gt;.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6d344c1a-cc13-4a3f-8a0d-f167ccb9348f">ComPtrRefBase Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents the base class for the <legacyLink xlink:href="d6bdfd20-e977-45b4-9ac1-1b8efbdb77de">ComPtrRef</legacyLink> class.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="8b38d07b-fc14-4cea-afb9-4c1a7dde0093">DontUseNewUseMake Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Prevents using operator <languageKeyword>new</languageKeyword> in <unmanagedCodeEntityReference>RuntimeClass</unmanagedCodeEntityReference>. Consequently, you must use the <legacyLink xlink:href="66704143-df99-4a95-904d-ed99607e1034">Make function</legacyLink> instead. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="e3cadb7c-2160-4cbb-a2f8-c28733d1e96d">EventTargetArray Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an array of event handlers.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="a1114615-abd7-4a56-9bc3-750c118f0fa1">MakeAllocator Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Allocates memory for an activatable class, with or without weak reference support.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="edce7591-6893-46f7-94a7-382827775548">ModuleBase Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents the base class of the <legacyLink xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Module</legacyLink> classes.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="998e711a-7d1a-44c6-a016-e6167aa40863">RemoveIUnknown Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Makes a type that is equivalent to an <unmanagedCodeEntityReference>IUnknown</unmanagedCodeEntityReference>-based type, but has non-virtual <unmanagedCodeEntityReference>QueryInterface</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>AddRef</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>Release</unmanagedCodeEntityReference> methods.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="3f4c956b-dbbd-49b1-8cfa-9509a9956c97">WeakReference Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a <newTerm>weak reference</newTerm> that can be used with the Windows Runtime or classic COM. A weak reference represents an object that might or might not be accessible.</para>
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
                  <para>Name</para>
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
                    <link xlink:href="58ae4115-c1bc-48c8-b01b-e60554841c30">ArgTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Declares a specified delegate interface and an anonymous member function that has a specified number of parameters.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="e3f798da-0aef-4a57-95d3-d38c34c47d72">ArgTraitsHelper Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Helps define common characteristics of delegate arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="666eae78-e81d-4fb7-a9e4-1ba617d6d4cd">BoolStruct Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Defines whether a ComPtr is managing the object lifetime of an interface. BoolStruct is used internally by the <legacyLink xlink:href="cfba6521-fb30-4fb8-afb2-cfab1cb5e0b8">BoolType()</legacyLink> operator.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="94e40927-90c3-4107-bca3-3ad2dc4beda9">CreatorMap Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Contains information about how to initialize, register, and unregister objects.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="86ded58b-c3ee-4a4f-bb86-4f67b895d427">DerefHelper Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Represent a dereferenced pointer to the <parameterReference>T*</parameterReference> template parameter.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="7825b283-e6b2-4f39-a4b9-c03bcd431b8e">EnableIf Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Defines a data member of the type specified by the second template parameter if the first template parameter evaluates to <languageKeyword>true</languageKeyword>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="624544e6-0989-47f6-a3e9-edb60e1ee6d4">FactoryCache Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Contains the location of a class factory and a value that identifies a registered <token>wrt</token> or COM class object. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="f898eb17-136d-4c87-b3ea-771319314641">ImplementsBase Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Used to validate template parameter types in <link xlink:href="29b13e90-34d4-4a0b-babd-5187c9eb0c36">Implements Structure</link>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="b857ba80-81bd-4e53-92b6-210991954243">ImplementsHelper Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Helps implement the <legacyLink xlink:href="29b13e90-34d4-4a0b-babd-5187c9eb0c36">Implements</legacyLink> structure.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6ec3228d-eb3e-4b7e-aef1-7dcf17bdf61a">InterfaceList Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Used to create a recursive list of interfaces.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="4297e419-c96b-45df-8a00-7568062125ba">InterfaceListHelper Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Builds an <unmanagedCodeEntityReference>InterfaceList</unmanagedCodeEntityReference> type by recursively applying the specified template parameter arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="ede0c284-19a7-4892-9738-ff3da4923d0a">InterfaceTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Implements common characteristics of an interface.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="555ad2bc-4dd6-4e65-a2e2-1242c395f0e5">InvokeHelper Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Provides an implementation of the Invoke() method based on the specified number and type of arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6fed7366-c8d4-4991-b4fb-43ed93f8e1bf">IsBaseOfStrict Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Tests whether one type is the base of another.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="1eddbc3f-3cc5-434f-8495-e4477e1f868e">IsSame Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Tests whether one specified type is the same as another specified type.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="ea6dddc1-2bd0-44eb-804e-477572215712">Nil Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Used to indicate an unspecified, optional template parameter.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="43ff91bb-815a-440e-b9fb-7dcbb7c863af">RemoveReference Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Strips the reference or rvalue-reference trait from the specified class template parameter.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6ada4f81-a857-488a-ad56-8d0b11ccbfcc">RuntimeClassBase Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Used to detect <unmanagedCodeEntityReference>RuntimeClass</unmanagedCodeEntityReference> in the <legacyLink xlink:href="66704143-df99-4a95-904d-ed99607e1034">Make</legacyLink> function.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="a62775fb-3359-4f45-9ff1-c07fa8da464b">RuntimeClassBaseT Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Provides helper methods for <unmanagedCodeEntityReference>QueryInterface</unmanagedCodeEntityReference> operations and getting interface IDs.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="8a48a702-0f71-4807-935b-8311f0a7a8b6">VerifyInheritanceHelper Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Tests whether one interface is derived from another interface.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="ea95b641-199a-4fdf-964b-186b40cb3ba7">VerifyInterfaceHelper Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Verifies that the interface specified by the template parameter meets certain requirements.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Enumerations</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
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
                    <link xlink:href="b783923f-3f1c-4487-9384-be572cbc62d7">AsyncStatusInternal Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Specifies a mapping between internal enumerations for the state of asynchronous operations and the <system>Windows::Foundation::AsyncStatus</system> enumeration.</para>
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
                  <para>Name</para>
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
                    <link xlink:href="dd40c79b-1273-4f2a-8c24-ae9926fb4fd9">ActivationFactoryCallback Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Gets the activation factory for the specified activation ID.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="c9525426-97e8-4d8c-9877-b689d8a0dc67">Move Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Moves the specified argument from one location to another.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="f9c74f6d-112a-4d2e-900f-622f795d5dbf">RaiseException Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Raises an exception in the calling thread.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="ed134a08-ceb7-4279-aa02-a183c3a426ea">Swap Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Exchanges the values of the two specified arguments.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="1c314a61-da5d-49bb-ac44-c34ee3c23b66">TerminateMap Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Shuts down the class factories in the specified module.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>async.h, client.h, corewrappers.h, event.h, ftm.h, implements.h, internal.h, module.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Details</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="01118a8f-f564-4859-b87e-9444848585a1">Microsoft::WRL Namespace</link>
    <link xlink:href="36ac38c7-1fc3-42da-a879-5c68661dc9e1">Microsoft::WRL::Wrappers Namespace</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>