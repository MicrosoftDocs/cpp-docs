// Clear the undo buffer.
if (m_myRichEditCtrl.CanUndo())
{
   m_myRichEditCtrl.EmptyUndoBuffer();
   ASSERT(!m_myRichEditCtrl.CanUndo());
}