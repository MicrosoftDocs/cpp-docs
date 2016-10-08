---
title: "&lt;exception&gt; functions"
ms.custom: na
ms.date: 10/07/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c09ac569-5e35-4fe8-872d-ca5810274dd7
caps.latest.revision: 5
---
# &lt;exception&gt; functions
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para/>
    </introduction>
    <section>
        <content>
            <table>
                <tbody>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#current_exception">current_exception</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#get_terminate">get_terminate</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#get_unexpected">get_unexpected</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#make_exception_ptr">make_exception_ptr</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#rethrow_exception">rethrow_exception</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#set_terminate">set_terminate</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#set_unexpected">set_unexpected</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#terminate">terminate</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#uncaught_exception">uncaught_exception</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#unexpected">unexpected</link>
                            </para>
                        </TD>
                    </tr>
                </tbody>
            </table>
        </content>
    </section>
    <section address="current_exception">
        <!--333180ce-73df-4343-9704-ab6c19c81fc2-->
        <title>current_exception</title>
        <content>
            <para>Obtains a smart pointer to the current exception.</para>
            <legacySyntax language="cpp">exception_ptr current_exception();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An <legacyLink xlink:href="2a338480-35e2-46f7-b223-52d4e84a5768#exception_ptr">exception_ptr</legacyLink> object pointing to the current exception.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call the <unmanagedCodeEntityReference>current_exception</unmanagedCodeEntityReference> function in a catch block. If an exception is in flight and the catch block can catch the exception, the <unmanagedCodeEntityReference>current_exception</unmanagedCodeEntityReference> function returns an <unmanagedCodeEntityReference>exception_ptr</unmanagedCodeEntityReference> object that references the exception. Otherwise, the function returns a null <unmanagedCodeEntityReference>exception_ptr</unmanagedCodeEntityReference> object.</para>
                    <para>The <languageKeyword>current_exception</languageKeyword> function captures the exception that is in flight regardless of whether the <languageKeyword>catch</languageKeyword> statement specifies an <legacyLink xlink:href="15e6a87b-b8a5-4032-a7ef-946c644ba12a">exception-declaration</legacyLink> statement. </para>
                    <para>The destructor for the current exception is called at the end of the <languageKeyword>catch</languageKeyword> block if you do not rethrow the exception. However, even if you call the <languageKeyword>current_exception</languageKeyword> function in the destructor, the function returns an <languageKeyword>exception_ptr</languageKeyword> object that references the current exception.</para>
                    <para>Successive calls to the <languageKeyword>current_exception</languageKeyword> function return <languageKeyword>exception_ptr</languageKeyword> objects that refer to different copies of the current exception. Consequently, the objects compare as unequal because they refer to different copies, even though the copies have the same binary value. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="make_exception_ptr">
        <!--4c3168fc-c0f3-4fda-8bf2-c372dd51f6f2-->
        <title>make_exception_ptr</title>
        <content>
            <para>Creates an <legacyLink xlink:href="2a338480-35e2-46f7-b223-52d4e84a5768#exception_ptr">exception_ptr</legacyLink> object that holds a copy of an exception.</para>
            <legacySyntax language="cpp">template &lt;class E&gt; 
    exception_ptr make_exception_ptr(E <parameterReference>Except</parameterReference>);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Except</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The class with the exception to copy. Usually, you specify an <legacyLink xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">exception class</legacyLink> object as the argument to the <unmanagedCodeEntityReference>make_exception_ptr</unmanagedCodeEntityReference> function, although any class object can be the argument.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An <legacyLink xlink:href="2a338480-35e2-46f7-b223-52d4e84a5768#exception_ptr">exception_ptr</legacyLink> object pointing to a copy of the current exception for <parameterReference>Except</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Calling the <unmanagedCodeEntityReference>make_exception_ptr</unmanagedCodeEntityReference> function is equivalent to throwing a C++ exception, catching it in a catch block, and then calling the <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#current_exception">current_exception</legacyLink> function to return an <unmanagedCodeEntityReference>exception_ptr</unmanagedCodeEntityReference> object that references the exception. The Microsoft implementation of the <unmanagedCodeEntityReference>make_exception_ptr</unmanagedCodeEntityReference> function is more efficient than throwing and then catching an exception. </para>
                    <para>An application typically does not require the <unmanagedCodeEntityReference>make_exception_ptr</unmanagedCodeEntityReference> function, and we discourage its use.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="rethrow_exception">
        <!--63cd325d-7585-4f6e-b2ba-a10ae397927b-->
        <title>rethrow_exception</title>
        <content>
            <para>Throws an exception passed as a parameter.</para>
            <legacySyntax language="cpp">void rethrow_exception(exception_ptr <parameterReference>P</parameterReference>);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>P</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The caught exception to re-throw. If <parameterReference>P</parameterReference> is a null <legacyLink xlink:href="2a338480-35e2-46f7-b223-52d4e84a5768#exception_ptr">exception_ptr</legacyLink>, the function throws <legacyLink xlink:href="5ae2c4ef-c7ad-4469-8a9e-a773e86bb000">std::bad_exception</legacyLink>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After you store a caught exception in an <languageKeyword>exception_ptr</languageKeyword> object, the primary thread can process the object. In your primary thread, call the <languageKeyword>rethrow_exception</languageKeyword> function together with the <languageKeyword>exception_ptr</languageKeyword> object as its argument. The <languageKeyword>rethrow_exception</languageKeyword> function extracts the exception from the <languageKeyword>exception_ptr</languageKeyword> object and then throws the exception in the context of the primary thread.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="get_terminate">
        <!--287567f5-d1f9-463a-863c-8508adb24d6e-->
        <title>get_terminate</title>
        <content>
            <para>Obtains the current <unmanagedCodeEntityReference>terminate_handler</unmanagedCodeEntityReference> function.</para>
            <legacySyntax language="cpp">terminate_handler get_terminate( );</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="set_terminate">
        <!--b949bd45-75ae-4fe8-af2c-f6ce67167d67-->
        <title>set_terminate</title>
        <content>
            <para>Establishes a new <unmanagedCodeEntityReference>terminate_handler</unmanagedCodeEntityReference> to be called at the termination of the program.</para>
            <legacySyntax> <legacyBold>terminate_handler</legacyBold> <legacyBold>   set_terminate(</legacyBold> <legacyBold>      terminate_handler </legacyBold> <parameterReference>fnew</parameterReference> <legacyBold>   ) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>fnew</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The function to be called at termination.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The address of the previous function that used to be called at termination.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function establishes a new <legacyLink xlink:href="2a338480-35e2-46f7-b223-52d4e84a5768#terminate_handler">terminate_handler</legacyLink> as the function * <parameterReference>fnew</parameterReference>. Thus, <parameterReference>fnew</parameterReference> must not be a null pointer. The function returns the address of the previous terminate handler.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// exception_set_terminate.cpp
