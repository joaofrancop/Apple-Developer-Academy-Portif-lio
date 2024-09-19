int main(void)
{
  int x,y,w,*p1,*p2;
  x = 20;
  w = 30;
  p1 = &x;
  p2 = &w;
  y = *p1 + *p2;

  printf("Y = %d", y);
  return 0;
}

/*
y = 50 
*/