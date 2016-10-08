---
title: "Microsoft::WRL::Wrappers::HandleTraits Namespace"
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
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
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
# Microsoft::WRL::Wrappers::HandleTraits Namespace
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Describes characteristics of common handle-based resource types.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>namespace Microsoft::WRL::Wrappers::HandleTraits;</legacySyntax>
  </syntaxSection>
  <section>
    <title>Members</title>
    <content />
    <sections>
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
                    <link xlink:href="c515a1b5-4eb0-40bc-9035-c4d9352c9de7">CriticalSectionTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Specializes a <unmanagedCodeEntityReference>CriticalSection</unmanagedCodeEntityReference> object to support either an invalid critical section or a function to release a critical section.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="2cf308a4-50e3-4321-bafc-4c7c0364e148">EventTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>
                    <?Comment ta: ??? 2012-05-11T14:47:00Z  Id='1?>Defines <?CommentEnd Id='1'
    ?>characteristics of an <unmanagedCodeEntityReference>Event</unmanagedCodeEntityReference> class handle.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="e1107c42-2cd6-4253-9c16-8ecb35f05cd9">FileHandleTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>
                    <?Comment ta: ??? 2012-05-11T14:46:00Z  Id='2?>Defines <?CommentEnd Id='2'
    ?>characteristics of a file handle.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="88a29a14-c516-40cb-a0ca-ee897a668623">HANDLENullTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Defines common characteristics of an <?Comment ta: ??? Why this and HANDLETraits? 2012-05-11T14:45:00Z  Id='3?>uninitialized <?CommentEnd Id='3'
    ?>handle.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="22963e88-d857-4624-9182-7c986daff722">HANDLETraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>
                    <?Comment ta: TECH RVW: Why this and HANDLENULLTraits? 2012-05-11T14:46:00Z  Id='4?>Defines <?CommentEnd Id='4'
    ?>common characteristics of a handle.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="6582df80-b9ba-4892-948f-d572a3b23d54">MutexTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Defines common characteristics of the Mutex class.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="eddb8576-d063-409b-9201-cc87ca5d111e">SemaphoreTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Defines common characteristics of a Semaphore object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="38a996ef-c2d7-4886-b413-a426ecee8f05">SRWLockExclusiveTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Describes common characteristics of the <unmanagedCodeEntityReference>SRWLock</unmanagedCodeEntityReference> class in exclusive lock mode.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <link xlink:href="709cb51e-d70c-40b6-bdb4-d8eacf3af495">SRWLockSharedTraits Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Describes common characteristics of the <unmanagedCodeEntityReference>SRWLock</unmanagedCodeEntityReference> class in shared lock mode.</para>
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
    <link xlink:href="36ac38c7-1fc3-42da-a879-5c68661dc9e1">Wrappers Namespace</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>