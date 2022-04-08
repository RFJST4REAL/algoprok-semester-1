#include <stdio.h>

int main(){
	long int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, set, result1, result2, result3;
	
	scanf(" (%ld+%ld)x(%ld-%ld)", &num1, &num2, &num3, &num4);
	scanf(" (%ld+%ld)x(%ld-%ld)", &num5, &num6, &num7, &num8);
	scanf(" (%ld+%ld)x(%ld-%ld)", &num9, &num10, &num11, &num12);

		
		result1= (num1+num2) * (num3-num4);
		result2= (num5+num6) * (num7-num8);
		result3= (num9+num10) * (num11-num12);
		printf("%ld %ld %ld\n", result1, result2, result3);
		


    
    return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    double results[3] = { 0 };
//    for(int i = 0; i < 3; i++){
//        long long int a, b, c, d;
//        scanf(" (%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d);
//        double res = (a+b)*(c-d);
//        results[i] = res;
//    }
//    printf("%.0lf %.0lf %.0lf\n", results[0], results[1], results[2]);
//    return 0;
//}
