// This example is the handler for an Edit Clear All command.
void CExampleDoc::OnEditClearAll()
{
   DeleteContents();
   UpdateAllViews(NULL);
}

void CExampleDoc::DeleteContents()
{
   // Re-initialize document data here.
}