// compile with: /EHsc
#include &lt;exception&gt;
#include &lt;iostream&gt;

using namespace std;

void termfunction()
{
    cout &lt;&lt; "My terminate function called." &lt;&lt; endl;
    abort();
}

int main()
{
    terminate_handler oldHandler = set_terminate(termfunction);

    // Throwing an unhandled exception would also terminate the program
    // or we could explicitly call terminate();
    
    //throw bad_alloc();
    terminate();
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="get_unexpected">
        <!--32e0b0f3-1e18-4bd8-9d75-cfbe24429a25-->
        <title>get_unexpected</title>
        <content>
            <para>Obtains the current <unmanagedCodeEntityReference>unexpected_handler</unmanagedCodeEntityReference> function.</para>
            <legacySyntax language="cpp">unexpected_handler get_unexpected( );</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="set_unexpected">
        <!--2132735f-3249-407e-b860-3e99be782614-->
        <title>set_unexpected</title>
        <content>
            <para>Establishes a new <unmanagedCodeEntityReference>unexpected_handler</unmanagedCodeEntityReference> to be when an unexpected exception is encountered.</para>
            <legacySyntax> <legacyBold>unexpected_handler</legacyBold> <legacyBold>   set_unexpected(</legacyBold> <legacyBold>      unexpected_handler </legacyBold> <parameterReference>fnew</parameterReference> <legacyBold>   ) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>fnew</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The function to be called when an unexpected exception is encountered.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The address of the previous <unmanagedCodeEntityReference>unexpected_handler</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <parameterReference>fnew</parameterReference> must not be a null pointer. </para>
                    <para>The C++ Standard requires that <unmanagedCodeEntityReference>unexpected</unmanagedCodeEntityReference> is called when a function throws an exception that is not on its throw list. The current implementation does not support this. The following example calls <unmanagedCodeEntityReference>unexpected</unmanagedCodeEntityReference> directly, which then calls the <unmanagedCodeEntityReference>unexpected_handler</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// exception_set_unexpected.cpp
// compile with: /EHsc
#include &lt;exception&gt;
#include &lt;iostream&gt;

using namespace std;

void uefunction()
{
    cout &lt;&lt; "My unhandled exception function called." &lt;&lt; endl;
    terminate(); // this is what unexpected() calls by default
}

int main()
{
    unexpected_handler oldHandler = set_unexpected(uefunction);

    unexpected(); // library function to force calling the 
                  // current unexpected handler
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="terminate">
        <!--cd8f9085-254f-4948-9be2-ddbec3ad07ee-->
        <title>terminate</title>
        <content>
            <para>Calls a terminate handler.</para>
            <legacySyntax> <legacyBold>void terminate( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function calls a terminate handler, a function of type <languageKeyword>void</languageKeyword>. If <legacyBold>terminate</legacyBold> is called directly by the program, the terminate handler is the one most recently set by a call to <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#set_terminate">set_terminate</legacyLink>. If <legacyBold>terminate</legacyBold> is called for any of several other reasons during evaluation of a throw expression, the terminate handler is the one in effect immediately after evaluating the throw expression.</para>
                    <para>A terminate handler may not return to its caller. At program startup, the terminate handler is a function that calls <legacyBold>abort</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#set_unexpected">set_unexpected</legacyLink> for an example of the use of <legacyBold>terminate</legacyBold>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="uncaught_exception">
        <!--9d4973d2-134e-49c6-aa2c-a9535e6832ae-->
        <title>uncaught_exception</title>
        <content>
            <para>Returns <languageKeyword>true</languageKeyword> only if a thrown exception is being currently processed. </para>
            <legacySyntax> <legacyBold>bool uncaught_exception( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <languageKeyword>true</languageKeyword> after completing evaluation of a throw expression and before completing initialization of the exception declaration in the matching handler or calling <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#unexpected">unexpected</legacyLink> as a result of the throw expression. In particular, <unmanagedCodeEntityReference>uncaught_exception</unmanagedCodeEntityReference> will return <languageKeyword>true</languageKeyword> when called from a destructor that is being invoked during an exception unwind. On devices, <languageKeyword>uncaught_exception</languageKeyword> is only supported on Windows CE 5.00 and higher versions, including Windows Mobile 2005 platforms.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// exception_uncaught_exception.cpp
// compile with: /EHsc
#include &lt;exception&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

class Test 
{
public:
   Test( std::string msg ) : m_msg( msg ) 
   {
      std::cout &lt;&lt; "In Test::Test(\"" &lt;&lt; m_msg &lt;&lt; "\")" &lt;&lt; std::endl;
   }
   ~Test( ) 
   {
      std::cout &lt;&lt; "In Test::~Test(\"" &lt;&lt; m_msg &lt;&lt; "\")" &lt;&lt; std::endl
         &lt;&lt; "        std::uncaught_exception( ) = "
         &lt;&lt; std::uncaught_exception( )
         &lt;&lt; std::endl;
   }
private:
    std::string m_msg;
};

// uncaught_exception will be true in the destructor 
// for the object created inside the try block because 
// the destructor is being called as part of the unwind.

int main( void )
   {
      Test t1( "outside try block" );
      try 
      {
         Test t2( "inside try block" );
         throw 1;
      }
      catch (...) {
   }
}</code>
                    <!--SnipComment-->
                            <computerOutput>In Test::Test("outside try block")
In Test::Test("inside try block")
In Test::~Test("inside try block")
        std::uncaught_exception( ) = 1
In Test::~Test("outside try block")
        std::uncaught_exception( ) = 0</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="unexpected">
        <!--3d12f205-dc5d-4951-a3bc-61c0388835c3-->
        <title>unexpected</title>
        <content>
            <para>Calls the unexpected handler.</para>
            <legacySyntax> <legacyBold>void unexpected( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The C++ Standard requires that <unmanagedCodeEntityReference>unexpected</unmanagedCodeEntityReference> is called when a function throws an exception that is not on its throw list. The current implementation does not support this. The example calls <unmanagedCodeEntityReference>unexpected</unmanagedCodeEntityReference> directly, which calls the unexpected handler.</para>
                    <para>The function calls an unexpected handler, a function of type <languageKeyword>void</languageKeyword>. If <unmanagedCodeEntityReference>unexpected</unmanagedCodeEntityReference> is called directly by the program, the unexpected handler is the one most recently set by a call to <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#set_unexpected">set_unexpected</legacyLink>. </para>
                    <para>An unexpected handler may not return to its caller. It may terminate execution by:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>Throwing an object of a type listed in the exception specification or an object of any type if the unexpected handler is called directly by the program.</para>
                        </listItem>
                        <listItem>
                            <para>Throwing an object of type <legacyLink xlink:href="5ae2c4ef-c7ad-4469-8a9e-a773e86bb000">bad_exception</legacyLink>.</para>
                        </listItem>
                        <listItem>
                            <para>Calling <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#terminate">terminate</legacyLink>, <legacyBold>abort</legacyBold> or <legacyBold>exit</legacyBold>( <languageKeyword>int</languageKeyword>).</para>
                        </listItem>
                    </list>
                    <para>At program startup, the unexpected handler is a function that calls <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#terminate">terminate</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#set_unexpected">set_unexpected</legacyLink> for an example of the use of <legacyBold>unexpected.</legacyBold>
                            </para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="28900768-5dd7-4834-b907-5e37ab3407db">&amp;lt;exception&amp;gt;</link>
    </relatedTopics>
</developerConceptualDocument>



