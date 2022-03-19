#include <stdio.h>
#include <stdbool.h>
int main(){
	int date,month,year,num;
	bool run_flag;//run_flag用于判断是否为闰年
	scanf("%d %d %d",&year,&month,&date);
	switch(month){
		case 1:
			num = 0;
			break;
		case 2:
			num = 31;
			break;
		case 3:
			num = 59;
			break;
		case 4:
			num = 90;
			break;
		case 5:
			num = 120;
			break;
		case 6:
			num = 151;
			break;
		case 7:
			num = 181;
			break;
		case 8:
			num = 212;
			break;
		case 9:
			num = 243;
			break;
		case 10:
			num = 273;
			break;
		case 11:
			num = 304;
			break;
		case 12:
			num = 334;
			break;
		default:
			break;
	}
	num = num+date;
	if(year%400==0||(year%4==0&&year%100!=0))
		run_flag = true;
	else
		run_flag = false;
	if(run_flag&&month>2)
		num += 1;
	printf("%d",num);
	return 0;
}
