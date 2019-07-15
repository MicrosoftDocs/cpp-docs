CStatic myStatic;

// Create a child enhanced metafile static control.
myStatic.Create(_T("my static"),
                WS_CHILD | WS_VISIBLE | SS_ENHMETAFILE | SS_CENTERIMAGE,
                CRect(10, 10, 150, 50), pParentWnd);

// If no image is defined for the static control, define the image
// to be "myemf.emf."
if (myStatic.GetEnhMetaFile() == NULL)
   myStatic.SetEnhMetaFile(::GetEnhMetaFile(_T("myemf.emf")));