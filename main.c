#include <stdio.h>

int bus_terminus (size_t nb_stops, const short bus_stops[nb_stops][2]){
  int i,j;
  auto bus = 0;
  for(i=0;i<nb_stops;i++){
    for(j=0;j<2;j++){
      if(j==0){
        bus+=bus_stops[i][j];
      }
      else{
        bus-=bus_stops[i][j];
      }
    }
  }
  return bus;
}

int main(void) {
  printf("Hello World\n");
  return 0;
}