// Set the image count of the image list to be 10 with
// all images being the system question mark icon.
m_myImageList.SetImageCount(10);
HICON hIcon = AfxGetApp()->LoadStandardIcon(IDI_QUESTION);

for (int i = 0; i < 10; i++)
{
   m_myImageList.Replace(i, hIcon);
}