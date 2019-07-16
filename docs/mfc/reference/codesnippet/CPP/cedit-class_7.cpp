// Clear the undo buffer.
if (m_myEdit.CanUndo())
{
   m_myEdit.EmptyUndoBuffer();
   ASSERT(!m_myEdit.CanUndo());
}