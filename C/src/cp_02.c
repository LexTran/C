# include <stdio.h>
int main(){
	int i;
	scanf("%d", &i);
	double bonus;
	if(i<10)
		bonus = i*0.1;
	else if(i>=10&&i<20)
		bonus = (i-10)*0.075+1;
	else if(i>=20&&i<40)
		bonus = 1+0.75+(i-20)*0.05;
	else if(i>=40&&i<60)
		bonus = 1+0.75+1+(i-40)*0.03;
	else if(i>=60&&i<100)
		bonus = 1+0.75+1+0.6+(i-60)*0.015;
	else
		bonus = 1+0.75+1+0.6+0.6+(i-100)*0.01;
	int bonus_result = bonus*10000;
	printf("%d",bonus_result);
	return 0;
}
