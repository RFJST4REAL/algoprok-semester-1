#include <stdio.h>
#include <stdlib.h>
int main(){
  int missions;
  scanf("%d", &missions);
  long long int *missionLevels = (long long int *)malloc(missions * sizeof(long long int));
  for(int i = 0; i < missions; i++){
    scanf("%lld", &missionLevels[i]);
  }
  long long int powerLevel;
  scanf("%lld", &powerLevel);
  //Sort missionLevels
  for(int i = 0; i < missions; i++){
    for(int j = i + 1; j < missions; j++){
      if(missionLevels[i] > missionLevels[j]){
        long long int temp = missionLevels[i];
        missionLevels[i] = missionLevels[j];
        missionLevels[j] = temp;
      }
    }
  }
  //Add up values of missionlevels so that the total is less than or equal to powerLevel
  long long int total = 0;
  int indexes = 0;
  for(int i = 0; i < missions; i++){
    total += missionLevels[i];
    indexes++;
    if(total > powerLevel){
      total -= missionLevels[i];
      indexes--;
      break;
    }
  }

  printf("%d\n", indexes);
  return 0;
}
