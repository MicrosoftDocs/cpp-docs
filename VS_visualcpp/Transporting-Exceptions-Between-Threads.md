---
title: "Transporting Exceptions Between Threads"
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
ms.topic: language-reference
ms.assetid: 5c95d57b-acf5-491f-8122-57c5df0edd98
caps.latest.revision: 18
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Transporting Exceptions Between Threads
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Visual C++ supports <newTerm>transporting an exception</newTerm> from one thread to another. Transporting exceptions enables you to catch an exception in one thread and then make the exception appear to be thrown in a different thread. For example, you can use this feature to write a multithreaded application where the primary thread handles all the exceptions thrown by its secondary threads. Transporting exceptions is useful mostly to developers who create parallel programming libraries or systems. To implement transporting exceptions, Visual C++ provides the <legacyLink xlink:href="d39e329e-52d5-49be-8b4b-479e65833dc7">exception_ptr</legacyLink> type and the <legacyLink xlink:href="333180ce-73df-4343-9704-ab6c19c81fc2">current_exception</legacyLink>, <legacyLink xlink:href="63cd325d-7585-4f6e-b2ba-a10ae397927b">rethrow_exception</legacyLink>, and <legacyLink xlink:href="4c3168fc-c0f3-4fda-8bf2-c372dd51f6f2">make_exception_ptr</legacyLink> functions.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>namespace std 
{
   typedef <parameterReference>unspecified</parameterReference> exception_ptr; 
   exception_ptr current_exception();
   void rethrow_exception(exception_ptr <parameterReference>p</parameterReference>);
   template&lt;class <parameterReference>E</parameterReference>&gt; 
       exception_ptr make_exception_ptr(<parameterReference>E</parameterReference> <parameterReference>e</parameterReference>) noexcept;
}</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <thead>
          <tr>
            <TD>
              <para>Parameter</para>
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
                <parameterReference>unspecified</parameterReference>
              </para>
            </TD>
            <TD>
              <para>An unspecified internal class that is used to implement the <languageKeyword>exception_ptr</languageKeyword> type.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <parameterReference>p</parameterReference>
              </para>
            </TD>
            <TD>
              <para>An <languageKeyword>exception_ptr</languageKeyword> object that references an exception.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <parameterReference>E</parameterReference>
              </para>
            </TD>
            <TD>
              <para>A class that represents an exception. </para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <parameterReference>e</parameterReference>
              </para>
            </TD>
            <TD>
              <para>An instance of the parameter <parameterReference>E</parameterReference> class.</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>The <languageKeyword>current_exception</languageKeyword> function returns an <languageKeyword>exception_ptr</languageKeyword> object that references the exception that is currently in progress. If no exception is in progress, the function returns an <languageKeyword>exception_ptr</languageKeyword> object that is not associated with any exception.</para>
      <para>The <languageKeyword>make_exception_ptr</languageKeyword> function returns an <languageKeyword>exception_ptr</languageKeyword> object that references the exception specified by the <parameterReference>e</parameterReference> parameter.</para>
    </content>
  </returnValue>
  <languageReferenceRemarks>
    <content />
    <sections>
      <section>
        <title>Scenario</title>
        <content>
          <para>Imagine that you want to create an application that can scale to handle a variable amount of work. To achieve this objective, you design a multithreaded application where an initial, primary thread creates as many secondary threads as it needs in order to do the job. The secondary threads help the primary thread to manage resources, to balance loads, and to improve throughput. By distributing the work, the multithreaded application performs better than a single-threaded application. </para>
          <para>However, if a secondary thread throws an exception, you want the primary thread to handle it. This is because you want your application to handle exceptions in a consistent, unified manner regardless of the number of secondary threads. </para>
        </content>
      </section>
      <section>
        <title>Solution</title>
        <content>
          <para>To handle the previous scenario, the C++ Standard supports transporting an exception between threads. If a secondary thread throws an exception, that exception becomes the <newTerm>current exception</newTerm>. By analogy to the real world, the current exception is said to be <newTerm>in flight</newTerm>. The current exception is in flight from the time it is thrown until the exception handler that catches it returns. </para>
          <para>The secondary thread can catch the current exception in a <languageKeyword>catch</languageKeyword> block, and then call the <languageKeyword>current_exception</languageKeyword> function to store the exception in an <languageKeyword>exception_ptr</languageKeyword> object. The <languageKeyword>exception_ptr</languageKeyword> object must be available to the secondary thread and to the primary thread. For example, the <languageKeyword>exception_ptr</languageKeyword> object can be a global variable whose access is controlled by a mutex. The term <newTerm>transport an exception</newTerm> means an exception in one thread can be converted to a form that can be accessed by another thread.</para>
          <para>Next, the primary thread calls the <languageKeyword>rethrow_exception</languageKeyword> function, which extracts and then throws the exception from the <languageKeyword>exception_ptr</languageKeyword> object. When the exception is thrown, it becomes the current exception in the primary thread. That is, the exception appears to originate in the primary thread. </para>
          <para>Finally, the primary thread can catch the current exception in a <languageKeyword>catch</languageKeyword> block and then process it or throw it to a higher level exception handler. Or, the primary thread can ignore the exception and allow the process to end. </para>
          <para>Most applications do not have to transport exceptions between threads. However, this feature is useful in a parallel computing system because the system can divide work among secondary threads, processors, or cores. In a parallel computing environment, a single, dedicated thread can handle all the exceptions from the secondary threads and can present a consistent exception-handling model to any application.</para>
          <para>For more information about the C++ Standards committee proposal, search the Internet for document number N2179, titled "Language Support for Transporting Exceptions between Threads". </para>
        </content>
      </section>
      <section>
        <title>Exception-Handling Models and Compiler Options</title>
        <content>
          <para>Your application's exception-handling model determines whether it can catch and transport an exception. Visual C++ supports three models that can handle C++ exceptions, structured exception handling (SEH) exceptions, and common language runtime (CLR) exceptions. Use the <legacyLink xlink:href="754b916f-d206-4472-b55a-b6f1b0f2cb4d">/EH</legacyLink> and <legacyLink xlink:href="fec5a8c0-40ec-484c-a213-8dec918c1d6c">/clr</legacyLink> compiler options to specify your application's exception-handling model.</para>
          <para>Only the following combination of compiler options and programming statements can transport an exception. Other combinations either cannot catch exceptions, or can catch but cannot transport exceptions. </para>
          <list class="bullet">
            <listItem>
              <para>The <system>/EHa</system> compiler option and the <languageKeyword>catch </languageKeyword>statement can transport SEH and C++ exceptions. </para>
            </listItem>
            <listItem>
              <para>The <system>/EHa</system>, <system>/EHs</system>, and <system>/EHsc</system> compiler options and the <languageKeyword>catch </languageKeyword>statement can transport C++ exceptions. </para>
            </listItem>
            <listItem>
              <para>The <system>/CLR</system> or <system>/CLR:pure</system> compiler option and the <languageKeyword>catch </languageKeyword>statement can transport C++ exceptions. The <system>/CLR</system> compiler options imply specification of the <system>/EHa</system> option. Note that the compiler does not support transporting managed exceptions. This is because managed exceptions, which are derived from the <externalLink><linkText>System.Exception</linkText><linkUri>https://msdn.microsoft.com/en-us/library/system.exception.aspx</linkUri></externalLink> class, are already objects that you can move between threads by using the facilities of the common languange runtime. </para>
              <alert class="security note">
                <para>We recommend that you specify the <system>/EHsc</system> compiler option and catch only C++ exceptions. You expose yourself to a security threat if you use the <system>/EHa</system> or <system>/CLR</system> compiler option and a <system>catch</system> statement with an ellipsis <newTerm>exception-declaration</newTerm> (<codeInline>catch(...)</codeInline>). You probably intend to use the <languageKeyword>catch</languageKeyword> statement to capture a few specific exceptions. However, the <codeInline>catch(...)</codeInline> statement captures all C++ and SEH exceptions, including unexpected ones that should be fatal. If you ignore or mishandle an unexpected exception, malicious code can use that opportunity to undermine the security of your program. </para>
              </alert>
            </listItem>
          </list>
        </content>
      </section>
    </sections>
  </languageReferenceRemarks>
  <section>
    <title>Usage</title>
    <content>
      <para>The following sections describe how to transport exceptions by using the <languageKeyword>exception_ptr </languageKeyword>type, and the <languageKeyword>current_exception</languageKeyword>, <languageKeyword>rethrow_exception</languageKeyword>, and <languageKeyword>make_exception_ptr</languageKeyword> functions. </para>
    </content>
    <sections>
      <section>
        <title>exception_ptr Type</title>
        <content>
          <para>Use an <languageKeyword>exception_ptr</languageKeyword> object to reference the current exception or an instance of a user-specified exception. In the Microsoft implementation, an exception is represented by an <externalLink><linkText>EXCEPTION_RECORD</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/aa363082</linkUri></externalLink> structure. Each <languageKeyword>exception_ptr</languageKeyword> object includes an exception reference field that points to a copy of the <unmanagedCodeEntityReference>EXCEPTION_RECORD</unmanagedCodeEntityReference> structure that represents the exception. </para>
          <para>When you declare an <languageKeyword>exception_ptr</languageKeyword> variable, the variable is not associated with any exception. That is, its exception reference field is NULL. Such an <languageKeyword>exception_ptr</languageKeyword> object is called a <newTerm>null exception_ptr</newTerm>. </para>
          <para>Use the <languageKeyword>current_exception</languageKeyword> or <languageKeyword>make_exception_ptr</languageKeyword> function to assign an exception to an <languageKeyword>exception_ptr</languageKeyword> object. When you assign an exception to an <languageKeyword>exception_ptr</languageKeyword> variable, the variable's exception reference field points to a copy of the exception. If there is insufficient memory to copy the exception, the exception reference field points to a copy of a <legacyLink xlink:href="6429a8e6-5a49-4907-8d56-f4a4ec8131d0">std::bad_alloc</legacyLink> exception. If the <languageKeyword>current_exception</languageKeyword> or <languageKeyword>make_exception_ptr</languageKeyword> function cannot copy the exception for any other reason, the function calls the <link xlink:href="90e67402-08e9-4b2a-962c-66a8afd3ccb4">terminate (CRT)</link> function to exit the current process.</para>
          <para>Despite its name, an <languageKeyword>exception_ptr</languageKeyword> object is not itself a pointer. It does not obey pointer semantics and cannot be used with the pointer member access (<languageKeyword>-&gt;</languageKeyword>) or indirection (*) operators. The <languageKeyword>exception_ptr</languageKeyword> object has no public data members or member functions.</para>
          <para>
            <embeddedLabel>Comparisons:</embeddedLabel>
          </para>
          <para>You can use the equal (<languageKeyword>==</languageKeyword>) and not-equal (<languageKeyword>!=</languageKeyword>) operators to compare two <languageKeyword>exception_ptr</languageKeyword> objects. The operators do not compare the binary value (bit pattern) of the <unmanagedCodeEntityReference>EXCEPTION_RECORD</unmanagedCodeEntityReference> structures that represent the exceptions. Instead, the operators compare the addresses in the exception reference field of the <languageKeyword>exception_ptr</languageKeyword> objects. Consequently, a null <languageKeyword>exception_ptr</languageKeyword> and the NULL value compare as equal. </para>
        </content>
      </section>
      <section>
        <title>current_exception Function</title>
        <content>
          <para>Call the <languageKeyword>current_exception</languageKeyword> function in a <languageKeyword>catch</languageKeyword> block. If an exception is in flight and the <languageKeyword>catch</languageKeyword> block can catch the exception, the <languageKeyword>current_exception</languageKeyword> function returns an <languageKeyword>exception_ptr</languageKeyword> object that references the exception. Otherwise, the function returns a null <languageKeyword>exception_ptr</languageKeyword> object. </para>
          <para>
            <embeddedLabel>Details:</embeddedLabel>
          </para>
          <para>The <languageKeyword>current_exception</languageKeyword> function captures the exception that is in flight regardless of whether the <languageKeyword>catch</languageKeyword> statement specifies an <legacyLink xlink:href="15e6a87b-b8a5-4032-a7ef-946c644ba12a">exception-declaration</legacyLink> statement. </para>
          <para>The destructor for the current exception is called at the end of the <languageKeyword>catch</languageKeyword> block if you do not rethrow the exception. However, even if you call the<languageKeyword> current_exception</languageKeyword> function in the destructor, the function returns an <languageKeyword>exception_ptr</languageKeyword> object that references the current exception.</para>
          <para>Successive calls to the <languageKeyword>current_exception</languageKeyword> function return <languageKeyword>exception_ptr</languageKeyword> objects that refer to different copies of the current exception. Consequently, the objects compare as unequal because they refer to different copies, even though the copies have the same binary value. </para>
          <para>
            <embeddedLabel>SEH Exceptions:</embeddedLabel>
          </para>
          <para>If you use the <system>/EHa</system> compiler option, you can catch an SEH exception in a C++ <languageKeyword>catch</languageKeyword> block. The <languageKeyword>current_exception</languageKeyword> function returns an <languageKeyword>exception_ptr</languageKeyword> object that references the SEH exception. And the <languageKeyword>rethrow_exception</languageKeyword> function throws the SEH exception if you call it with the<languageKeyword> </languageKeyword>transported <languageKeyword>exception_ptr</languageKeyword> object as its argument.</para>
          <para>The <languageKeyword>current_exception</languageKeyword> function returns a null <languageKeyword>exception_ptr</languageKeyword> if you call it in an SEH <languageKeyword>__finally</languageKeyword> termination handler, an <languageKeyword>__except</languageKeyword> exception handler, or the <languageKeyword>__except</languageKeyword> filter expression.</para>
          <para>A transported exception does not support nested exceptions. A nested exception occurs if another exception is thrown while an exception is being handled. If you catch a nested exception, the <codeInline>EXCEPTION_RECORD.ExceptionRecord</codeInline> data member points to a chain of <unmanagedCodeEntityReference>EXCEPTION_RECORD</unmanagedCodeEntityReference> structures that describe the associated exceptions. The <languageKeyword>current_exception</languageKeyword> function does not support nested exceptions because it returns an <languageKeyword>exception_ptr</languageKeyword> object whose <codeInline>ExceptionRecord</codeInline> data member is zeroed out. </para>
          <para>If you catch an SEH exception, you must manage the memory referenced by any pointer in the <codeInline>EXCEPTION_RECORD.ExceptionInformation</codeInline> data member array. You must guarantee that the memory is valid during the lifetime of the corresponding <languageKeyword>exception_ptr</languageKeyword> object, and that the memory is freed when the <languageKeyword>exception_ptr</languageKeyword> object is deleted.</para>
          <para>You can use structured exception (SE) translator functions together with the transport exceptions feature. If an SEH exception is translated to a C++ exception, the <languageKeyword>current_exception</languageKeyword> function returns an <languageKeyword>exception_ptr</languageKeyword> that references the translated exception instead of the original SEH exception. The <languageKeyword>rethrow_exception</languageKeyword> function subsequently throws the translated exception, not the original exception. For more information about SE translator functions, see <link xlink:href="280842bc-d72a-468b-a565-2d3db893ae0f">_set_se_translator</link>.</para>
        </content>
      </section>
      <section>
        <title>rethrow_exception Function</title>
        <content>
          <para>After you store a caught exception in an <languageKeyword>exception_ptr</languageKeyword> object, the primary thread can process the object. In your primary thread, call the <languageKeyword>rethrow_exception</languageKeyword> function together with the <languageKeyword>exception_ptr</languageKeyword> object as its argument. The <languageKeyword>rethrow_exception</languageKeyword> function extracts the exception from the <languageKeyword>exception_ptr</languageKeyword> object and then throws the exception in the context of the primary thread. If the <parameterReference>p</parameterReference> parameter of the <languageKeyword>rethrow_exception</languageKeyword> function is a null <languageKeyword>exception_ptr</languageKeyword>, the function throws <legacyLink xlink:href="5ae2c4ef-c7ad-4469-8a9e-a773e86bb000">std::bad_exception</legacyLink>.</para>
          <para>The extracted exception is now the current exception in the primary thread, and you can handle it as you would any other exception. If you catch the exception, you can handle it immediately or use a <languageKeyword>throw</languageKeyword> statement to send it to a higher level exception handler. Otherwise, do nothing and let the default system exception handler terminate your process. </para>
        </content>
      </section>
      <section>
        <title>make_exception_ptr Function</title>
        <content>
          <para>The <languageKeyword>make_exception_ptr</languageKeyword> function takes an instance of a class as its argument and then returns an <languageKeyword>exception_ptr</languageKeyword> that references the instance. Usually, you specify an <legacyLink xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">exception class</legacyLink> object as the argument to the <languageKeyword>make_exception_ptr</languageKeyword> function, although any class object can be the argument. </para>
          <para>Calling the <languageKeyword>make_exception_ptr</languageKeyword> function is equivalent to throwing a C++ exception, catching it in a <languageKeyword>catch</languageKeyword> block, and then calling the <languageKeyword>current_exception</languageKeyword> function to return an <languageKeyword>exception_ptr</languageKeyword> object that references the exception. The Microsoft implementation of the <languageKeyword>make_exception_ptr</languageKeyword> function is more efficient than throwing and then catching an exception. </para>
          <para>An application typically does not require the <languageKeyword>make_exception_ptr</languageKeyword> function, and we discourage its use. </para>
        </content>
      </section>
    </sections>
  </section>
  <codeExample>
    <description>
      <content>
        <para>The following example transports a standard C++ exception and a custom C++ exception from one thread to another. </para>
      </content>
    </description>
    <code>// transport_exception.cpp
