---
title: "Module::MethodReleaseNotifier Class"
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
ms.assetid: 5c2902be-964b-488f-9f1c-adf504995cbc
caps.latest.revision: 2
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
# Module::MethodReleaseNotifier Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>template&lt;
   typename <parameterReference>T</parameterReference>
&gt;
class MethodReleaseNotifier : public ReleaseNotifier;</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>T</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the object whose member function is the event handler.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
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
                    <link xlink:href="762e2ca4-0a92-49de-9ff5-d3efa0f067c0">Module::MethodReleaseNotifier::MethodReleaseNotifier Constructor</link>
                  </para>
                </TD>
                <TD>
                  <para>Initializes a new instance of the Module::MethodReleaseNotifier class.</para>
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
                    <link xlink:href="7467abab-9abc-4fd5-8f0e-ee9a4ef282b9">Module::MethodReleaseNotifier::Invoke Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Calls the event handler associated with the current Module::MethodReleaseNotifier object.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Protected Data Members</title>
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
                    <link xlink:href="57f35cee-4eef-4a3a-9c70-ed4356b37d87">Module::MethodReleaseNotifier::method_ Data Member</link>
                  </para>
                </TD>
                <TD>
                  <para>Holds a pointer to the event handler for the current Module::MethodReleaseNotifier object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="502d4a6f-f612-4d4e-9df7-fede288e9501">Module::MethodReleaseNotifier::object_ Data Member</link>
                  </para>
                </TD>
                <TD>
                  <para>Holds a pointer to the object whose member function is the event handler for the current Module::MethodReleaseNotifier object.</para>
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
        <unmanagedCodeEntityReference>ReleaseNotifier</unmanagedCodeEntityReference>
      </para>
      <para> <unmanagedCodeEntityReference>MethodReleaseNotifier</unmanagedCodeEntityReference></para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>module.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Module Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>