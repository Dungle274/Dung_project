#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	float xa,ya,xb,yb,xc,yc,xm,ym;
	printf("nhap toa do diem A: ");
	scanf("%f %f",&xa,&ya);
	printf("nhap toa do diem B: ");
	scanf("%f %f",&xb,&yb);
	printf("nhap toa do diem C: ");
	scanf("%f %f",&xc,&yc);
	printf("nhap toa do diem M: ");
	scanf("%f %f",&xm,&ym);

	//tinh dien tich tam giac
	float Sabc=0.5*abs(xa*yb-ya*xb + xb*yc-yb*xc + xc*ya-yc*xa);
	float Sabm=0.5*abs(xa*yb-ya*xb + xb*ym-yb*xm + xm*ya-ym*xa);
	float Samc=0.5*abs(xa*ym-ya*xm + xm*yc-ym*xc + xc*ya-yc*xa);
	float Smbc=0.5*abs(xm*yb-ym*xb + xb*yc-yb*xc + xc*ym-yc*xm);

	if(Sabm==0||Samc==0||Smbc==0)
		{printf("diem M nam tren canh tam giac ABC");}
	else if(Smbc+Samc+Sabm==Sabc)
		{printf("diem M nam trong tam giac ABC");}
	else
		{printf("diem M nam ngoai tam giac ABC");}
	return 0;

}