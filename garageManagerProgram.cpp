#include <stdio.h>

int main()
{
	float calculateCharges(float hours);
    float hours[3];
    float totalHours = 0.0, totalCharge = 0.0;
    int i;
    
    for(i=0; i<3; i++) {
        printf("Enter the number of hours for customer #%d: ", i+1);
        scanf("%f/n", &hours[i]);
    }
    
    printf("\nCar\t Hours\t Charge\n");
    
    for(i=0; i<3; i++){
        float charge = calculateCharges(hours[i]);
        printf("%d\t %.1f\t $%.2f\n", i+1, hours[i], charge);
        totalHours += hours[i];
        totalCharge += charge;
    }
    
    printf("\nTOTAL\t %.1f\t $%.2f\n", totalHours, totalCharge);
    return 0;
}

float calculateCharges(float hours){
    if(hours <= 3.0)
    {
    	return 20.0;
	}
    else if(hours <= 24.0)
    {
    	return 20.0 + 5.0 * (hours - 3);
	}
    else
    {
    	return 50.0;
	}
}