// compile with: /EHsc /MD
#include &lt;windows.h&gt;
#include &lt;stdio.h&gt; 
#include &lt;exception&gt;
#include &lt;stdexcept&gt;

using namespace std;

// Define thread-specific information.
#define THREADCOUNT 2
exception_ptr aException[THREADCOUNT]; 
int           aArg[THREADCOUNT];

DWORD WINAPI ThrowExceptions( LPVOID ); 

// Specify a user-defined, custom exception. 
// As a best practice, derive your exception 
// directly or indirectly from std::exception. 
class myException : public std::exception { 
};
int main()
{
    HANDLE aThread[THREADCOUNT];
    DWORD ThreadID;

    // Create secondary threads.
    for( int i=0; i &lt; THREADCOUNT; i++ )
    {
        aArg[i] = i;
        aThread[i] = CreateThread( 
            NULL,       // Default security attributes.
            0,          // Default stack size.
            (LPTHREAD_START_ROUTINE) ThrowExceptions, 
            (LPVOID) &amp;aArg[i], // Thread function argument.
            0,          // Default creation flags.
            &amp;ThreadID); // Receives thread identifier.
        if( aThread[i] == NULL )
        {
            printf("CreateThread error: %d\n", GetLastError());
            return -1;
        }
    } 

    // Wait for all threads to terminate.
    WaitForMultipleObjects(THREADCOUNT, aThread, TRUE, INFINITE); 
    // Close thread handles.
    for( int i=0; i &lt; THREADCOUNT; i++ ) {
        CloseHandle(aThread[i]); 
    }

    // Rethrow and catch the transported exceptions.
    for ( int i = 0; i &lt; THREADCOUNT; i++ ) {
        try {
            if (aException[i] == NULL) {
                printf("exception_ptr %d: No exception was transported.\n", i);
            }
            else {
                rethrow_exception( aException[i] );
            }  
        }
        catch( const invalid_argument &amp; ) {
            printf("exception_ptr %d: Caught an invalid_argument exception.\n", i);
        }
        catch( const myException &amp; ) {
            printf("exception_ptr %d: Caught a  myException exception.\n", i);
        }
    }
} 
// Each thread throws an exception depending on its thread 
// function argument, and then ends. 
DWORD WINAPI ThrowExceptions( LPVOID lpParam ) 
{ 
    int x = *((int*)lpParam);
    if (x == 0) {
        try {
            // Standard C++ exception.
            // This example explicitly throws invalid_argument exception. 
            // In practice, your application performs an operation that 
            // implicitly throws an exception.
            throw invalid_argument("A C++ exception.");
        }  
        catch ( const invalid_argument &amp; ) { 
            aException[x] = current_exception();
        } 
    }
    else {
        // User-defined exception.
        aException[x] = make_exception_ptr( myException() ); 
    }
    return TRUE; 
}</code>
    <comments>
      <content>
        <computerOutput>exception_ptr 0: Caught an invalid_argument exception.
exception_ptr 1: Caught a  myException exception.</computerOutput>
      </content>
    </comments>
  </codeExample>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header:</embeddedLabel> &lt;exception&gt;</para>
    </content>
  </requirements>
  <relatedTopics>
<link xlink:href="a6aa08de-669d-4ce8-9ec3-ec20d1354fcf">Exception Handling in Visual C++</link>
<legacyLink xlink:href="#base.exception_record_str">EXCEPTION_RECORD Structure</legacyLink>
<legacyLink xlink:href="#base.handler_syntax">Handler Syntax</legacyLink>
<link xlink:href="754b916f-d206-4472-b55a-b6f1b0f2cb4d">/EH (Exception Handling Model)</link>
<link xlink:href="fec5a8c0-40ec-484c-a213-8dec918c1d6c">/clr (Common Language Runtime Compilation)</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>