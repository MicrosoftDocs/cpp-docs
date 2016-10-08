---
title: "EventTargetArray Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: e3cadb7c-2160-4cbb-a2f8-c28733d1e96d
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
# EventTargetArray Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Supports the WRL infrastructure and is not intended to be used directly from your code.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>class EventTargetArray : public Microsoft::WRL::RuntimeClass&lt;Microsoft::WRL::RuntimeClassFlags&lt;ClassicCom&gt;, IUnknown&gt;;</legacySyntax>
  </syntaxSection>
  <section>
    <title>Remarks</title>
    <content>
      <para>Represents an array of event handlers.</para>
      <para>The event handlers that are associated with an <legacyLink xlink:href="91f1c072-6af4-44e6-b6d8-ac6d0c688dde">EventSource</legacyLink> object are stored in a protected EventTargetArray data member.</para>
    </content>
  </section>
  <section>
    <title>Members</title>
    <content />
    <sections>
      <section>
        <title>Public Constructors</title>
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
                    <link xlink:href="6c6d3737-3cd3-4515-a8f6-d27901bb8ed2">EventTargetArray::EventTargetArray Constructor</link>
                  </para>
                </TD>
                <TD>
                  <para>Initializes a new instance of the EventTargetArray class.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="a7be9a95-6da7-40ac-9672-e1462e8cb86f">EventTargetArray::~EventTargetArray Destructor</link>
                  </para>
                </TD>
                <TD>
                  <para>Deinitializes the current EventTargetArray class.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Public Methods</title>
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
                    <link xlink:href="d0fafab9-049c-40e0-a40c-d126c9ee63e6">EventTargetArray::AddTail Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Appends the specified event handler to the end of the internal array of event handlers.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="1cc7fdfd-a2c4-4b28-93cf-1c82842294ba">EventTargetArray::Begin Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Gets the address of the first element in the internal array of event handlers.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="20c491b8-f355-4d8f-ad14-8f46121d9af6">EventTargetArray::End Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Gets the address of the last element in the internal array of event handlers.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="f8bd8d42-977b-4695-b07a-227a68be5259">EventTargetArray::Length Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Gets the current number of elements in the internal array of event handlers.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Inheritance Hierarchy</title>
    <content>
      <para>
        <unmanagedCodeEntityReference>EventTargetArray</unmanagedCodeEntityReference>
      </para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>event.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Details</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="d71fe149-d804-4c6f-961d-43fe21ef8630">Microsoft::WRL::Details Namespace</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>