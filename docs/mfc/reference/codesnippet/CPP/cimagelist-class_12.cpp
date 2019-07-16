int i, dx, cx, cy, nCount = m_myImageList.GetImageCount();
HICON hIcon;

::ImageList_GetIconSize(m_myImageList, &cx, &cy);

// Draw the images of the image list on the DC.
for (dx = 0, i = 0; i < nCount; i++)
{
   hIcon = m_myImageList.ExtractIcon(i);

   dc.DrawIcon(dx, 0, hIcon);
   dx += cx;
}