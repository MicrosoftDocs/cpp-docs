---
title: "SyncLockWithStatusT Class"
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
ms.assetid: 4832fd93-0ac8-4168-9404-b43fefea7476
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
# SyncLockWithStatusT Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Supports the WRL infrastructure and is not intended to be used directly from your code.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>template &lt;
   typename <parameterReference>SyncTraits</parameterReference>
&gt;
class SyncLockWithStatusT : public SyncLockT&lt;<parameterReference>SyncTraits</parameterReference>&gt;;</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>SyncTraits</parameterReference>
        </definedTerm>
        <definition>
          <para>A type that can take exclusive or shared ownership of a resource.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <section>
    <title>Remarks</title>
    <content>
      <para>Represents a type that can take exclusive or shared ownership of a resource.</para>
      <para>The SyncLockWithStatusT class is used to implement the <legacyLink xlink:href="682a0963-721c-46a2-8871-000e9997505b">Mutex</legacyLink> and <legacyLink xlink:href="ded53526-17b4-4381-9c60-ea5e77363db6">Semaphore</legacyLink> classes.</para>
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
                    <link xlink:href="5d2fb820-ae1b-495f-8084-ebb4fecc3104">SyncLockWithStatusT::SyncLockWithStatusT Constructor</link>
                  </para>
                </TD>
                <TD>
                  <para>Initializes a new instance of the SyncLockWithStatusT class.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Protected Constructors</title>
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
                    <link xlink:href="5d2fb820-ae1b-495f-8084-ebb4fecc3104">SyncLockWithStatusT::SyncLockWithStatusT Constructor</link>
                  </para>
                </TD>
                <TD>
                  <para>Initializes a new instance of the SyncLockWithStatusT class.</para>
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
                    <link xlink:href="d448b51d-a63d-40d9-a9ee-4aad3204118d">SyncLockWithStatusT::GetStatus Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Retrieves the wait status of the current SyncLockWithStatusT object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="e1b75b7b-c145-471a-aa5d-71abf31f5990">SyncLockWithStatusT::IsLocked Method</link>
                  </para>
                </TD>
                <TD>
                  <para>Indicates whether the current SyncLockWithStatusT object owns a resource; that is, the SyncLockWithStatusT object is <newTerm>locked</newTerm>.</para>
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
                    <link xlink:href="466fa336-b5ff-4d43-8efd-1e87e5fddf88">SyncLockWithStatusT::status_ Data Member</link>
                  </para>
                </TD>
                <TD>
                  <para>Holds the result of the underlying wait operation after a lock operation on an object based on the current SyncLockWithStatusT object.</para>
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
        <unmanagedCodeEntityReference>SyncLockT</unmanagedCodeEntityReference>
      </para>
      <para> <unmanagedCodeEntityReference>SyncLockWithStatusT</unmanagedCodeEntityReference></para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>corewrappers.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Wrappers::Details</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="6d3f04ac-9b53-4a82-a188-a85309ec34a4">Microsoft::WRL::Wrappers::Details Namespace</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>