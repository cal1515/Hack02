/**
* Author: Cal Malone
*
* This program will use given latitudes and longitudes
* to calculate the distance bewtween two points on the globe
* using the Spherical Law of Consines.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)  {

  double latOrigin , latDestination , longOrigin , longDestination ;
  double latOriginRad , latDestinationRad , longDifferenceRad ;
  double airDistance , longDifference ;
  const int radiusEarth = 6371 ;

  longDifference = (longDestination - longOrigin) ;

  printf("Please enter Origin Latitude: \n ") ;
  scanf("%lf", &latOrigin) ;

  printf("Please enter Origin Longitude: \n ") ;
  scanf("%lf", &longOrigin) ;

  printf("Please enter Destination Latitude: \n ") ;
  scanf("%lf", &latDestination) ;

  printf("Please enter Destination Longitude: \n ") ;
  scanf("%lf", &longDestination) ;

  latOriginRad = (latOrigin/180) * M_PI ;
  latDestinationRad = (latDestination/180) * M_PI ;
  longDifferenceRad = (longDifference/180) * M_PI ;

  airDistance = acos( (sin(latOriginRad) * sin(latDestinationRad) ) + (cos(latOriginRad) * cos(latDestinationRad) * cos(longDifferenceRad))) * (double) radiusEarth ;

  printf("Location Distance \n ======================== \n Origin: (%lf, %lf) \n Destination: (%lf, %lf) \n Air Distance is %lf kms \n" , &latOrigin, &longOrigin, &latDestination, &longDestination, &airDistance) ;


return 0 ;

}
