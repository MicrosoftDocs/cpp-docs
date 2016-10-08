---
title: "MutexTraits Structure"
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
ms.assetid: 6582df80-b9ba-4892-948f-d572a3b23d54
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
# MutexTraits Structure
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Defines common characteristics of the <legacyLink xlink:href="682a0963-721c-46a2-8871-000e9997505b">Mutex</legacyLink> class.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>struct MutexTraits : HANDLENullTraits;</legacySyntax>
  </syntaxSection>
  <section>
    <title>Members</title>
    <content />
    <sections>
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
                    <link xlink:href="7c4e5664-6d95-498a-95bb-d30b5e866c2c">MutexTraits::Unlock Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Releases exclusive control of a shared resource.</para>
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
        <unmanagedCodeEntityReference>HANDLENullTraits</unmanagedCodeEntityReference>
      </para>
      <para> <unmanagedCodeEntityReference>MutexTraits</unmanagedCodeEntityReference></para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>corewrappers.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Wrappers::HandleTraits</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="2fb5c6d1-bfc2-4e09-91eb-31705064ffb3">HandleTraits Namespace</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>