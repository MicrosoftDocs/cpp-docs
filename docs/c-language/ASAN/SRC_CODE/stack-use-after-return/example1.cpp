
char *x;

void foo() {
  char stack_buffer[42];
  x = &stack_buffer[13];
}

int main() {

  foo();
  *x = 42; // Boom!

  return 0;
}
