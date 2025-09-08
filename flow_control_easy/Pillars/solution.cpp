long pillars(int num_of_pillars, int distance, int width) {
  if(num_of_pillars==1) return 0;
  if(num_of_pillars==2) return (distance*100);
  int distance_final = (num_of_pillars-2)*(width) + (num_of_pillars-1)*distance*100;
  return distance_final;
}
