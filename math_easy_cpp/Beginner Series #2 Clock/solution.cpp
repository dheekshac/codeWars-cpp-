int past(int h, int m, int s) {
  int mins = h*60;
  m+=mins;
  int sec= m*60;
  s+=sec;
  int ms = s*1000;
  return ms;
}
