// GetDefaultMenu() is an undocumented virtual function for
// CDocument class. It allows the document to determine which
// menu to display. m_hDefaultMenu is of type HMENU. Its value
// is initialized to NULL either in the constructor or
// CDocument::OnNewDocument(). And the menu resource is destroyed
// in the destructor to avoid having too many menus loaded at once.
HMENU CMdiDoc::GetDefaultMenu()
{
   if (m_hDefaultMenu)
      return m_hDefaultMenu;

   return COleServerDoc::GetDefaultMenu();
}

// Initialize member variable(s) in the constructor. CMdiDoc is
// a CDocument-derived class.
CMdiDoc::CMdiDoc()
{
   // Use OLE compound files
   EnableCompoundFile();

   m_hDefaultMenu = NULL; // initialize to NULL
}

// Destroy menu resource in CMdiDoc's destructor. CMdiDoc is
// a CDocument-derived class.
CMdiDoc::~CMdiDoc()
{
   if (m_hDefaultMenu)
      ::DestroyMenu(m_hDefaultMenu);
}