---
title: "Module::ReleaseNotifier Class"
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
ms.assetid: 17249cd1-4d88-42e3-8146-da9e942d12bd
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
# Module::ReleaseNotifier Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Invokes an event handler when the last object in a module is released.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>class ReleaseNotifier;</legacySyntax>
  </syntaxSection>
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
                    <link xlink:href="5904d4dc-dce2-4100-a7fb-f14633515595">Module::ReleaseNotifier::~ReleaseNotifier Destructor</link>
                  </para>
                </TD>
                <TD>
                  <para>Deinitializes the current instance of the Module::ReleaseNotifier class.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="889a3c9a-2366-44a1-ba7d-a59c1885e7f3">Module::ReleaseNotifier::ReleaseNotifier Constructor</link>
                  </para>
                </TD>
                <TD>
                  <para>Initializes a new instance of the Module::ReleaseNotifier class.</para>
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
                    <link xlink:href="f62686fe-74bf-482b-a46b-6a3c09b80e7e">Module::ReleaseNotifier::Invoke Method</link>
                  </para>
                </TD>
                <TD>
                  <para>When implemented, calls an event handler when the last object in a module is released.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="77282c47-b955-483e-9969-43f73056cdc1">Module::ReleaseNotifier::Release Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Deletes the current Module::ReleaseNotifier object if the object was constructed with a parameter of <languageKeyword>true</languageKeyword>.</para>
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