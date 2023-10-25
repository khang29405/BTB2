#include<stdio.h>
#include<conio.h>
#include<math.h>
void tinhtoan();
void chuso();
void maxmin();
void nhapdiem();
void ptb1();
void ngay();
void tamgiac();
void ptb2();
void tiendien();
int main()
{
  tinhtoan();
  chuso();
  maxmin();
  nhapdiem();
  ptb1();
  ngay();
  tamgiac();
  ptb2();
  tiendien();
 return 0;
} 
  void tinhtoan()
  {
  	int a,b,tong,hieu,tich,thuong;
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=a/b;
	printf("\ntong hai so =%d",tong);
	printf("\nhieu hai so =%d",hieu);
	printf("\ntich hai so =%d",tich);
	printf("\nthuong hai so =%d",thuong);
  }
  void chuso()
  {  
    int n,tong=0,m;  
    printf("\nNhap mot so bat ky: ");  
    scanf("%d",&n);   
    while(n>0)  
 {  
    m=n%10;  
    tong=tong+m;  
    n=n/10;  
 }  
    printf("\nTong cac ky so cua so da cho = %d",tong);  
 }
  void maxmin()
  {
  	int a,b;
  	int max,min;
  	printf("\n nhap so a:");
  	scanf("%d",&a);
  	printf("\n nhap so b:");
  	scanf("%d",&b);
  	if(a>b)	
  	{
  	max=a;
  	printf("\n gia tri lon nhat la %d",max);
    }
    else
    {
    	max=b;
    	printf("\n gia tri lon nhat la %d",max);
    }
    
    if(a<b)
    {
    	min=a;
    	printf("\n gia tri nho nhat la %d",min);
    }
    else
    {
    	min=b;
    	printf("\n gia tri nho nhat la %d",min);
    }  	
  }
  void nhapdiem()
  {
  	int a,b,c,dtb;
  	printf("\n nhap diem toan:");
  	scanf("%d",&a);
  	printf("\n nhap diem ly:");
  	scanf("%d",&b);
  	printf("\n nhap diem hoa:");
  	scanf("%d",&c);
  	dtb=(a+b+c)/3;
  	if(dtb>=9)
  	{
  		printf("ban la hoc sinh xuat sac");
  	}
  	else if(dtb>=8 && dtb<9)
  	{
  		printf("\nban la hoc sinh gioi");
  	}
  	else if(dtb>=6.5 && dtb<8)
  	{
  		printf("\nban la hoc sinh kha");
  	}
  	else if(dtb>=5 && dtb<6.5)
  	{
  		printf("\nban la hoc sinh trung binh");
  	}
  	else if(dtb>=3.5 && dtb<5)
  	{
  		printf("\nban la hoc sinh yeu");
  	}
  	else if(dtb<3.5)
  	{
  		printf("\nban la hoc sinh kem");
  	}
  }
  void ptb1()
  {
  	int a,b;
    float x;
  	printf("\n nhap so a:");
  	scanf("%d",&a);
  	printf("\n nhap so b:");
  	scanf("%d",&b);
  	printf("\nphuong trinh bac nhat co dang %dx+%d=0",a,b);
  	if(a==0)
  	 if(b==0)
  	 {
  	 	printf("\nphuong trinh vo nghiem");
  	 }
  	 else
  	 {
  	 	printf("\nphuong trinh vo so nghiem");
  	 }
  	 else
  	 {
  	 	x= (float)-b/a;
  	 	printf("\nphuong trinh co nghiem x=%0.2f",x);
  	 }	
  }
  void ngay()
  {
  	int n;
  	printf("\n nhap vao so n(1-7) bat ky:");
  	scanf("%d",&n);
  	switch(n)
  	{
  		case 1: printf("\nSunday"); break;
  		case 2: printf("\nMonday"); break;
  		case 3: printf("\nTuesday"); break;
  		case 4: printf("\nWednesday"); break;
  		case 5: printf("\nThursday"); break;
  		case 6: printf("\nFriday"); break;
  		case 7: printf("\nSaturday"); break;
  		default: printf("gia tri khong hop le\n");
  	}
  }
  void tamgiac()
  {
  	float a,b,c,p,S,h1,h2,h3;
  	printf("\nnhap so canh a:");
  	scanf("%f",&a);
  	printf("\nnhap so canh b:");
  	scanf("%f",&b);
  	printf("\nnhap so canh c:");
  	scanf("%f",&c);
  	if(a<=0 || b<=0 || c<=0)
  	{
  		printf("\n tam giac phai co canh lon hon 0");
  	}
  	
  	else if(a==b && a==c && c==b)
  	{
  		
  		printf("\n la tam giac deu");
  		
  	}
  	else if(a==b || a==c || b==c)
  	{
  		printf("\n tam giac can");
  	}
  	else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
  	{
  		printf("\ntam giac vuong");
  	}
  	else 
  	{
  		printf("\ntam giac nhon");
  	}
  	p=(a+b+c)/2;
  	printf("\nchu vi tam giac=%.2f",p);
  	S=sqrt(p*(p-a)*(p-b)*(p-c));
  	printf("\ndien tich tam giac=%.2f",S);
  	h1=2*S/a;
  	h2=2*S/b;
  	h3=2*S/c;
  	printf("\nduong cao cua h1=%.2f",h1);
  	printf("\nduong cao cua h2=%.2f",h2);
  	printf("\nduong cao cua h3=%.2f",h3);
  }
  void ptb2()
  {
  	float a,b,c,delta,x1,x2;
  	printf("\nnhap so a:");
  	scanf("%f",&a);
  	printf("\nnhap so b:");
  	scanf("%f",&b);
  	printf("\nnhap so c:");
  	scanf("%f",&c);
    delta=b*b-4*a*c;
    if(delta==0)
    {
      printf("phuong trinh co nghiem x1=x2=%.2f",-b/2*a);
    }
    else if(delta<0)
    {
    	printf("\n phuong trinh vo nghiem");
    }
    else if(delta>0)
    {
    	x1=(-b-sqrt(delta))/(2*a);
    	x2=(-b+sqrt(delta))/(2*a);
    	printf("phuong trinh co hai nghiem x1=%.2f, x2=%.2f",x1,x2);
    }
  }
  void tiendien()
 {
 	
 	float tiendien,a;
 	printf("\nnhap muc tieu thu dien Kwh =");
 	scanf("%f",&a);
 	if(a<=100)
 	{
 		tiendien=a*455;
 		printf("ban da tieu thu 100Kwh co don gia la 455d/Kwh");
 		printf("\ntien dien ban phai tra la %.0f",tiendien);
 	}
 	else if(a>100 && a<=150)
 	{
 		printf("ban da tieu thu 101-150 Kwh co don gia la 591d/Kwh");
 		tiendien=a*591;
 		printf("\ntien dien ban phai tra la %.0f",tiendien);
 	}
 	else if(a>150 && a<=200)
 	{
 		printf("\nban da tieu thu 151-200 Kwh co don gia la 818d/Kwh");
 		tiendien=a*818;
 		printf("\ntien dien ban phai tra la %.0f",tiendien);
 	}
 	else if(a>200)
 	{
 		printf("\nban da tieu thu >200 Kwh co don gia la 1000d/Kwh");
 		tiendien=a*1000;
 		printf("\ntien dien ban phai tra la %.0f",tiendien);
 	}
 }
  
  
  
