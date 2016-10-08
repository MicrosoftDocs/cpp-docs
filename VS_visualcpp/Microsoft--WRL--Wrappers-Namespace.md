---
title: "Microsoft::WRL::Wrappers Namespace"
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
ms.assetid: 36ac38c7-1fc3-42da-a879-5c68661dc9e1
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
# Microsoft::WRL::Wrappers Namespace
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Defines Resource Acquisition Is Initialization (RAII) wrapper types that simplify the lifetime management of objects, strings, and handles.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>namespace Microsoft::WRL::Wrappers;</legacySyntax>
  </syntaxSection>
  <section>
    <title>Members</title>
    <content />
    <sections>
      <section>
        <title>Typedefs</title>
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
                    <unmanagedCodeEntityReference>FileHandle</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>
                    <unmanagedCodeEntityReference>HandleT&lt;HandleTraits::FileHandleTraits&gt;</unmanagedCodeEntityReference>
                  </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
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
                    <link xlink:href="f2e0a024-71a3-4f6b-99ea-d93a4a608ac4">CriticalSection Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a critical section object.</para>
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
                    Mutex Class
                  </para>
                </TD>
                <TD>
                  <para>Represents a synchronization object that exclusively controls a shared resource. </para>
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
                    Semaphore Class
                  </para>
                </TD>
                <TD>
                  <para>Represents a synchronization object that controls a shared resource that can support a limited number of users.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="4fa250e3-5f29-4b06-ac24-61b6c04ade93">SRWLock Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a slim reader/writer lock.</para>
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
        <embeddedLabel>Header: </embeddedLabel>corewrappers.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Wrappers</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="01118a8f-f564-4859-b87e-9444848585a1">Microsoft::WRL Namespace</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>