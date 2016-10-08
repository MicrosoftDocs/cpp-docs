---
title: "Module::GenericReleaseNotifier Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 244a8fbe-f89b-409b-aa65-db3e37f9b125
caps.latest.revision: 3
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
# Module::GenericReleaseNotifier Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>template&lt;
   typename <parameterReference>T</parameterReference>
&gt;
class GenericReleaseNotifier : public ReleaseNotifier;</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>T</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the data member that contains the location of the event handler.</para>
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
                    <link xlink:href="feb5b687-a4b0-4809-9022-8f292181b7a1">Module::GenericReleaseNotifier::GenericReleaseNotifier Constructor</link>
                  </para>
                </TD>
                <TD>
                  <para>Initializes a new instance of the Module::GenericReleaseNotifier class.</para>
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
                    <link xlink:href="83dd5678-2514-454a-b2a0-6097ce7d4140">Module::GenericReleaseNotifier::Invoke Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Calls the event handler associated with the current Module::GenericReleaseNotifier object.</para>
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
                    <link xlink:href="a17c47ae-fe95-46b6-aee5-74fbfe32e031">Module::GenericReleaseNotifier::callback_ Data Member</link>
                  </para>
                </TD>
                <TD>
                  <para>Holds the lambda, functor, or pointer-to-function event handler associated with the current Module::GenericReleaseNotifier object.</para>
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
      <para> <unmanagedCodeEntityReference>GenericReleaseNotifier</unmanagedCodeEntityReference></para>
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

  </relatedTopics>
</developerReferenceWithSyntaxDocument>