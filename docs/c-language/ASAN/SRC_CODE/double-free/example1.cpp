
int main() {

  int *x = new int[42];
  delete [] x;

  // ... some complex body of code

  delete [] x;
  return 0;
}
