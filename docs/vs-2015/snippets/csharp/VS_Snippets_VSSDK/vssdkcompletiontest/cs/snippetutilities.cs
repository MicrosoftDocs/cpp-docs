////////////////////////////////////////////////////////////
//
// Filler code for "Walkthrough: Implementing Code Snippets"
//
////////////////////////////////////////////////////////////
using Microsoft.VisualStudio.Shell;
using Microsoft.VisualStudio.OLE.Interop;
using System;
using Microsoft.VisualStudio.Text;
using Microsoft.VisualStudio;
using System.Runtime.InteropServices;
using Microsoft.VisualStudio.TextManager.Interop;
using Microsoft.VisualStudio.Language.Intellisense;
using Microsoft.VisualStudio.Text.Editor;
//<Snippet26>
using Microsoft.VisualStudio.Text.Operations;
using MSXML;
using System.ComponentModel.Composition;
//</Snippet26>

//<Snippet22>
static class SnippetUtilities
//</Snippet22>
{
    //<Snippet23>
    internal const string LanguageServiceGuidStr = "00000000-0000-0000-0000-00000000";
    //</Snippet23>
}


namespace ImplementingCodeSnippetsPart1
{
    //<Snippet24>
    [ProvideLanguageCodeExpansion(
    SnippetUtilities.LanguageServiceGuidStr,
    "TestSnippets", //the language name
    0,              //the resource id of the language
    "TestSnippets", //the language ID used in the .snippet files
    @"%InstallRoot%\TestSnippets\Snippets\%LCID%\TestSnippets.xml",
        //the path of the index file
    SearchPaths = @"%InstallRoot%\TestSnippets\Snippets\%LCID%\",
    ForceCreateDirs = @"%InstallRoot%\TestSnippets\Snippets\%LCID%\")]
    internal class TestCompletionCommandHandler : IOleCommandTarget
    //</Snippet24>
    {
        private IOleCommandTarget m_nextCommandHandler;
        private ITextView m_textView;
        private TestCompletionHandlerProvider m_provider;
        private ICompletionSession m_session;

        internal TestCompletionCommandHandler(IVsTextView textViewAdapter, ITextView textView, TestCompletionHandlerProvider provider)
        {
            this.m_textView = textView;
            this.m_provider = provider;

            //add the command to the command chain
            textViewAdapter.AddCommandFilter(this, out m_nextCommandHandler);
        }

        //<Snippet25>
        public int QueryStatus(ref Guid pguidCmdGroup, uint cCmds, OLECMD[] prgCmds, IntPtr pCmdText)
        {
            if (!VsShellUtilities.IsInAutomationFunction(m_provider.ServiceProvider))
            {
                if (pguidCmdGroup == VSConstants.VSStd2K && cCmds > 0)
                {
                    // make the Insert Snippet command appear on the context menu 
                    if ((uint)prgCmds[0].cmdID == (uint)VSConstants.VSStd2KCmdID.INSERTSNIPPET)
                    {
                        prgCmds[0].cmdf = (int)Constants.MSOCMDF_ENABLED | (int)Constants.MSOCMDF_SUPPORTED;
                        return VSConstants.S_OK;
                    }
                }
            }

            return m_nextCommandHandler.QueryStatus(ref pguidCmdGroup, cCmds, prgCmds, pCmdText);
        }
        //</Snippet25>

        public int Exec(ref Guid pguidCmdGroup, uint nCmdID, uint nCmdexecopt, IntPtr pvaIn, IntPtr pvaOut)
        {
            if (VsShellUtilities.IsInAutomationFunction(m_provider.ServiceProvider))
            {
                return m_nextCommandHandler.Exec(ref pguidCmdGroup, nCmdID, nCmdexecopt, pvaIn, pvaOut);
            }
            //make a copy of this so we can look at it after forwarding some commands
            uint commandID = nCmdID;
            char typedChar = char.MinValue;
            //make sure the input is a char before getting it
            if (pguidCmdGroup == VSConstants.VSStd2K && nCmdID == (uint)VSConstants.VSStd2KCmdID.TYPECHAR)
            {
                typedChar = (char)(ushort)Marshal.GetObjectForNativeVariant(pvaIn);
            }

            //check for a commit character
            if (nCmdID == (uint)VSConstants.VSStd2KCmdID.RETURN
                || nCmdID == (uint)VSConstants.VSStd2KCmdID.TAB
                || (char.IsWhiteSpace(typedChar) || char.IsPunctuation(typedChar)))
            {
                //check for a a selection
                if (m_session != null && !m_session.IsDismissed)
                {
                    //if the selection is fully selected, commit the current session
                    if (m_session.SelectedCompletionSet.SelectionStatus.IsSelected)
                    {
                        m_session.Commit();
                        //also, don't add the character to the buffer
                        return VSConstants.S_OK;
                    }
                    else
                    {
                        //if there is no selection, dismiss the session
                        m_session.Dismiss();
                    }
                }
            }

            //pass along the command so the char is added to the buffer
            int retVal = m_nextCommandHandler.Exec(ref pguidCmdGroup, nCmdID, nCmdexecopt, pvaIn, pvaOut);
            bool handled = false;
            if (!typedChar.Equals(char.MinValue) && char.IsLetterOrDigit(typedChar))
            {
                if (m_session == null || m_session.IsDismissed) // If there is no active session, bring up completion
                {
                    this.TriggerCompletion();
                    m_session.Filter();
                }
                else    //the completion session is already active, so just filter
                {
                    m_session.Filter();
                }
                handled = true;
            }
            else if (commandID == (uint)VSConstants.VSStd2KCmdID.BACKSPACE   //redo the filter if there is a deletion
                || commandID == (uint)VSConstants.VSStd2KCmdID.DELETE)
            {
                if (m_session != null && !m_session.IsDismissed)
                    m_session.Filter();
                handled = true;
            }
            if (handled) return VSConstants.S_OK;
            return retVal;
        }

        private bool TriggerCompletion()
        {
            //the caret must be in a non-projection location 
            SnapshotPoint? caretPoint =
            m_textView.Caret.Position.Point.GetPoint(
            textBuffer => (!textBuffer.ContentType.IsOfType("projection")), PositionAffinity.Predecessor);
            if (!caretPoint.HasValue)
            {
                return false;
            }

            m_session = m_provider.CompletionBroker.CreateCompletionSession
            (m_textView,
                caretPoint.Value.Snapshot.CreateTrackingPoint(caretPoint.Value.Position, PointTrackingMode.Positive),
                true);

            //subscribe to the Dismissed event on the session 
            m_session.Dismissed += this.OnSessionDismissed;
            m_session.Start();

            return true;
        }

        private void OnSessionDismissed(object sender, EventArgs e)
        {
            m_session.Dismissed -= this.OnSessionDismissed;
            m_session = null;
        }
    }
}
namespace ImplementingCodeSnippetsPart2
{
    [ProvideLanguageCodeExpansion(
    SnippetUtilities.LanguageServiceGuidStr,
    "TestSnippets", //the language name
    0,              //the resource id of the language
    "TestSnippets", //the language ID used in the .snippet files
    @"%InstallRoot%\TestSnippets\Snippets\%LCID%\SnippetsIndex.xml",
        //the path of the index file
    SearchPaths = @"%InstallRoot%\TestSnippets\Snippets\%LCID%\",
    ForceCreateDirs = @"%InstallRoot%\TestSnippets\Snippets\%LCID%\")]
    //<Snippet27>
    internal class TestCompletionCommandHandler : IOleCommandTarget, IVsExpansionClient
    //</Snippet27>
    {
        private IOleCommandTarget m_nextCommandHandler;
        private ITextView m_textView;
        private TestCompletionHandlerProvider m_provider;
        private ICompletionSession m_session;

        //<Snippet29>
        IVsTextView m_vsTextView;
        IVsExpansionManager m_exManager;
        IVsExpansionSession m_exSession;
        //</Snippet29>

        //<Snippet30>
        internal TestCompletionCommandHandler(IVsTextView textViewAdapter, ITextView textView, TestCompletionHandlerProvider provider)
        {
            this.m_textView = textView;
            m_vsTextView = textViewAdapter;
            m_provider = provider;
            //get the text manager from the service provider
            IVsTextManager2 textManager = (IVsTextManager2)m_provider.ServiceProvider.GetService(typeof(SVsTextManager));
            textManager.GetExpansionManager(out m_exManager);
            m_exSession = null;

            //add the command to the command chain
            textViewAdapter.AddCommandFilter(this, out m_nextCommandHandler);
        }
        //</Snippet30>

        public int QueryStatus(ref Guid pguidCmdGroup, uint cCmds, OLECMD[] prgCmds, IntPtr pCmdText)
        {
            if (!VsShellUtilities.IsInAutomationFunction(m_provider.ServiceProvider))
            {
                if (pguidCmdGroup == VSConstants.VSStd2K && cCmds > 0)
                {
                    // make the Insert Snippet command appear on the context menu 
                    if ((uint)prgCmds[0].cmdID == (uint)VSConstants.VSStd2KCmdID.INSERTSNIPPET)
                    {
                        prgCmds[0].cmdf = (int)Constants.MSOCMDF_ENABLED | (int)Constants.MSOCMDF_SUPPORTED;
                        return VSConstants.S_OK;
                    }
                }
            }

            return m_nextCommandHandler.QueryStatus(ref pguidCmdGroup, cCmds, prgCmds, pCmdText);
        }

        public int Exec(ref Guid pguidCmdGroup, uint nCmdID, uint nCmdexecopt, IntPtr pvaIn, IntPtr pvaOut)
        {
            if (VsShellUtilities.IsInAutomationFunction(m_provider.ServiceProvider))
            {
                return m_nextCommandHandler.Exec(ref pguidCmdGroup, nCmdID, nCmdexecopt, pvaIn, pvaOut);
            }
            //make a copy of this so we can look at it after forwarding some commands
            uint commandID = nCmdID;
            char typedChar = char.MinValue;
            //make sure the input is a char before getting it

            //<Snippet31>
            //code previously written for Exec
            if (pguidCmdGroup == VSConstants.VSStd2K && nCmdID == (uint)VSConstants.VSStd2KCmdID.TYPECHAR)
            {
                typedChar = (char)(ushort)Marshal.GetObjectForNativeVariant(pvaIn);
            }
            //the snippet picker code starts here
            if (nCmdID == (uint)VSConstants.VSStd2KCmdID.INSERTSNIPPET)
            {
                IVsTextManager2 textManager = (IVsTextManager2)m_provider.ServiceProvider.GetService(typeof(SVsTextManager));

                textManager.GetExpansionManager(out m_exManager);

                m_exManager.InvokeInsertionUI(
                    m_vsTextView,
                    this,      //the expansion client
                    new Guid(SnippetUtilities.LanguageServiceGuidStr),
                    null,       //use all snippet types
                    0,          //number of types (0 for all)
                    0,          //ignored if iCountTypes == 0
                    null,       //use all snippet kinds
                    0,          //use all snippet kinds
                    0,          //ignored if iCountTypes == 0
                    "TestSnippets", //the text to show in the prompt
                    string.Empty);  //only the ENTER key causes insert 

                return VSConstants.S_OK;
            }
            //</Snippet31>

            //<Snippet32>
            //the expansion insertion is handled in OnItemChosen
            //if the expansion session is still active, handle tab/backtab/return/cancel
            if (m_exSession != null)
            {
                if (nCmdID == (uint)VSConstants.VSStd2KCmdID.BACKTAB)
                {
                    m_exSession.GoToPreviousExpansionField();
                    return VSConstants.S_OK;
                }
                else if (nCmdID == (uint)VSConstants.VSStd2KCmdID.TAB)
                {

                    m_exSession.GoToNextExpansionField(0); //false to support cycling through all the fields
                    return VSConstants.S_OK;
                }
                else if (nCmdID == (uint)VSConstants.VSStd2KCmdID.RETURN || nCmdID == (uint)VSConstants.VSStd2KCmdID.CANCEL)
                {
                    if (m_exSession.EndCurrentExpansion(0) == VSConstants.S_OK)
                    {
                        m_exSession = null;
                        return VSConstants.S_OK;
                    }
                }
            }
            //</Snippet32>

            //<Snippet33>
            //neither an expansion session nor a completion session is open, but we got a tab, so check whether the last word typed is a snippet shortcut 
            if (m_session == null && m_exSession == null && nCmdID == (uint)VSConstants.VSStd2KCmdID.TAB)
            {
                //get the word that was just added 
                CaretPosition pos = m_textView.Caret.Position;
                TextExtent word = m_provider.NavigatorService.GetTextStructureNavigator(m_textView.TextBuffer).GetExtentOfWord(pos.BufferPosition - 1); //use the position 1 space back
                string textString = word.Span.GetText(); //the word that was just added
                //if it is a code snippet, insert it, otherwise carry on
                if (InsertAnyExpansion(textString, null, null))
                    return VSConstants.S_OK;
            }
            //</Snippet33>

            //check for a commit character
            if (nCmdID == (uint)VSConstants.VSStd2KCmdID.RETURN
                || nCmdID == (uint)VSConstants.VSStd2KCmdID.TAB
                || (char.IsWhiteSpace(typedChar) || char.IsPunctuation(typedChar)))
            {
                //check for a a selection
                if (m_session != null && !m_session.IsDismissed)
                {
                    //if the selection is fully selected, commit the current session
                    if (m_session.SelectedCompletionSet.SelectionStatus.IsSelected)
                    {
                        m_session.Commit();
                        //also, don't add the character to the buffer
                        return VSConstants.S_OK;
                    }
                    else
                    {
                        //if there is no selection, dismiss the session
                        m_session.Dismiss();
                    }
                }
            }

            //pass along the command so the char is added to the buffer
            int retVal = m_nextCommandHandler.Exec(ref pguidCmdGroup, nCmdID, nCmdexecopt, pvaIn, pvaOut);
            bool handled = false;
            if (!typedChar.Equals(char.MinValue) && char.IsLetterOrDigit(typedChar))
            {
                if (m_session == null || m_session.IsDismissed) // If there is no active session, bring up completion
                {
                    this.TriggerCompletion();
                    m_session.Filter();
                }
                else    //the completion session is already active, so just filter
                {
                    m_session.Filter();
                }
                handled = true;
            }
            else if (commandID == (uint)VSConstants.VSStd2KCmdID.BACKSPACE   //redo the filter if there is a deletion
                || commandID == (uint)VSConstants.VSStd2KCmdID.DELETE)
            {
                if (m_session != null && !m_session.IsDismissed)
                    m_session.Filter();
                handled = true;
            }
            if (handled) return VSConstants.S_OK;
            return retVal;
        }

        private bool TriggerCompletion()
        {
            //the caret must be in a non-projection location 
            SnapshotPoint? caretPoint =
            m_textView.Caret.Position.Point.GetPoint(
            textBuffer => (!textBuffer.ContentType.IsOfType("projection")), PositionAffinity.Predecessor);
            if (!caretPoint.HasValue)
            {
                return false;
            }

            m_session = m_provider.CompletionBroker.CreateCompletionSession
            (m_textView,
                caretPoint.Value.Snapshot.CreateTrackingPoint(caretPoint.Value.Position, PointTrackingMode.Positive),
                true);

            //subscribe to the Dismissed event on the session 
            m_session.Dismissed += this.OnSessionDismissed;
            m_session.Start();

            return true;
        }

        private void OnSessionDismissed(object sender, EventArgs e)
        {
            m_session.Dismissed -= this.OnSessionDismissed;
            m_session = null;
        }

        //<Snippet34>
        public int EndExpansion()
        {
            m_exSession = null;
            return VSConstants.S_OK;
        }

        public int FormatSpan(IVsTextLines pBuffer, TextSpan[] ts)
        {
            return VSConstants.S_OK;
        }

        public int GetExpansionFunction(IXMLDOMNode xmlFunctionNode, string bstrFieldName, out IVsExpansionFunction pFunc)
        {
            pFunc = null;
            return VSConstants.S_OK;
        }

        public int IsValidKind(IVsTextLines pBuffer, TextSpan[] ts, string bstrKind, out int pfIsValidKind)
        {
            pfIsValidKind = 1;
            return VSConstants.S_OK;
        }

        public int IsValidType(IVsTextLines pBuffer, TextSpan[] ts, string[] rgTypes, int iCountTypes, out int pfIsValidType)
        {
            pfIsValidType = 1;
            return VSConstants.S_OK;
        }

        public int OnAfterInsertion(IVsExpansionSession pSession)
        {
            return VSConstants.S_OK;
        }

        public int OnBeforeInsertion(IVsExpansionSession pSession)
        {
            return VSConstants.S_OK;
        }

        public int PositionCaretForEditing(IVsTextLines pBuffer, TextSpan[] ts)
        {
            return VSConstants.S_OK;
        }
        //</Snippet34>

        //<Snippet35>
        public int OnItemChosen(string pszTitle, string pszPath)
        {
            InsertAnyExpansion(null, pszTitle, pszPath);
            return VSConstants.S_OK;
        }
        //</Snippet35>

        //<Snippet36>
        private bool InsertAnyExpansion(string shortcut, string title, string path)
        {
            //first get the location of the caret, and set up a TextSpan
            int endColumn, startLine;
            //get the column number from  the IVsTextView, not the ITextView
            m_vsTextView.GetCaretPos(out startLine, out endColumn);

            TextSpan addSpan = new TextSpan();
            addSpan.iStartIndex = endColumn;
            addSpan.iEndIndex = endColumn;
            addSpan.iStartLine = startLine;
            addSpan.iEndLine = startLine;

            if (shortcut != null) //get the expansion from the shortcut
            {
                //reset the TextSpan to the width of the shortcut, 
                //because we're going to replace the shortcut with the expansion
                addSpan.iStartIndex = addSpan.iEndIndex - shortcut.Length;

                m_exManager.GetExpansionByShortcut(
                    this,
                    new Guid(SnippetUtilities.LanguageServiceGuidStr),
                    shortcut,
                    m_vsTextView,
                    new TextSpan[] { addSpan },
                    0,
                    out path,
                    out title);

            }
            if (title != null && path != null)
            {
                IVsTextLines textLines;
                m_vsTextView.GetBuffer(out textLines);
                IVsExpansion bufferExpansion = (IVsExpansion)textLines;

                if (bufferExpansion != null)
                {
                    int hr = bufferExpansion.InsertNamedExpansion(
                        title,
                        path,
                        addSpan,
                        this,
                        new Guid(SnippetUtilities.LanguageServiceGuidStr),
                        0,
                       out m_exSession);
                    if (VSConstants.S_OK == hr)
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        //</Snippet36>
    }
}